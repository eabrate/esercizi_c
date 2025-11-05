#include <stdio.h>
#include <math.h>

double somma(double A, double B)
{
	return A + B;
}

double differenza(double A, double B)
{
	return A - B;
}

double moltiplicazione(double A, double B)
{
	return A * B;
}

double divisione(double A, double B)
{
	return A / B;
}
int main(void)
{
	// Inserisci due numeri reali da tastiera
	double A, B; 
	printf("Inserisci un numero:");
	scanf("%lf", &A);
	printf("Inserisci un numero:");
	scanf("%lf", &B); 
	
	// Visualizza i quattro valori 
	// Somma 
	printf("La somma è: %.2lf\n", somma(A, B));
	
	// Differenza 
	printf("La differenza è: %.2lf\n", differenza(A, B)); 
	
	// Moltiplicazione  
	printf("La moltiplicazione è: %.2lf\n", moltiplicazione(A, B));
	
	// Divisione 
	if (B != 0)
	{
	printf("La divisione è: %.2lf\n", divisione(A, B)); 
	}
	else
	{
		printf("La divisione non è possibile: divisore uguale a zero.\n");
	}
	 
}