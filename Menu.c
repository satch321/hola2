#include <stdio.h>
#include <math.h>



void Saludo();
void Ecuacion();
void Conversion();


int main( int argc, char* argv[])
{
	int opcion;
	
	do{
	printf("\n1.- Saludo\n");
	printf("2.- Resolucion ecuacion de segundo grado\n");
	printf("3.- Conversion numero decimal a binario\n");
	printf("4.- Salir\n");
	
	printf("\n\t\tSelecciona una opcion <1-4>: ");
	scanf("%d",&opcion);
	
	printf("\n");
	
	
	switch(opcion)
	{
		case 1:
		Saludo();
		break;
		
		case 2:
		Ecuacion();
		break;
		
		case 3:
		Conversion();
		break;
	
		default:
		break;
	
	}
 }while (opcion!=4);
}


