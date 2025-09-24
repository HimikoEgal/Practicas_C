/*
Algoritmo de ordenamiento que requiere O(n^2) operaciones para ordenar una lista
de n elementos. Su funcionamiento es el siguiente:

1. Buscar el minimo elemento del arreglo.
2. Intercambiarlo con el primer elemento.
3. Buscar el minimo del resto de la lista
4. Intercambiar con el segundo elemento.
5. Repetir hasta que toda la lista esté ordenada.

4 3 1 5 2 //Buscamos el minimo, que es 1, e intercambiamos con el primer elemento.
    ^
1 3 4 5 2 //Buscamos el minimo del resto, que es 2, e intercambiamos con el segundo elemento.
        ^  
1 2 4 5 3 //Buscamos el minimo del resto, que es 3, e intercambiamos con el tercer elemento.
        ^          
1 2 3 5 4 //Buscamos el minimo del resto, que es 4, e intercambiamos con el cuarto elemento.
        ^              
1 2 3 4 5 //Y listo!        
*/

#include <stdio.h>

int main(){
    int array[5] = {4,3,1,5,2};
    int i, j, min, aux;

    for(i=0; i<5-1; i++){
        min = i; //Suponemos que el primer elemento es el menor.
        for(j=i+1; j<5; j++){ //Buscamos en el resto del arreglo.
            if(array[j] < array[min]){ //Si encontramos un elemento menor, actualizamos min.
                min = j;
            }
        }
        //Intercambiamos el elemento menor con el primero del arreglo.
        aux = array[i];
        array[i] = array[min];
        array[min] = aux;
    }
    printf("Ascendente: ");
    for(i=0; i<5; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    printf("\nDescendente: ");
    for(i=4; i>=0; i--){
        printf("%d ", array[i]);
    }

    return 0;
}