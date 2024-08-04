// 4. Crie uma função em linguagem C que receba 3 números e retorne o menor valor
#include <stdio.h>
#include <stdlib.h>

int resultado (int x, int y, int z){
    int menor;
    if ( x < y && x < z){
         menor = x;}
    else if ( y < x && y < z ){
        menor = y;}
    else if ( z < x && z < y){
         menor = z;}
         return menor;
}

int main (){
    int x, y, z, M;
    printf("Informe tres numeros: ");
    scanf(" %d %d %d", &x, &y, &z);
    M = resultado(x, y, z);
    printf("Menor valor: %d\n", M);
    system ("pause");
    return 0;
}
    
    
    
