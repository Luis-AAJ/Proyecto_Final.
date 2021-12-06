//PROYECTO FINAL

#include <stdio.h>	   //Libreria estandar
#include <stdlib.h>   //Sirve para ejecutar subprocesos o comandos del sistema operativo.
#include <String.h>   //contiene un conjunto de funciones para manipular cadenas.

struct libreria
{
	char codigo_lib[10];
	char titulo[25];
	char autor[50];
	char edicion[25];
	char editorial[25];
	char ISBN[15];
	char num_ejem[10];
};
void altalib();
void buslib();
void consult();
void modi();
void bajas();
void imprimir();


int main()
int opcion;
{
	do
	{
		do  {
			printf("1) alta de libros\n");
			printf("2) Busqueda de libros\n");
			printf("3) consulta general\n");
			printf("4) Modificaciones\n");
			printf("5) Bajas\n");
			printf("6) imprimir_report\n");
			printf("7) salir");
			printf("opcion: ");
			scanf("%i",& opcion);
			
			switch(opcion) {
				case 1: {
					altalib(opcion);
					break;
				}
				
				case 2: {
					buslib(opcion);
					break;
				}
				
				case 3: {
					consult(opcion);
					break;
				}
				
				case 4: {
					modi(opcion);
					break;
				}
				
				case 5: {
					bajas(opcion);
					break;
				}
				
				case 6: {
					imprimir(opcion);
					break;
				}
				
				case 7: {
					salir(opcion);
					break;
				}
			}
		}while();
		
	}
		//system(pause);
return 0;
}
