#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
#include "rlutil.h"
#include "Combinaciones.h"
#include "Dados.h"
#include "Menu.h"
#include "Reinicio_Variables.h"
#include "Puntaje.h"
#include "Carteles.h"
int main()
{
    int opcion;
    char nombre[20],nombre2[20],Nombre_PM[20];
    int Dado_May=0,Num_May_Reps=0;
    int VecDados[6]= {0};
    int Vec[6];
    int pun=0,puntl=0,pun_2=0,puntl_2=0,pun_Max=0;
    int turnos=0,rondas=1;
    int Pos_Puntx,Pos_Punty;
    int Bd_turn=0;
    int Int_Escalera=0;
    bool partida=true,juego=true;
    //JUEGO
    while (juego==true)
    {
        //MENU DEL JUEGO
        Menu(&opcion);
        switch(opcion)
        {
        case 1:
            //UN JUGADOR
            Ingreso_Nombre(nombre,nombre2,opcion);
            Reinicio_Variables(&rondas,&turnos,&puntl,&pun,&Bd_turn,&puntl_2,&pun_2);
            while (partida==true)
            {
                Cartel_Ronda(rondas,nombre,nombre2,puntl,&turnos,opcion,&Bd_turn,puntl_2);
                Dados(Vec,Pos_Puntx,Pos_Punty,VecDados);
                Combinaciones(Vec,VecDados,&Num_May_Reps,&Dado_May);
                TrioX(&Num_May_Reps,&Dado_May,&pun,opcion,&pun_2,Bd_turn);
                Sum_Dados(&Num_May_Reps,Vec,&pun,opcion,&pun_2,Bd_turn);
                Sexteto(&Num_May_Reps,&Dado_May,&pun,opcion,&pun_2,Bd_turn);
                Escalera(&Num_May_Reps,&partida,&pun,&puntl,opcion,&pun_2,&puntl_2,Bd_turn,&Int_Escalera);
                Puntaje(&pun,&puntl,&turnos,opcion,Bd_turn,&pun_2,&puntl_2);
                Partida500(&puntl,&partida,&pun,opcion,Bd_turn,&puntl_2,&pun_2);
                Turn_Ronds(&turnos,&rondas,nombre,nombre2,opcion,&Bd_turn);
            }
            Cartel_Ganador(nombre,rondas,puntl,nombre2,puntl_2,opcion,Bd_turn,Int_Escalera);
            Puntaje_Mas_Alto(puntl,puntl_2,nombre,nombre2,&pun_Max,opcion,Nombre_PM);
            Partida_true(&partida);
            break;
        case 2:
            //DOS JUGADORES
            Ingreso_Nombre(nombre,nombre2,opcion);
            Reinicio_Variables(&rondas,&turnos,&puntl,&pun,&Bd_turn,&puntl_2,&pun_2);
            while (partida==true)
            {
                Cartel_Ronda(rondas,nombre,nombre2,puntl,&turnos,opcion,&Bd_turn,puntl_2);
                Dados(Vec,Pos_Puntx,Pos_Punty,VecDados);
                Combinaciones(Vec,VecDados,&Num_May_Reps,&Dado_May);
                TrioX(&Num_May_Reps,&Dado_May,&pun,opcion,&pun_2,Bd_turn);
                Sum_Dados(&Num_May_Reps,Vec,&pun,opcion,&pun_2,Bd_turn);
                Sexteto(&Num_May_Reps,&Dado_May,&pun,opcion,&pun_2,Bd_turn);
                Escalera(&Num_May_Reps,&partida,&pun,&puntl,opcion,&pun_2,&puntl_2,Bd_turn,&Int_Escalera);
                Puntaje(&pun,&puntl,&turnos,opcion,Bd_turn,&pun_2,&puntl_2);
                Partida500(&puntl,&partida,&pun,opcion,Bd_turn,&puntl_2,&pun_2);
                Turn_Ronds(&turnos,&rondas,nombre,nombre2,opcion,&Bd_turn);
            }
            Cartel_Ganador(nombre,rondas,puntl,nombre2,puntl_2,opcion,Bd_turn,Int_Escalera);
            Puntaje_Mas_Alto(puntl,puntl_2,nombre,nombre2,&pun_Max,opcion,Nombre_PM);
            Partida_true(&partida);
            break;
        case 3:
            //PUNTAJE MAS ALTO
            Puntaje_Mas_Alto(puntl,puntl_2,nombre,nombre2,&pun_Max,opcion,Nombre_PM);
            break;
        case 0:
            //SALIDA DEL JUEGO
            Salida_Juego(&juego);
        }
    }
}
