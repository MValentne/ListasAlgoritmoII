# Trabajo Práctico — Listas TDA

**Universidad Nacional de Misiones**  
Facultad de Ciencias Exactas, Químicas y Naturales  
Algoritmos y Estructuras de Datos II

Todos los ejercicios deben ser realizados en lenguaje C.

---

## A) Estructuras Dinámicas: Listas

### Ejercicio 1

Realizar el TDA de Listas con las siguientes operaciones:

a. **Crear lista**  
b. **Crear nodo**  
c. **EsVacia:** informa si la lista tiene o no elementos.  
d. **Insertar al principio**  
e. **Insertar al final**  
f. **Existe elemento:** consulta si un elemento se encuentra en la lista.  
g. **Borrar:** elimina el elemento de la lista. Se debe pasar como parámetros la lista y el elemento a eliminar.  
h. **Imprimir:** imprime los elementos de la lista.  
i. **Sacar:** se debe pasar como parámetros la lista y la variable donde quedará guardado el primer elemento de la lista. Una vez extraído, el elemento se elimina de la lista y el siguiente pasa a ser el primero.

### Ejercicio 2

Realizar los siguientes programas utilizando el TDA de Listas. Considerar qué estrategia usar para no perder los elementos de la lista original.

a. Dada una lista de números enteros, recorrer la lista e informar la cantidad de números impares.

b. Dada una lista de números enteros, recorrer la lista e informar el mayor de los números múltiplos de 6.

c. Los números perfectos son iguales a la suma de todos sus divisores menores a él. Por ejemplo, el número 6 es perfecto porque 6 = 1 + 2 + 3. Dada una lista de enteros, determinar si existen números perfectos e insertarlos en una nueva lista.

d. Un banco mantiene un listado *MontoPréstamos* con los montos de préstamos de sus clientes. El orden de las deudas se corresponde con otro listado *DatosClientes*: al primer cliente del listado *DatosClientes* le corresponde el primer préstamo del listado *MontoPréstamos*, y así sucesivamente.

   Crear un módulo que reciba el listado *MontoPréstamos* y genere dos nuevos listados respetando lo siguiente:

   - **PréstamosActualizadosOpción1:** si el préstamo es menor a $50.000, se aplica un descuento del 15%.
   - **PréstamosActualizadosOpción2:** si el préstamo es mayor o igual a $5.000, se aplica un descuento del 5%.

### Ejercicio 3

Realizar la prueba de escritorio de la operación *InsertarAlPrincipio* con los elementos 5, 2, 83 y 7, en ese orden.