#include "lista.h"
#include <stdio.h>

//Lista vacia
void crearLista(tipoLista *punteroLista ){
    *punteroLista = NULL;
}

bool esVacia(tipoLista L){
    if (L == NULL) return (true);
    else return (false);
}

void nuevo_nodo(tipoLista *nuevoN){
    *nuevoN = malloc(sizeof(struct nodo)); //--> Asigna memoria a un nuevo nodo
    if (esVacia(*nuevoN)) { // --> Caso en el que surge error y no se aloca memoria adecuadamente.
        printf("Error: no se pudo asignar memoria\n");
        exit(1);
    }
}

void insertarPrincipio(tipoLista *L, int x) {
    tipoLista nuevoNodo; // --> Apunta a basura
    nuevo_nodo(&nuevoNodo); // --> Apunta al nuevo nodo
    nuevoNodo->info = x;
    nuevoNodo->sig = *L;
    *L = nuevoNodo;
}

void insertarFinal(tipoLista *L, int x) {
    tipoLista nuevoNodo;
    tipoLista PI;
    nuevo_nodo(&nuevoNodo);
    nuevoNodo->info = x;
    nuevoNodo->sig = NULL;

    if (esVacia(*L)) {
        *L = nuevoNodo;
    } else {
        PI = *L;
        while (!esVacia((*L)->sig)) {
            *L = (*L)->sig;
        }
        (*L)->sig = nuevoNodo;
        *L = PI;
    }
}

void eliminarElem(tipoLista *L, int x){
    tipoLista PI, PA = NULL;
    PI = *L;

    while ((!esVacia(*L)) && ((*L)->info != x)){
        PA = *L;
        *L = (*L)->sig;
    }
    if (!esVacia(*L)){
        if (!esVacia(PA)){
            PA->sig = (*L)->sig;
        }
        else{
            PI = PI->sig;
        }
        free(*L);
    }
    *L = PI;
}

void imprimir_lista(tipoLista L) {
    printf("[");
    while (!esVacia(L)) {
        printf("%d", L->info);
        if (L->sig != NULL) {
            printf(", ");
        }
        L = L->sig;
    }
    printf("]\n");
}

void sacarElemento(tipoLista *L, int *x){
    if(*L == NULL){
        exit(1);
    }
    tipoLista primerNodo = *L;
    *L = primerNodo->sig;
    *x = primerNodo->info;
    free(primerNodo);
}

bool existeEnLista(tipoLista L, int x){
    while (!esVacia(L)) {
        if (L->info == x) {
            return true;
        }else {
        L = L->sig;
        }
    }
    return false;
}

void montoPrestamo (tipoLista *MontoPrestamos, tipoLista *PrestamosActualizadosOpción1, tipoLista *PrestamosActualizadosOpción2) {
    crearLista(PrestamosActualizadosOpción1);
    crearLista(PrestamosActualizadosOpción2);

    tipoLista aux= (*MontoPrestamos);
    while (!esVacia(*MontoPrestamos)){
        int prestamo = aux->info;
        if (prestamo < 50000){
            prestamo = (int)(prestamo - (prestamo * 0.15)); //descuento del 15%
            insertarFinal(PrestamosActualizadosOpción1, prestamo);
        } else {
            insertarFinal(PrestamosActualizadosOpción1, prestamo);
        }
        if (prestamo >= 5000){// el if lo pusimos separados no se puede poner else hay casos donde se traba toodo.
            prestamo = (int)(prestamo - (prestamo * 0.05)); //descuento del 5%
            insertarFinal(PrestamosActualizadosOpción2, prestamo);
        }else{
            insertarFinal(PrestamosActualizadosOpción2, prestamo);
        }
        aux = (*MontoPrestamos)->sig;
        }
    }
