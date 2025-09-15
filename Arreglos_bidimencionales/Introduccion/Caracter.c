/*Arreglos bidimensionales (matrices)

    -De enteros
    -De flotantes
    -De caracteres
    
    Primero Enteros
*/

#include <stdio.h>
#include <string.h>

int main(){
    //cada llave representa una fila {{},{}} = 2 filas || Y los elementos son las columnas.
    char matriz[2][3] = {{'a', 'b', 'c'} , {'d', 'e', 'f'}}; //recordar usar '' cuando se trata de caracteres...
    int i, j;
    //Nuevamente i = filas, j = columnas
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%c",matriz[i][j]);
        }
    printf("\n");
    }
    
    return 0;
}