// codigo para el punto d del ejercicio 2, solamente muestro aca la funcion separada, la original iria en el TDA.
/*
void montoPrestamo (tipoLista *MontoPrestamos, tipoLista *PrestamosActualizadosOpción1, tipoLista *PrestamosActualizadosOpción2) {
    CrearLista(PrestamosActualizadosOpción1);
    CrearLista(PrestamosActualizadosOpción2);
    tipoLista clon;
    CrearLista(&clon);

    double descuento = 0;
    int auxiliar = 0;
    int auxiliar2 = 0;

    while (!EsVacia(*MontoPrestamos)) {
        Sacar(MontoPrestamos, &auxiliar);
        InsertarFinal(&clon, auxiliar);
        auxiliar2 = auxiliar;
        if (auxiliar < 50000) {
            descuento = (auxiliar * 15) / 100;
            auxiliar = auxiliar - descuento;
            InsertarFinal(PrestamosActualizadosOpción1, auxiliar);
        } 
        if (auxiliar2 >= 5000) {
            descuento = (auxiliar2 * 5) / 100;
            auxiliar2 = auxiliar2 - descuento;
            InsertarFinal(PrestamosActualizadosOpción2, auxiliar2);
        }
        
    }
    *MontoPrestamos = clon;
}*/