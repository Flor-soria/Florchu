#include<stdio.h>
#include<stdlib.h>
#include<libreria.h>

int suma(int n, int n2);
int multiplicacion(int n, int n2);
int resta(int n, int n2);
float division(int n, int n2);
main()
{
	int n, n2;
	
	printf("ingrese un valor entero: ");
	scanf("%d", &n);
	
	printf("ingrese un valor entero: ");
	scanf("%d", &n2);
    
	suma(n, n2);
    multiplicacion(n, n2);
    resta(n, n2);
    division(n, n2);    
}	


