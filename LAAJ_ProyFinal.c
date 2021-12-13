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
	int num_ejem;
};
		//definir la estructura de mi archivo
	struct libreria lib[] = {
								{""},
								{""},
								{""},
								{""},
								{""},
								{""},
								{0},
	};    			//inicializacion de la estructura de datos a utilizar en el programa
	struct libreria temporal;  //la creacion de una libreria temporal
	void ordenar(struct libreria *libreria) //funcion para ordenar los libros en orden alfabetico
{ 
	int i, N;
	for (i =0; i<N; i++)
		{
		int iact;
		for(iact =0; iact<N-1; iact++)
			{
				int isig =iact+1;
				//ordenar de manera descendiente
				if(lib[iact].titulo < lib[isig].titulo)
				{		//intercambiar valores
					memcpy(&temporal, &lib[iact], sizeof(struct libreria));
					memcpy(&lib[iact], &lib[isig], sizeof(struct libreria));
					memcpy(&lib[isig], &temporal, sizeof(struct libreria));
				}
			}
		}
}
int main()
{
	int opcion;
	int N ;
		do  {
			printf("1) alta de libros\n");
			printf("2) Busqueda de libros\n");
			printf("3) consulta general\n");
			printf("4) Modificaciones\n");
			printf("5) Bajas\n");
			printf("6) imprimir_report\n");
			printf("7) salir\n");
			printf("opcion: ");	//pide por pantalla la opcion que deseas elegir
			scanf("%i",& opcion);
			
			switch(opcion) {
				case 1: { system("cls");
					altalib(opcion);  //la funcion para dar de alta los libros que ingresare
					int i;	//definir un entero
					puts("Cuantos libros deseas dar de alta\n");
					scanf("%d", &N);
					puts("ingresa la informacion del libro");
					for(i = 0; i < N; i++)		//funcion para repetir N veces los valores solicitados.
					{		//Se introduce la informacion dependiendo de el valor que le pongamos a N.
						puts("\nCodigo del libro: ");
						scanf(" %[^\n]", lib[i].codigo_lib);
						puts("\nTitulo del libro: ");
						scanf(" %[^\n]", lib[i].titulo);
						puts("\nAutor");
						scanf(" %[^\n]", lib[i].autor);
						puts("\nEdicion: ");
						scanf(" %[^\n]", lib[i].edicion);
						puts("\nEditorial: ");
						scanf(" %[^\n]", lib[i].editorial);
						puts("\nISBN: ");
						scanf("%s", lib[i].ISBN);
						puts("\nEjemplares: ");
						scanf("%d", &lib[i].num_ejem);
					}
					break;
				}
				case 2: { system("cls");
					buslib(opcion);
					int  i,comp;
					char comprobar[25]; //comprobar los caracteres del libro a buscar
					puts("Ingresa el tiulo del libro a buscar: ");
					scanf(" %[^\n]", lib[i].titulo);

					for(i = 0; i <N; i++)
					 	{	
						comp = strcmp(comprobar,lib[i].titulo);
						if(comp == 0) {
							printf("El codigo unico del libro es: %s\n",lib[i].codigo_lib);
							printf("El libro pertenece al autor: %s\n\n", lib[i].autor);
							printf("LA edicion es: %s\n\n", lib[i].edicion);
							printf("Su editorial es: %s\n", lib[i].editorial);
							printf("El ISBN del libro es: %s\n", lib[i].ISBN);
							}
						}
					break;
				}
				
				case 3: { system("cls");
					
					int i;	//definir la variable entero 
						
						for (i=0; i<N; i++)	//funcion para imprimir los valores de la alta
						{			//la lectura de datos ingresados en la funcion alta 
							void ordenar(struct libreria *libreria);
							printf("codigo del libro %s\n", lib[i].codigo_lib);
							printf("Titulo del libro %s\n", lib[i].titulo);
							printf("Autor %s\n", lib[i].autor);
							printf("Edicion del libro %s\n", lib[i].edicion);
							printf("Editorial %s\n",lib[i].editorial);
							printf("ISBN %s\n", lib[i].ISBN);
							printf("Ejemplares %d\n", lib[i].num_ejem);
						}
						
					
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
					int i;
					for(i=0; i<N; i++) {
						printf("codigo del libro %s\n", lib[i].codigo_lib);
						printf("Titulo del libro %s\n", lib[i].titulo);
						printf("Autor %s\n", lib[i].autor);
						printf("Edicion del libro %s\n", lib[i].edicion);
						printf("Editorial %s\n",lib[i].editorial);
						printf("ISBN %s\n", lib[i].ISBN);
						printf("Ejemplares %d\n", lib[i].num_ejem);
					}
					
					FILE *archivo;
					archivo = fopen("Libros.txt", "w");
					if(archivo==NULL)
					{
						fprintf(stderr, "\nNofue posible abrir el archivo\n");
						exit(1);
					}
					for(i=0; i<N; i++)
					{
						fwrite(&lib[i], sizeof (struct libreria), 1, archivo);
						if(feof(archivo))
						printf("Error al escribir archivo\n");					
						else
						printf("\nFue posible guardar en el archivo los datos\n\n");
					}
					fclose(archivo);
					break;
				}
				case 7: system("cls");  //para limpiar la pantalla despues de seleccionar la opcion
					puts("Saliendo...");  //mensaje de salida
					break;
					
				default: system("cls"); //para limpiar la pantalla despues de marcar un numero erroneo
						puts("\nOPCION NO VALIDA, intente de nuevo\n"); // manda el mensaje de error
						getchar();
				break;
			}	
		}while(opcion !=7);		//todo numero mayor a 7 va a mandar un mensaje de opcion invalido.
		
		system("pause");
		return 0;
	} // FIn del menu
void altalib() {
	
}
void buslib() {
	
}
void consult() {
	
}
void modi() {
	
}
void bajas() {
	
}
void imprimir() {
	
}
void salir() {
	
}
