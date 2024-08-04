// 1. Escreva uma função que receba como parâmetro o raio de uma esfera,
// calcule e mostre no programa principal o seu volume: v = 4/3*?R3.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
    float raio( float x)
    {
          float v = 1.333 * 3.14 * pow (x, 3);
          return v;
}
int main (){
    float R = 0;
    float volume = 0;
    printf ("Informe o raio da esfera:");
    scanf ("%f", &R);
    volume = raio(R);
    printf (" \nO seu volume eh de: %.2f", volume);
    system ("pause");
    return 0; 
}
          
