/*Arreglos bidimensionales (matrices)

    -De enteros
    -De flotantes
    -De caracteres
    
    Primero Enteros
*/

#include <stdio.h>
#include <string.h>

int main(){
    int matriz[2][3] = {{52,53,54} , {55,56,57}};
    int filas, columnas; //Filas y columnas normalmente se escribe como "i" y "j" (esto es para que sea mas visual).
    
    //Para mostrar la matriz se tiene que usar un bucle para filas, y anidado dentro del mismo bucle otro for para las columnas.
    //filas < 2 porque hay dos filas.
    //columnas < 3 porque hay 3 columnas.
    for(filas=0;filas<2;filas++){
        for(columnas=0;columnas<3;columnas++){
            printf("%i ", matriz[filas][columnas]);
        }
    printf("\n");
    }
    return 0;
}