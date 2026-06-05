//dada una lista de numeros enteros, recorrer la lista e 
//informar cuantos numeros impares hay en la lista.
#include <stdio.h>
#include <stdlib.h>
#include "../TDA_LISTA/lista.h"

int main () {
    printf("\nPrograma del PUNTO A\n");
    int var;
    int numerosImpares = 0;

    tipoLista punteroLista;
    CrearLista(&punteroLista);

    printf("Ingrese 10 numeros enteros para armar la lista: \n");
    for (int i = 0; i < 10; i++) {
            scanf("%d", &var);
            InsertarFinal(&punteroLista, var);
        }


    printf("La lista es: ");
    Imprimir(punteroLista);
    while (!EsVacia(punteroLista)) {
        Sacar(&punteroLista, &var);
        if (var % 2 != 0) {
            printf("%d es impar\n", var);
            numerosImpares++;
        }
    }
    printf("La cantidad de numeros impares de la lista es %d", numerosImpares);

}
