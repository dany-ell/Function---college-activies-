// 7. Fa�a uma fun��o que recebe 3 valores inteiros por par�metro 
// e retorna-os ordenados em ordem crescente.

#include <stdio.h>
#include <stdlib.h>

void numeros(int x, int y, int z){
    int maior = 0;
    int meio = 0;
    int menor = 0; 
    
    maior = x; // x � o maior
    meio = z; //  z � o m�dio
    menor = y; // y � o menor 
    
    if ( maior > z && z > y){
         maior = x; // x � o maior
         meio = z; //  z � o m�dio
         menor = y; // y � o menor 
         printf ("%d -> %d -> %d\n", menor, meio, maior);   
         }  
    
    else if ( y > maior && y < z ){
         maior = z; // z � o maior 
         meio = y; // y � o m�dio 
         menor = x; // x � o menor
         printf ("%d -> %d -> %d\n", menor, meio, maior);      
         }
         
    else if ( maior > z && maior < y){
         maior = y; // y � o maior 
         meio = x; // x � o m�dio
         menor = z; // z � o menor 
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
    
    
    
