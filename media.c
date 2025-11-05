#include <stdio.h>
#include <math.h>

int main(void)
{
	// Dai due valori 
	int a, b;
	float media;  
	
	printf("Inserisci il primo numero: ");
	scanf("%d", &a);
	
	printf("Inserisci il secondo numero: ");
	scanf("%d", &b);
	
	//Visualizza la media aritmetica
	media = (a + b) / 2; 
	printf("La media è: %f\n", media);
}