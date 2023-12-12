#ifndef REINICIO_VARIABLES_H_INCLUDED
#define REINICIO_VARIABLES_H_INCLUDED
// REINICIO DE VARIABLES ANTES DE EMPEZAR A JUGAR
void Reinicio_Variables (int* rondas,int* turnos,int* PuntajeTl,int* Puntaje,int* Bd_turn,int* PuntajeTl_2,int* Puntaje_2){
*rondas=1;
*turnos=0;
*Puntaje=0;
*PuntajeTl=0;
*Bd_turn=0;
*PuntajeTl_2=0;
*Puntaje_2=0;
}
//REINICIO DE LA VARIABLE PARTIDA
void Partida_true (bool* partida){
*partida=true;
}

#endif // REINICIO_VARIABLES_H_INCLUDED
