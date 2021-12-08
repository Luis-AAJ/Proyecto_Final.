//PROYECTO FINAL

#include <stdio.h>	   //Libreria estandar
#include <stdlib.h>   //Sirve para ejecutar subprocesos o comandos del sistema operativo.
#include <String.h>   //contiene un conjunto de funciones para manipular cadenas.

void altalib(int opcion);
void buslib(int opcion);
void consult(int opcion);
void modi(int opcion);
void bajas(int opcion);
void imprimir(int opcion);


struct libreria  //esta estructura contiene todos los datos que se utilizaran en el programa
{
	char codigo_lib[10];
	char titulo[25];
	char autor[50];
	char edicion[25];
	char editorial[25];
	char ISBN[15];
	char num_ejem[10];
};

	struct libreria lib[] = {
								{""},
								{""},
								{""},
								{""},
								{""},
								{""},
								{""},
	};    			//inicializacion de la estructura de datos a utilizar en el programa
	struct libros temp;
	void ordenar(int N)
{
	int x, iact, isig;
	for(x=0; x<N; x++)
	{
		for(iact=0; iact<N-1; iact++)
		{
			isig = iact+1;
			if (strcmp())
		}
	}
}
int main()
{
	int opcion;

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
					void altalib(struct libreria );
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
			//void altalib(struct libreria )
			{
				int i;
				char ;
			}*/
		}while(opcion=7);
		system("pause");
		return 0;
};
