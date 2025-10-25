#include <stdio.h>
#include <math.h>

// Calcolare l'area del quadrato di lato D
double area_quadrato(double lato)
{
	return lato * lato;
}

// Calcolare l'area del cerchio di diametro D
double area_cerchio(double diametro)
{
	double r = diametro / 2;
	return M_PI * r * r; 
}

// Calcolare l'area del triangolo equilatero di lato D
double area_triangolo(double lato)
{
	return(sqrt(3) / 4) * lato * lato; 
}

int main(void)
{
	// Immetti un numero reale D
	double D;
	printf("Inserisci un numero: ");
	scanf("%lf", &D);
	
	// Stampa l'area del quadrato di lato D 
	printf("Area del quadrato: %lf\n", area_quadrato(D));
	
	// Stampa l'area del cerchio di diametro D 
	printf("Area del cerchio: %lf\n", area_cerchio(D));
	
	// Stampa l'area del triangolo equilatero di lato D 
	printf("Area del triangolo: %lf\n", area_triangolo(D));
}