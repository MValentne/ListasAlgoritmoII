//dada una lista verificar que numeros son perfectos e insertarlos en una nueva lista.
#include <stdio.h>
#include <stdlib.h>
#include "../TDA_LISTA/lista.h"

int main (){

//variables auxiliares y de operacion
int auxiliar;
int x;
int suma = 0;

//creación de listas a utilizar
tipoLista listagenerica;
CrearLista(&listagenerica);

tipoLista listaPerfectos;
CrearLista(&listaPerfectos);

tipoLista clon;
CrearLista(&clon);

//inicio del programa

printf ("Ingrese 10 numeros enteros a la lista por favor.\n");
for (int i=0; i<10; i++){
	printf("Ingrese un numero por favor:\n");
	scanf ("%d", &x);
	InsertarFinal(&listagenerica, x);
}

printf("Analizaremos los numeros perfectos que se pudieron ingresar, los pondremos en una nueva lista.\n");

while (!EsVacia (listagenerica)){
	Sacar(&listagenerica, &auxiliar);
    InsertarFinal(&clon, auxiliar);
	suma = 0; // Reiniciar la suma para cada número
    for (int i=1; i<auxiliar; i++){ // Se itera desde 1 hasta el número anterior al auxiliar para encontrar sus divisores propios
		if (auxiliar % i == 0){
			suma = suma + i;
		}
	}
	if (auxiliar == suma){ // Si la suma de los divisores propios es igual al número, entonces es perfecto
		InsertarFinal(&listaPerfectos, auxiliar);
		}
}
 if (!EsVacia(listaPerfectos)){ // Si la lista de números perfectos no está vacía, se imprime su contenido
	printf ("La lista de los numeros perfectos es la siguiente.\n");
	Imprimir(listaPerfectos);
	}
	else {
		printf("La lista de Perfectos no se puede mostrar porque esta vacia.\n");
	}
*listagenerica = *clon; // Se clona la lista para seguir iterando sobre ella sin perder los elementos
}