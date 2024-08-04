//5. Faça uma função que recebe a idade de uma pessoa em anos, meses 
// e dias e retorna essa idade expressa em dias.

#include <stdio.h>
#include <stdlib.h>
    int idade(int a, int b, int c)
    {
        int calculo_a = 0;
        int calculo_m = 0;
        int calculo_d = 0;
        int total = 0;
        
        calculo_a = a * 365;
        calculo_m = b * 30;
        calculo_d = c;
        
        total = calculo_a + calculo_m + calculo_d;
        return total; 
}
     
   int main (){
       
       int age = 0; 
       int x = 0;
       int y = 0;
       int z = 0;
       
       printf("Informe a idade em anos: ");
       scanf("%d", &x);
       
       printf("Informe a idade meses: ");
       scanf("%d", &y);
       
       printf("Informe a idade em dias: ");
       scanf("%d", &z);
       
       age = idade(x, y, z);
       printf("Sua idade em dias: %d", age);
       
       system ("pause");
       return 0;
}
