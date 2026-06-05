// codigo para el punto d del ejercicio 2, solamente muestro aca la funcion separada, la original iria en el TDA.

#include <stdio.h>
#include "../TDA_LISTA/lista.h"

//Prototipo de la funcion solicitada en consigna
void MontoPrestamo (tipoLista *montoPrestamos, tipoLista *prestamosActualizadosOpción1, tipoLista *prestamosActualizadosOpción2);

int main(){
    //Prueba de funcionamiento del modulo.

    //============================Cargado de lista de ejemplo
    tipoLista listaPrestamos;
    CrearLista(&listaPrestamos);
    printf("Ingrese 5 montos de prestamo (en relacion al cliente correspondiente):\n");
    int cantIteraciones = 5; //Modificable
    int valorMonto;
    for(int i = 0; i < cantIteraciones; i++){
        scanf("%d", &valorMonto);
        InsertarFinal(&listaPrestamos, valorMonto);
    }
    printf("Se cargo la siguiente lista:\n");
    Imprimir(listaPrestamos);
    //============================Lista cargada

    //Llamada al modulo
    tipoLista nuevaLista1;
    tipoLista nuevaLista2;

    MontoPrestamo(&listaPrestamos, &nuevaLista1, &nuevaLista2);
    printf("Lista actualizada [1]:\n");
    Imprimir(nuevaLista1);
    printf("Lista actualizada [2]:\n");
    Imprimir(nuevaLista2);

    return 0;
}

//Modulo implementado
void MontoPrestamo (tipoLista *montoPrestamos, tipoLista *prestamosActualizadosOpción1, tipoLista *prestamosActualizadosOpción2) {
    CrearLista(prestamosActualizadosOpción1);
    CrearLista(prestamosActualizadosOpción2);
    tipoLista clon;
    CrearLista(&clon);

    int descuento = 0; //--> No tiene sentido usar double por la naturaleza
    int auxiliar = 0;  //    del TDA que usamos, nos limitamos a int.
    int auxiliar2 = 0;

    while (!EsVacia(*montoPrestamos)) { //Se itera la lista montoPrestamos
        Sacar(montoPrestamos, &auxiliar);
        InsertarFinal(&clon, auxiliar); //Se va recuperando la lista para no perderla
        auxiliar2 = auxiliar;
        if (auxiliar < 50000) {
            descuento = (auxiliar * 15) / 100;
            auxiliar = auxiliar - descuento;
            InsertarFinal(prestamosActualizadosOpción1, auxiliar);
        }
        if (auxiliar2 >= 5000) {
            descuento = (auxiliar2 * 5) / 100;
            auxiliar2 = auxiliar2 - descuento;
            InsertarFinal(prestamosActualizadosOpción2, auxiliar2);
        }
    }
    *montoPrestamos = clon; //Recuperamos el inicio de la lista
}
