#ifndef CARTELES_H_INCLUDED
#define CARTELES_H_INCLUDED

//CARTELES

//CARTEL POR TIRADA
void Cartel_Ronda (int rondas,char nombre[],char nombre2[],int puntl,int* turnos,int opcion,int* Bd_turn,int puntl_2)
{
    system("cls");
    if(*Bd_turn==0 || opcion==1)
    {
        *turnos=*turnos+1;
    }
//1 JUGADOR
    if (opcion==1)
    {
//CARTEL DIBUJADO
        for (int x=1; x<=55; x++)
        {
            rlutil::locate(x+43,8);
            cout<<(char)196;
            rlutil::locate(x+43,15);
            cout<<(char)196;
        }
        for (int y=1; y<=6; y++)
        {
            rlutil::locate(43,y+8);
            cout<<(char)179;
            rlutil::locate(99,y+8);
            cout<<(char)179;
        }
        rlutil::locate(99,8);
        cout<<(char)191;
        rlutil::locate(43,15);
        cout<<(char)192;
        rlutil::locate(99,15);
        cout<<(char)217;
        rlutil::locate(43,8);
        cout<<(char)218;
//CUERPO DEL CUADRO
        rlutil::locate(63,10);
        cout<<"RONDA N"<<(char)167<<" "<<rondas<<endl;
        rlutil::locate(66,11);
        cout<<nombre<<endl<<endl;
        rlutil::locate(56,13);
        cout<<"PUNTAJE DE "<<nombre<<" : "<<puntl<<" PUNTOS"<<endl;
        rlutil::locate(55,17);
        system("pause");
        system("cls");
    }
//2 JUGADORES
    if(opcion==2)
    {
//CARTEL DIBUJADO
        for (int x=1; x<=55; x++)
        {
            rlutil::locate(x+43,8);
            cout<<(char)196;
            rlutil::locate(x+43,15);
            cout<<(char)196;
        }
        for (int y=1; y<=6; y++)
        {
            rlutil::locate(43,y+8);
            cout<<(char)179;
            rlutil::locate(99,y+8);
            cout<<(char)179;
        }
        rlutil::locate(99,8);
        cout<<(char)191;
        rlutil::locate(43,15);
        cout<<(char)192;
        rlutil::locate(99,15);
        cout<<(char)217;
        rlutil::locate(43,8);
        cout<<(char)218;
//CUERPO DEL CUADRO
        rlutil::locate(63,10);
        cout<<"RONDA N"<<(char)167<<" "<<rondas<<endl;
        if (*Bd_turn==0)
        {
            rlutil::locate(56,11);
            cout<<"PROXIMO TURNO: "<<nombre<<endl<<endl;
        }
        else if (*Bd_turn==1)
        {
            rlutil::locate(56,11);
            cout<<"PROXIMO TURNO: "<<nombre2<<endl<<endl;
        }
        rlutil::locate(56,13);
        cout<<"PUNTAJE DE "<<nombre<<" : "<<puntl<<" PUNTOS"<<endl;
        rlutil::locate(56,14);
        cout<<"PUNTAJE DE "<<nombre2<<" : "<<puntl_2<<" PUNTOS"<<endl;
        rlutil::locate(55,17);
        system("pause");
        system("cls");
    }
}

//CARTEL DEL GANADOR DEL JUEGO
void Cartel_Ganador (char nombre[],int rondas,int puntl,char nombre2[],int puntl_2,int opcion,int Bd_turn,int Int_Escalera)
{
    system("cls");
    if (opcion==1)
    {
        rlutil::locate(50,9);
        cout<<"------------------------------"<<endl<<endl;
        rlutil::locate(50,11);
        cout<<"EL JUGADOR/ORA:"<<nombre<<endl<<endl;
        rlutil::locate(50,13);
        cout<<"TERMINO EN LA RONDA:"<<rondas<<endl<<endl;
        rlutil::locate(50,15);
        cout<<"CON EL PUNTAJE:"<<puntl<<endl<<endl;
        rlutil::locate(50,17);
        cout<<"------------------------------"<<endl<<endl;
        rlutil::locate(50,19);
        system("pause");
    }
    if (opcion==2)
    {
        if (puntl>puntl_2||Int_Escalera==1)
        {
            rlutil::locate(50,9);
            cout<<"------------------------------"<<endl<<endl;
            rlutil::locate(50,11);
            cout<<"EL JUGADOR/ORA:"<<nombre<<endl<<endl;
            rlutil::locate(50,13);
            cout<<"TERMINO EN LA RONDA:"<<rondas<<endl<<endl;
            rlutil::locate(50,15);
            cout<<"CON EL PUNTAJE:"<<puntl<<endl<<endl;
            rlutil::locate(50,17);
            cout<<"------------------------------"<<endl<<endl;
            rlutil::locate(50,19);
            system("pause");
        }
        else if (puntl_2>puntl||Int_Escalera==2)
        {
            rlutil::locate(50,9);
            cout<<"------------------------------"<<endl<<endl;
            rlutil::locate(50,11);
            cout<<"EL JUGADOR/ORA:"<<nombre2<<endl<<endl;
            rlutil::locate(50,13);
            cout<<"TERMINO EN LA RONDA:"<<rondas<<endl<<endl;
            rlutil::locate(50,15);
            cout<<"CON EL PUNTAJE:"<<puntl_2<<endl<<endl;
            rlutil::locate(50,17);
            cout<<"------------------------------"<<endl<<endl;
            rlutil::locate(50,19);
            system("pause");
        }
    }
}

// NUMERO DE RONDA-NUMERO DE LANZAMIENTO-TURNO DEL JUGADOR; TODO DEL JUEGO EN CURSO
// CAMBIO DE RONDA
int Turn_Ronds (int* turnos, int* rondas,char nombre[],char nombre2[],int opcion,int* Bd_turn)
{

    if (opcion==1)
    {
        rlutil::locate(12,2);
        cout<<"TURNO DE "<<nombre;
        rlutil::locate(5,8);
        cout<<"LANZAMIENTO N"<<(char)167<<" "<<*turnos;
        rlutil::locate(5,10);
        cout<<"-----------------------------------------------------------------------------------------------------------";
        rlutil::locate(50,2);
        cout<<"RONDA N"<<(char)167<<" "<<*rondas;
        if (*turnos==3)
        {
            *rondas=*rondas+1;
            *turnos=0;
        }
        rlutil::locate(50,18);
        system("pause");
    }

    if (opcion==2)
    {
        if (*Bd_turn==0)
        {
            rlutil::locate(12,2);
            cout<<"TURNO DE "<<nombre;
            rlutil::locate(5,8);
            cout<<"LANZAMIENTO N"<<(char)167<<" "<<*turnos;
            rlutil::locate(5,10);
            cout<<"-----------------------------------------------------------------------------------------------------------";
            rlutil::locate(50,2);
            cout<<"RONDA N"<<(char)167<<" "<<*rondas;
        }
        if (*Bd_turn==1)
        {
            rlutil::locate(12,2);
            cout<<"TURNO DE "<<nombre2;
            rlutil::locate(5,8);
            cout<<"LANZAMIENTO N"<<(char)167<<" "<<*turnos;
            rlutil::locate(5,10);
            cout<<"-----------------------------------------------------------------------------------------------------------";
            rlutil::locate(50,2);
            cout<<"RONDA N"<<(char)167<<" "<<*rondas;
            if (*turnos==3)
            {
                *rondas=*rondas+1;
                *turnos=0;
            }
        }
        rlutil::locate(50,18);
        system("pause");
    }
    if (*Bd_turn==0)//INTERRUPTOR PARA EL CAMBIO DE TURNO DE 2 JUGADORES
    {
        *Bd_turn=1;
    }
    else if (*Bd_turn==1)
    {
        *Bd_turn=0;
    }
}

//SALIDA DEL JUEGO
void Salida_Juego (bool* juego){
system("cls");
*juego=false;
rlutil::locate(50,10);cout<<"SALISTE DEL JUEGO";
rlutil::locate(52,12);cout<<"HASTA LUEGO"<<endl;
}
#endif // CARTELES_H_INCLUDED
