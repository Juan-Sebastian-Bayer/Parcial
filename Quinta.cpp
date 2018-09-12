/*
Programa: ejercicio de pontencia de dos numeros enteros
Fecha: 11/09/2018
Elaborado por: Juan Sebastian Bayer
*/
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>

//lamado de funcion
void funpot(int v1, int v2);
//funcion principal
int main()
{
	int num, potencia;
	printf("Ingrese un numero: ");
	scanf ("%d", &num);
	printf("Ingrese a que potencia quiere elevar del numero: ");
	scanf ("%d", &potencia);
	funpot(num,potencia);
	
	
	return 0;
}
void funpot(int v1, int v2)//funcion que opera los numeros ingresados por el usuario
{
	
	long resultado = 1;
	  for (int i = 1; i <= v2; i++)
	   {
		 resultado *= v1;
	   }
	printf("El resultado es: %d\n", resultado);
}
