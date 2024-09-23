#ifndef MAPAS_H 
#define MAPAS_H
#include <stdio.h>


int validar_pos(int L , int C , int c , int l , int k);

void encontrar_maior_mapa(FILE *file, int *max_L, int *max_C);

int c_matriz(FILE* file ,int **mapa , int L_max , int C_max, int *L , int *C , int *l_inicial , int*c_inicial);

int tarefa1(int **mapa , int L , int C , int l_inicial ,int c_inicial , int k );

int tarefa2(int **mapa , int L , int C , int l_inicial ,int c_inicial , int k );

void tarefa3(int** mapa, FILE *output , int L, int C, int l_inicial, int c_inicial, int l_final, int c_final);

#endif