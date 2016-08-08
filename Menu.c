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

void Saludo()
{
	char nombre[10],apellido[10];
	printf("\n\t\tPor favor digame su nombre: ");
	scanf("%s",nombre);
	printf("\n\t\tY su apellido: ");
	scanf("%s",apellido);
	printf("\n\t\tBienvenido: %s %s",nombre,apellido);
}

void Ecuacion()
{
	float a, b, c, disc, x1, x2, xi, xr;

    printf("\t\t\tEscribe el valor de a: ");
    scanf("%f", &a);
    while(a==0){
    printf("\t\tEl valor de a no puede ser 0 ingrese el valor de nuevo:");
    scanf("%f", &a);
    }
    printf("\t\t\tEscribe el valor de b: ");
    scanf("%f", &b);
    printf("\t\t\tEscribe el valor de c: ");
    scanf("%f", &c);
    disc= pow(b, 2.0)-4*a*c;
    if(disc>0.0){
        printf("Las dos raices son reales\n");
        x1=((-b+sqrt(disc))/(2.0*a));
        x2=((-b-sqrt(disc))/(2.0*a));
        printf("\nx1=%.2f   x2=%.2f\n\n", x1, x2);
    } 
    else{
        if(disc==0.0){
            x1=(-b)/(2.0*a);
            printf("\nLa ecuacion solo tiene una raiz %.2f\n\n", x1); 
        }
        else{
              xr=(-b/(2.0*a));
              xi=(sqrt(-disc)/(2.0*a));
              printf("\n\t\tLa raiz real es %.2f y la imaginaria es %.2f\n\n", xr, xi);
            }	
		}		
}

void Conversion()
{
	int numero;

	printf("\t\tIngrese numero: ");
	scanf("%d",&numero);

 
	int binario = 0;
	int posicion = 1;

	while(numero > 0){
		binario = binario + (numero%2)*posicion;
		numero /=2;
		posicion = posicion * 10;
		}
 
	printf("\t\tNúmero en Binario : %d\n\n",binario);
}
