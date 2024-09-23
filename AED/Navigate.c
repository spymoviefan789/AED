#include <stdio.h> 
#include <stdlib.h>
#include "Navigate.h"
#include <ctype.h>


int validar_pos(int l_inicial, int c_inicial, int L, int C) {
    return l_inicial >= 0 && l_inicial < L && c_inicial >= 0 && c_inicial < C; 
}

void criar_mapa(FILE *file, int *max_L, int *max_C) {
    int L, C, l_inicial, c_inicial, k, l_final, c_final; 
    int*max_L = NULL;
    char *linha = NULL;
    char * coluna = NULL;
    size_t len = 0;
    
    while (getline(&linha , &len , file )!= -1)
    {
        if (sscanf(linha , "%d %d %d %d %d %d" , &L , &C , &l_inicial , &c_inicial , &k) == 5 || sscanf(linha , "%d %d %d %d %d %d %d" , &L , &C , &l_inicial , &c_inicial , &k , &l_final , &c_final) == 7){
           
            for(int i = 0; i<=L; i++){

            }

            
        }   
    }
}


int tarefa1(int **mapa , int L , int C , int l_inicial ,int c_inicial , int k ){
    if (!validar_pos(l_inicial,c_inicial,L,C))
        return -1;
      for(int i = -k; i <= k ;i++){
     for(int j = -(k - abs(i)); j<= (k - abs(i)); j ++)
     {
        int l_nova = l_inicial + i;
        int c_nova = c_inicial +j;
            if(validar_pos(l_nova,c_nova,L,C) && mapa [l_nova][c_nova]>0)
            {
                maior_energia += mapa[l_nova][c_nova];
            }
    }
    return maior_energia;
    }

}
int maior_energia=0;



int tarefa2(int **mapa , int L , int C , int l_inicial ,int c_inicial , int k ){

}


void tarefa3(int** mapa, FILE *output , int L, int C, int l_inicial, int c_inicial, int l_final, int c_final){

}

