/*
Programa: ejercicio con multiplicacion de numeros flotantes
Fecha: 11/09/2018
Elaborado por: Juan Sebastian Bayer
*/
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>

void mult (float v1, float v2);
//funcion principal
int main() 
{
	float n1, n2;
	printf("Ingrese el primer numero flotante\n");
	scanf("%f", &n1);
	printf("Ingrese el segundo numero flotante\n");
	scanf("%f", &n2);
	mult(n1,n2);
	return 0;
}
//funcion de multiplicacion
void mult(float v1, float v2)
{
	float v;
	v=v1*v2;
	printf("El resultado es: %.2f\n", v);
}
