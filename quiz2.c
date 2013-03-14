/**
* Universidad de los Andes
* Física computacional
* Quiz 2
* Autor: Andrés Felipe García Albarracín
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main (int argc, char **argv)
{
	// Parámetros de entrada
	if (argc !=4)
	{
		printf("Debe ingresar el nombre del archivo a analizar\n");
		exit(1);
	}

	double limInf = atof(argv[1]);
	double limSup = atof(argv[2]);
	double tamano = atof(argv[3]);
	printf("Parámetros: %f %f %g\n", limInf, limSup, tamano);
	
	//int numPasos = int((limSup - limInf)/tamano);
	
	// Vectores de datos
	//double *vectorX;
	//vectorX = malloc((numPasos)*sizeof(float));
	
	int j = 0;
	double valorx = limInf;
	double suma = 0;
	while (valorx < limSup)
	{
		suma = suma + tamano/sqrt( 1 + (cos(valorx)*sin(valorx)) );
		j++;
		valorx = limInf + j*tamano;
	}

	printf("Integral = %f\n", suma);
}
