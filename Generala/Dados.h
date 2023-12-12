#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include "rlutil.h"
void Dibujador_Dados (int posX,int posY);
void Dibujar_Puntos (int num,int posx,int posy);
//DIBUJAR UN CUADRADO
void Dibujador_Dados (int posX,int posY)
{
    rlutil::setBackgroundColor(rlutil::BLACK);
    rlutil::setColor(rlutil::WHITE);
    for (int x=1; x<=7; x++)
    {
        for (int y=1; y<=3; y++)
        {
            rlutil::locate(x+posX,y+posY);
            cout<<(char)219;
        }
    }
}

//DIBUJAR PUNTOS DEL DADO
void Dibujar_Puntos (int num,int posx,int posy)
{
    if(num==1)
    {
        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(posx+4,posy+2);
        cout<<(char) 254;
    }
    if (num==2)
    {
        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(posx+2,posy+1);
        cout<<(char) 254;
        rlutil::locate(posx+6,posy+3);
        cout<<(char) 254;
    }
    if (num==3)
    {
        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(posx+2,posy+1);
        cout<<(char) 254;
        rlutil::locate(posx+4,posy+2);
        cout<<(char) 254;
        rlutil::locate(posx+6,posy+3);
        cout<<(char) 254;
    }
    if (num==4)
    {
        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(posx+2,posy+1);
        cout<<(char) 254;
        rlutil::locate(posx+2,posy+3);
        cout<<(char) 254;
        rlutil::locate(posx+6,posy+1);
        cout<<(char) 254;
        rlutil::locate(posx+6,posy+3);
        cout<<(char) 254;
    }
    if (num==5)
    {
        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(posx+2,posy+1);
        cout<<(char) 254;
        rlutil::locate(posx+2,posy+3);
        cout<<(char) 254;
        rlutil::locate(posx+4,posy+2);
        cout<<(char) 254;
        rlutil::locate(posx+6,posy+1);
        cout<<(char) 254;
        rlutil::locate(posx+6,posy+3);
        cout<<(char) 254;
    }
    if (num==6)
    {
        rlutil::setColor(rlutil::BLACK);
        rlutil::setBackgroundColor(rlutil::WHITE);
        rlutil::locate(posx+2,posy+1);
        cout<<(char) 254;
        rlutil::locate(posx+2,posy+2);
        cout<<(char) 254;
        rlutil::locate(posx+2,posy+3);
        cout<<(char) 254;
        rlutil::locate(posx+6,posy+1);
        cout<<(char) 254;
        rlutil::locate(posx+6,posy+2);
        cout<<(char) 254;
        rlutil::locate(posx+6,posy+3);
        cout<<(char) 254;
    }
}

// DADOS DE NUMEROS ALETORIOS. ORDENAMIENTO DE DADOS
void Dados (int Vec[],int posX,int posY,int VecDados[])
{
    int aux=0;
    int num;
    srand(time(NULL));
    for (int i=0; i<=5; i++)
    {
        VecDados[i]=0;
        //cin>>Vec[i]; //prueba para las combinaciones
        Vec[i]=rand()%6+1;
    }
    for (int i=0; i<=5; i++)
    {
        for (int j=0; j<5; j++)
        {
            if (Vec[j]>=Vec[j+1])
            {
                aux=Vec[j];
                Vec[j]=Vec[j+1];
                Vec[j+1]=aux;
            }
        }
    }
    //FUSION DE LA FUNCION: "Dibujar_Cuadrado" y "Dibujar_Puntos" TOMANDO LOS NUMEROS ALEATORIOS
    num=Vec[0];
    Dibujador_Dados(5,12);
    Dibujar_Puntos(num,5,12);
    num=Vec[1];
    Dibujador_Dados(14,12);
    Dibujar_Puntos(num,14,12);
    num=Vec[2];
    Dibujador_Dados(23,12);
    Dibujar_Puntos(num,23,12);
    num=Vec[3];
    Dibujador_Dados(32,12);
    Dibujar_Puntos(num,32,12);
    num=Vec[4];
    Dibujador_Dados(41,12);
    Dibujar_Puntos(num,41,12);
    num=Vec[5];
    Dibujador_Dados(50,12);
    Dibujar_Puntos(num,50,12);
    rlutil::setBackgroundColor(rlutil::BLACK);
    rlutil::setColor(rlutil::WHITE);
}




#endif // FUNCIONES_H_INCLUDED
