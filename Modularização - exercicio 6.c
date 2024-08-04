// . Faça uma função que recebe, por parâmetro, a altura (alt) 
// e o sexo de uma pessoa e retorna o seu peso ideal. 
// Para homens, calcular o peso ideal
// usando a fórmula peso ideal = 72.7 x alt - 58 e ,para mulheres,
// peso ideal = 62.1 x alt - 44.7

#include <stdio.h>
#include <stdlib.h>

         float calculo( float calculo_sexo, float alt){
            float x = 0; 
             if (calculo_sexo == 1) {
                x = 72.7 * alt;
                return x;
                }
                
             else if (calculo_sexo == 2){
                x = 62.1 * alt - 44.7;
                return x;
                }
}
                   
             
int main (){
    
    int sexo = 0;
    float altura = 0;
    float peso_ideal = 0; 
    
    printf ("Digite 1 para Homem | Digite 2 para Mulher: ");
    scanf ("%d", &sexo);
    if (sexo != 1 && sexo != 2){
                  printf ("Informe um valor correto\n");
                  system ("pause");
                  return 0; }
    
    printf ("Digite a altura: ");
    scanf ("%f",&altura);
    
   peso_ideal = calculo(sexo, altura);
   printf ("Peso ideal: %.2f", peso_ideal);
   
   system ("pause");
   return 0;
}
    
    
