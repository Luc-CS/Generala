#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include "rlutil.h"

//MENU DEL JUEGO
void Menu (int* opcion)
{
    system("cls");
    rlutil::locate(50,10);
    cout<<"Ingrese modo de juego deseado:"<<endl;
    rlutil::locate(50,11);
    cout<<"------------------------------"<<endl;
    rlutil::locate(50,12);
    cout<<"1-Un jugador"<<endl;
    rlutil::locate(50,13);
    cout<<"2-Dos jugadores"<<endl;
    rlutil::locate(50,14);
    cout<<"3-Puntaje mas alto"<<endl;
    rlutil::locate(50,15);
    cout<<"0-Salir"<<endl;
    rlutil::locate(50,16);
    cout<<"------------------------------"<<endl;
    rlutil::locate(50,17);
    cout<<"Elegir opcion:";
    cin>>*opcion;
}

//INGRESO DE NOMBRE/S
void Ingreso_Nombre(char nombre[],char nombre2[],int opcion)
{
    system("cls");
    if (opcion==1)
    {
        rlutil::locate(50,10);
        cout<<"INGRESE NOMBRE DEL JUGADOR: "<<endl;
        rlutil::locate(55,11);
        cin>>nombre;
    }
    if (opcion==2)
    {
        rlutil::locate(50,10);
        cout<<"INGRESE NOMBRE DEL JUGADOR 1: "<<endl;
        rlutil::locate(55,11);
        cin>>nombre;
        system("cls");
        rlutil::locate(50,10);
        cout<<"INGRESE NOMBRE DEL JUGADOR 2: "<<endl;
        rlutil::locate(55,11);
        cin>>nombre2;
    }
}

// FORMA DE GANAR EN EL JUEGO, LLEGANDO A 500 PUNTOS
int Partida500 (int* puntl,bool* partida,int* pun,int opcion,int Bd_turn,int* puntl_2,int* pun_2)
{
    int pun_sum;
    if (opcion==1)
    {
        pun_sum=*pun+*puntl;
        if (*puntl>=500||pun_sum>=500)
        {
            *partida=false;
            *puntl+=*pun;
        }
    }
    if (opcion==2)
    {
        pun_sum=*pun+*puntl;
        if (*puntl>=500||pun_sum>=500)
        {
            *partida=false;
            *puntl+=*pun;
        }
        pun_sum=*pun_2+*puntl_2;
        if (*puntl_2>=500||pun_sum>=500)
        {
            *partida=false;
            *puntl_2+=*pun_2;
        }
    }
}



#endif // MENU_H_INCLUDED
