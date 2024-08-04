// 7. Faça uma função que recebe 3 valores inteiros por parâmetro 
// e retorna-os ordenados em ordem crescente.

#include <stdio.h>
#include <stdlib.h>

void numeros(int x, int y, int z){
    int maior = 0;
    int meio = 0;
    int menor = 0; 
    
    maior = x; // x é o maior
    meio = z; //  z é o médio
    menor = y; // y é o menor 
    
    if ( maior > z && z > y){
         maior = x; // x é o maior
         meio = z; //  z é o médio
         menor = y; // y é o menor 
         printf ("%d -> %d -> %d\n", menor, meio, maior);   
         }  
    
    else if ( y > maior && y < z ){
         maior = z; // z é o maior 
         meio = y; // y é o médio 
         menor = x; // x é o menor
         printf ("%d -> %d -> %d\n", menor, meio, maior);      
         }
         
    else if ( maior > z && maior < y){
         maior = y; // y é o maior 
         meio = x; // x é o médio
         menor = z; // z é o menor 
         printf ("%d -> %d -> %d\n", menor, meio, maior);      
         }        
}

    
int main (){
    
    int a = 0;
    int b = 0;
    int c = 0;
    
    

    printf ("Informe o primeiro valor: ");
    scanf ("%d", &a);
    
    printf ("Informe o segundo valor: ");
    scanf ("%d", &b);
    
    printf ("Informe o terceiro valor: ");
    scanf ("%d", &c);
    
    numeros(a , b, c);
    
    system ("pause");
    return 0;
}
    
    
    
