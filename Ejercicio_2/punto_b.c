// b. Dada una lista de números enteros, recorrer la lista e
// informar el mayor de los números múltiplos de 6.

#include <stdio.h>
#include "../TDA_LISTA/lista.h"

int main(){
    //======================= Cargamos una lista de prueba:
    tipoLista *inicioLista;
    CrearLista(inicioLista);
    printf("Ingrese 5 valores a ingresar en la lista (prueba): \n");
    int valor;
    for(int i = 0; i < 5; i++){
        scanf("%d", &valor);
        InsertarFinal(inicioLista, valor);
    }
    printf("Su lista es: \n");
    Imprimir(*inicioLista);
    //====================== Lista Cargada

    int multiploMayor = 0;
    int maxMultiploMayor = 0;
    //Recorro lista e informo el numero mayor que sea multiplo de 6.
    while(!EsVacia(*inicioLista)){
        Sacar(inicioLista, &multiploMayor);
        if((multiploMayor % 6 == 0)&&(multiploMayor > maxMultiploMayor)){
            maxMultiploMayor = multiploMayor;
        }
    }
    if (maxMultiploMayor == 0){
        printf("No se encontro un multiplo de 6 en la lista.\n");
    } else {
        printf("El mayor valor multiplo de 6 en la lista es [%d]\n", maxMultiploMayor);
    }

    return 0;
}
