/*Angel Uriel Estrada Martinez
Practica 6
Ejercicio de tipo variables, entradas y salidas*/
#include <stdio.h>

void main() 
{
  int entnum;
  char carac = 65;  //esto convierte el numero en caracter ASCII.
  char carac2 = 'a';
  double punto;
  
  //Asignsr valores de teclado a una variables
  printf("Escribe un valor entero:");
  scanf("%i", &entnum);
  printf("Escriba un valor real:");
  scanf("%lf", &punto);
  
  //Imprimir valores de formato
  printf("\n Imprimiendo las variables \a\n");
  printf("\t Valor de numero entero es: %i \n", entnum);
  printf("\t Valor de caracter ASCII es: %c \n", carac);
  printf("\t Valor de caracter es: %c \n", carac2);
  printf("\t Valor de numero real es: %lf \n", punto);
}
