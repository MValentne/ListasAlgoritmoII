
#ifndef LISTA_H
#define LISTA_H
#define MAX 100
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Unidad elemental
struct nodo {
    int info;
    struct nodo *sig;
};

//Un puntero que referencia a un nodo
typedef struct nodo *tipoLista;

void crearLista(tipoLista *punteroLista );

bool esVacia(tipoLista L);

void nuevo_nodo(tipoLista *nuevoN);

void insertarPrincipio(tipoLista *L, int x);

void insertarFinal(tipoLista *L, int x);

void eliminarElem(tipoLista *L, int x);

void imprimir_lista(tipoLista L);

//Nos permite operar con valores de la fila
// filavar --> x; x + 1 = ...
void sacarElemento(tipoLista *L, int *x);

//Busqueda lineal
bool existeEnLista(tipoLista L, int x);

void montoPrestamo (tipoLista *MontoPrestamos, tipoLista *PrestamosActualizadosOpción1, tipoLista *PrestamosActualizadosOpción2);

#endif
