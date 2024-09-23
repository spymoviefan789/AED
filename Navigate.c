#include <stdio.h> 
#include <stdlib.h>
#include "Navigate.h"
#include <ctype.h>


int validar_pos(int l_inicial, int c_inicial, int L, int C) {
    return l_inicial >= 0 && l_inicial < L && c_inicial >= 0 && c_inicial < C; 
}

void criar_mapa(const char *filename, int *max_L, int *max_C) {
int C, L , c_inical , l_inicial , c_final , l_final , k;

    FILE *file = fopen(filename , "r");
    if  (file == NULL){
        return 0;
    }

    fscanf(file , "%d %d %d %d %d" , &L , &C ,&l_inicial,  &c_inical , &k );
    int *pk = &k;

    if (*pk == 0){
        fscanf(file, "%d %d",&l_final,  &c_final);
    }  
    int *matrix = (int *)malloc(L * C * sizeof(int));
    if (!matrix){
        return 0;
    }
    for(int i= 0; i<L;i++){
        for(int j=0;j<C;j++){
            fscanf(file,"%d",&matrix[C * L + j]);
        }
    }
free(matrix);
fclose(file);
}




/*************************************************************
 * K=2            2         1
 *                1       2 | 2    
 *                0     0 0 X 0 O
 *                        2 | 2
 *                          1
 ************************************************************/








int tarefa1(int **mapa , int L , int C , int l_inicial ,int c_inicial , int k ){
    k=abs(k);
    int n = 0;
    int *linha=NULL;
    int *max_nrg = 0;
    int *pos_y = c_inicial;        //dá set de novos valores iniciais   
    int *pos_x= l_inicial-k;

    validar_pos(*pos_x , *pos_y , L , C);
    
                                        
    for(int j=*pos_y; j<k ;j++){                     //fixa o vertical, mexe-se para cima , e depois vai da esquerda à direita          
        for(int i=*pos_x+n;i<*pos_x-n;i++){          
            if (linha[i] > *max_nrg)                
            *max_nrg = linha[i];
        n++;
        }                                           
    }                                                                                       
    for(int j=*pos_y; j<k ;j--){
        for(int i=*pos_x+n;i<*pos_x-n;i++){
            if (linha[i] > *max_nrg)
            *max_nrg = linha[i];
        n++;
        }
    }
    

}

int tarefa2(int **mapa , int L , int C , int l_inicial ,int c_inicial , int k ){
        k=abs(k);
    int n = 0;
    int *linha=NULL;
    int *soma = 0;
    int *pos_y = c_inicial;        //dá set de novos valores iniciais   
    int *pos_x= l_inicial-k;
    
    
    for(int j=*pos_y; j<k ;j++){                     //fixa o vertical, mexe-se para cima , e depois vai da esquerda à direita          
        for(int i=*pos_x+n;i<*pos_x-n;i++){          
            if (linha[i] >= 0)                
            *soma += linha[i];
        n++;
        }                                           
    }                                                                                       
    for(int j=*pos_y; j<k ;j--){
        for(int i=*pos_x+n;i<*pos_x-n;i++){
            if (linha[i] >=0)
            *soma += linha[i];
        n++;
        }
    }
}
//yi - yf se >0 então yi está mais abaixo
//xi - xf se >0 então está mais à direita

void tarefa3(int** mapa, FILE *output , int L, int C, int l_inicial, int c_inicial, int l_final, int c_final){
    int *dy = l_inicial - l_final;
    int *dx = c_inicial - c_final;

    



}   





int main(int argc ,char* argv[]){

}


























/*int tarefa1(int **mapa , int L , int C , int l_inicial ,int c_inicial , int k ){
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

*/