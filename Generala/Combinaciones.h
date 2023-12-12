#ifndef COMBINACIONES_H_INCLUDED
#define COMBINACIONES_H_INCLUDED
//CHEKEO DE COMBINACIONES
void Combinaciones (int Vec[],int VecDados[],int* Num_May_Reps, int* Dado_May)
{
    for (int i=0; i<=5; i++)
    {
        VecDados[Vec[i]-1]++;
    }
    for(int i=0; i<=5; i++)
    {
        if(i==0)
        {
            *Num_May_Reps=VecDados[i];
            *Dado_May=i+1;
        }
        else if(VecDados[i]>=*Num_May_Reps)
        {
            *Num_May_Reps=VecDados[i];
            *Dado_May=i+1;
        }
    }
}


//COMBINACIONES
//combinacion 1: TrioX
void TrioX(int* Num_May_Reps, int* Dado_May, int* pun,int opcion,int* pun_2,int Bd_turn)
{
    if (opcion==1)
    {
        if (*Num_May_Reps>=3&&*Num_May_Reps<=5)
        {
                *pun+=*Dado_May*10;
        }
    }
    if (opcion==2)
    {
        if (*Num_May_Reps>=3&&*Num_May_Reps<=5)
        {
            if (Bd_turn==0)
            {
                *pun+=*Dado_May*10;
            }
            if (Bd_turn==1)
            {
                *pun_2+=*Dado_May*10;
            }
        }
    }
}

//combinacion 2: Suma De dados
void Sum_Dados(int* Num_May_Reps, int Vec[], int* pun,int opcion,int* pun_2,int Bd_turn)
{
    if (opcion==1)
    {
        if (*Num_May_Reps==2)
        {
            for(int i=0; i<=5; i++)
            {
                *pun+=Vec[i];
            }
        }
    }
    if (opcion==2)
    {
        if (*Num_May_Reps==2)
        {
            if (Bd_turn==0)
            {
                for(int i=0; i<=5; i++)
                {
                    *pun+=Vec[i];
                }
            }
            if (Bd_turn==1)
            {
                for(int i=0; i<=5; i++)
                {
                    *pun_2+=Vec[i];
                }
            }
        }
    }
}

//combinacion 3: Escalera
void Escalera(int* Num_May_Reps, bool* partida,int* pun,int* puntl,int opcion,int* pun_2,int* puntl_2,int Bd_turn,int* Int_Escalera)
{
    if (opcion==1)
    {
        if (*Num_May_Reps==1)
        {
            *partida=false;
            cout<<endl<<"!ESCALERA! !GANASTE LA PARTIDA!";
            *puntl=*puntl+*pun;
        }
    }
    if (opcion==2)
    {
        if (*Num_May_Reps==1)
        {
            if (Bd_turn==0)
            {
                *partida=false;
                cout<<endl<<"!ESCALERA! !GANASTE LA PARTIDA!";
                *puntl=*puntl+*pun;
                *Int_Escalera=1;
            }
            if (Bd_turn==1)
            {
                *partida=false;
                cout<<endl<<"!ESCALERA! !GANASTE LA PARTIDA!";
                *puntl_2=*puntl_2+*pun_2;
                *Int_Escalera=2;
            }
        }
    }
}

//combinacion 4 y 5: Sexteto X y Sexteto 6
void Sexteto(int* Num_May_Reps, int* Dado_May, int* pun,int opcion,int* pun_2,int Bd_turn)
{
    if (opcion==1)
    {
        if (*Num_May_Reps==6&&*Dado_May==6)//SEXTETO DE 6
        {
            *pun=0;
        }
        else if(*Num_May_Reps==6)//SEXTETO DE X
        {
            *pun+=*Dado_May*50;
        }
    }

    if (opcion==2)
    {
        if (Bd_turn==0)
        {
            if (*Num_May_Reps==6&&*Dado_May==6)//SEXTETO DE 6
            {
                *pun=0;
            }
            else if(*Num_May_Reps==6)//SEXTETO DE X
            {
                *pun+=*Dado_May*50;
            }
        }
        if (Bd_turn==1)
        {
                     //sexteto 6
            if (*Num_May_Reps==6&&*Dado_May==6)
            {
                *pun_2=0;
            }
                     //sexteto X
            else if(*Num_May_Reps==6)
            {
                *pun_2+=*Dado_May*50;
            }
        }

    }

}

#endif // COMBINACIONES_H_INCLUDED
