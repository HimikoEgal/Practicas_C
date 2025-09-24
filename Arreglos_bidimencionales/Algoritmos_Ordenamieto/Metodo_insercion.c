/*
Manera natura de ordenar para un ser humano, puede usarse facilmente para ordenar
un mazo de cartas numeradas en forma arbitraria. Rquiere O(n^2) comparaciones para
ordenar una lista de n elementos.

Comprobar si el elemento de su izquierda es mayor que él, si es así, intercambiarlos.
Si no, dejarlo en su lugar y pasar al siguiente elemento a la derecha marcado con "^".

5 3 4 1 2 No hay numero a la izquierda del 5, se queda en su lugar.
^
5 3 4 1 2 Aqui 3 es menor que 5, se intercambian.
  ^
3 5 4 1 2 Aqui 4 es menor que 5, se intercambian.
    ^
3 4 5 1 2 Aqui 3 no es mayor que 4, se quedan en su lugar.
    ^
3 4 5 1 2 Aqui 1 es menor que 5, se intercambian.
      ^
3 4 1 5 2 Aqui 1 es menor que 4, se intercambian.
      ^
3 1 4 5 2 Aqui 1 es menor que 3, se intercambian.
      ^
1 3 4 5 2 Aqui 2 es menor que 5, se intercambian.
        ^
1 3 4 2 5 Aqui 2 es menor que 4, se intercambian.
        ^
1 3 2 4 5 Aqui 2 es menor que 3, se intercambian.
        ^
1 2 3 4 5 Aqui 2 no es menor que 1, se quedan en su lugar.
Y listo!
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int array[5] = {5,3,4,1,2};
    int i, pos, aux;

    for(i=1; i<5; i++){
        pos = i;
        aux = array[i];
        while((pos>0) && (array[pos-1] > aux)){
            array[pos] = array[pos-1]; //Movemos el valor mayor a la derecha.
            pos--;
        }
        array[pos] = aux; //Asignamos el valor menor a su posición correcta.
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
//Este ordenamiento tambien se puede usar con letras.