//Escreva uma função que recebe um inteiro positivo m e devolve 1 se m é
// par e 0 (zero) em caso contrário.
#include <stdio.h>
#include <stdlib.h>
         int s (int x) {
             int y;
              if ( x % 2 == 0 ){
                   y = 1;
                   printf ("\n%d", y);}
              else{
                   y = 0;
                   printf ("%d\n", y);}
              return y;
         }                   
         int main () {
             int m, M;
             printf ("Informe um numero inteiro positivo: ");
             scanf ("%d", &m);
             M = s(m);
             system ("pause");
             return 0;
}
         
