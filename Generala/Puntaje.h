#ifndef PUNTAJE-CARTELES_H_INCLUDED
#define PUNTAJE-CARTELES_H_INCLUDED

//PUNTAJE y PUNTAJE TOTAL DEL JUEGO EN CURSO

int Puntaje (int* pun,int* puntl,int* turnos,int opcion,int Bd_turn,int*pun_2,int* puntl_2)
{
    if (opcion==1)
    {
        rlutil::locate(5,4);
        cout<<"-----------------------------------------------------------------------------------------------------------";
        rlutil::locate(5,6);
        cout<<"MAXIMO PUNTAJE DE LA RONDA: "<<*pun;
        rlutil::locate(80,2);
        cout<<"PUNTAJE TOTAL:"<<*puntl;
        if (*turnos==3)
        {
            *puntl+=*pun;
            *pun=0;
        }
    }
    if (opcion==2)
    {
        if (Bd_turn==0)
        {
            rlutil::locate(5,4);
            cout<<"-----------------------------------------------------------------------------------------------------------";
            rlutil::locate(5,6);
            cout<<"MAXIMO PUNTAJE DE LA RONDA: "<<*pun;
            rlutil::locate(80,2);
            cout<<"PUNTAJE TOTAL:"<<*puntl;
            if (*turnos==3)
            {
                *puntl+=*pun;
                *pun=0;
            }
        }
        if (Bd_turn==1)
        {
            rlutil::locate(5,4);
            cout<<"-----------------------------------------------------------------------------------------------------------";
            rlutil::locate(5,6);
            cout<<"MAXIMO PUNTAJE DE LA RONDA: "<<*pun_2;
            rlutil::locate(80,2);
            cout<<"PUNTAJE TOTAL:"<<*puntl_2;
            if (*turnos==3)
            {
                *puntl_2+=*pun_2;
                *pun_2=0;
            }
        }
    }
}

//GUARDADO DE PUNTAJE MAS ALTO Y EL NOMBRE DE ESE JUGADOR
void Puntaje_Mas_Alto (int puntl,int puntl2,char nombre[],char nombre2[],int* pun_Max,int opcion,char Nombre_PM[])
{

if (opcion==1||opcion==2){
    if (puntl>puntl2){
        if (puntl>*pun_Max){
            for (int i=0;i<=19;i++){
                Nombre_PM[i]=nombre[i];
            }
            *pun_Max=puntl;
        }

    }
    else if (puntl2>puntl) {
        if (puntl2>*pun_Max){
                for (int i=0;i<=19;i++){
                Nombre_PM[i]=nombre2[i];
            }
            *pun_Max=puntl2;
        }

}
}
    if (opcion==3){
            system("cls");
            rlutil::locate(50,10);cout<<"EL JUEGADOR CON MAYOR";
            rlutil::locate(55,11);cout<<Nombre_PM;
            rlutil::locate(50,13);cout<<"CON EL PUNTAJE:"<<*pun_Max;
            rlutil::locate(50,15);system("pause");
    }
}





#endif // PUNTAJE-CARTELES_H_INCLUDED
