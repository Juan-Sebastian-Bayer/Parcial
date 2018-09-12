/*
Programa: ejercicio con numeros pares e impares
Fecha: 11/09/2018
Elaborado por: Juan Sebastian Bayer
*/
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>

//funcion principal
int main() 
{
	//declaracion de variables que almacenan los numeros
	int n, v, cont=0, cont2=0;
	v=0;
	do
	{
		printf("\ningrese un numero\n");
		scanf ("%d", &n);
		
		if(n%2==0)
		{
			cont=cont+1;
			printf ("el numero es par ");
		}
		else 
		{
			cont2=cont2+1;
			printf("el numero es impar ");
		}
		
		v = v + 1;
		
	}while (n!=0);
	     printf("\nel numero total de pares que se ingreso fue de: %d\n", cont);
	     printf("\nel numero total de impares que se ingreso fue de: %d\n", cont2);
	    return 0;
	
}
