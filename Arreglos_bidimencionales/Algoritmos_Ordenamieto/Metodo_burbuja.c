/*
Algoritmo de ordenamiento. Revisa cada elemento de la lista que va a ser ordenado 
con el siguiente, intercambiándolos de posición si están en el orden incorrecto.
Es necesario revisar varias veces la lista hasta que no se necesiten más intercambios.

Si numero anterior > numero siguiente -> intercambiar posiciones.

4 5 2 1 3 cuatro > cinco -> no intercambiar
^
4 5 2 1 3 cinco > dos -> intercambiar
  ^
4 2 5 1 3 cinco > 1 -> intercambiar
    ^
4 2 1 5 3 cinco > tres -> intercambiar. Ahora el cinco es el mayor y ya está en su posición.
      ^
Volvemos al inicio del arreglo.

4 2 1 3 5 cuatro > dos -> intercambiar
^
2 4 1 3 5 cuatro > uno -> intercambiar
  ^
2 1 4 3 5 cuatro > tres -> intercambiar
    ^
2 1 3 4 5 cuatro es el mayor, ya está en su posición
      ^ 
Volvemos al inicio del arreglo.

2 1 3 4 5 dos > uno -> intercambiar
^
1 2 3 4 5 Y listo!
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int array[5] = {4,5,2,1,3};
    int i, j, aux;

    for(i=5-1; i>0; i--){
        //Evaluamos en ya que revisamos las filas.
        for(j=0; j<i; j++){
            if(array[j] > array[j+1]){
                aux = array[j]; //Guardamos el valor mayor en una variable auxiliar.
                array[j] = array[j+1]; //Asignamos el valor menor a la posición del mayor.
                array[j+1] = aux; //Asignamos el valor mayor a la posición del menor.
            }
        }
    }
    
    //Ascendente
    for(i=0; i<5; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    //Descendente
    for(i=4; i>=0; i--){
        printf("%d ", array[i]);
    }

    return 0;
}