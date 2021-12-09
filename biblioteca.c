//PROYECTO FINAL

#include <stdio.h>	   //Libreria estandar
#include <stdlib.h>   //Sirve para ejecutar subprocesos o comandos del sistema operativo.
#include <String.h>   //contiene un conjunto de funciones para manipular cadenas.



void altalib();
void buslib();
void consult();
void modi();
void bajas();
void imprimir();
//void default();

struct libreria  //esta estructura contiene todos los datos de la libreria que se utilizaran en el programa
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
	//struct libros temp;
	void ordenar(int N)
{
	int x, iact, isig;
	for(x=0; x<N; x++)
	{
		for(iact=0; iact<N-1; iact++)
		{
			isig = iact+1;
			if (strcmp(lib[iact].titulo, lib[isig].titulo)>0)
			{
				
			}
		}
	}
}
int main()
{
	int opcion;
	int N;
		do  {
			printf("1) alta de libros\n");
			printf("2) Busqueda de libros\n");
			printf("3) consulta general\n");
			printf("4) Modificaciones\n");
			printf("5) Bajas\n");
			printf("6) imprimir_report\n");
			printf("7) salir\n");
			printf("opcion: ");
			scanf("%i",& opcion);
			switch(opcion) {
				case 1: {
					altalib(opcion);
					puts("ingresa la informacion del libro");
					for(N=0; N<1; N++)
					{
						puts("\nCodigo del libro: ");
						scanf(" %[^\n]", lib[N].codigo_lib);
						puts("\nTitulo del libro: ");
						scanf(" %[^\n]", lib[N].titulo);
						puts("\nAutor");
						scanf(" %[^\n]", lib[N].autor);
						puts("\nEdicion: ");
						scanf(" %[^\n]", lib[N].edicion);
						puts("\nEditorial: ");
						scanf(" %[^\n]", lib[N].editorial);
						puts("\nISBN: ");
						scanf(" %[^\n]", lib[N].ISBN);
						puts("\nEjemplares: ");
						scanf(" %[^\n]", lib[N].num_ejem);
					}
					FILE *archivo;
					archivo = fopen("Libros.txt", "w");
					if(archivo==NULL)
					{
						fprintf(stderr, "\nNofue posible abrir el archivo\n");
						exit(1);
					}
					for(N=0; N<1; N++)
					{
						fwrite(&lib[N], sizeof (struct libreria), 1, archivo);
						if(feof(archivo))
						printf("Error al escribir archivo\n");					
						else
						printf("Fue posible escribir en archivo\n");
					}
					fclose(archivo);
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
				case 7: system("cls");
					puts("Saliendo...");
					break;
					
				default:system("cls"); 
						puts("\nOPCION NO VALIDA, intente de nuevo\n");
						getchar();
				break;
			}	
		}while(opcion !=7);
	
		system("pause");
		return 0;
}
void altalib() {
	
}
void buslib() {
	
}
void consult() {
	
}
void modi() {
	
}
void bajas(struct libreria *lib, int N) {
	int i, c, aux;
	
}
void imprimir() {
	
}
void salir() {
	
}

