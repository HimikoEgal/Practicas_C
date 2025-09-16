/*Hacer una matriz de tipo entera preguntando al usuario el número de filas y columnas,
rellenar la matriz y luego mostrarla en pantalla.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int filas, columnas, i, j;
    
    printf("Ingrese el numero de filas: \n");scanf("%i", &filas);
    printf("Ingrese el numero de columnas: \n");scanf("%i", &columnas);
    system("clear");
    
    int matriz[filas][columnas];
    
    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            printf("Ingrese los valores de la matriz[%i][%i]: ", i+1, j+1);scanf("%i", &matriz[i][j]);
        }
    printf("\n");
    }
        for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            printf("%i ", matriz[i][j]);
        }
    printf("\n");        
    }
    return 0;
}

//Observaciones:
//No se puede declarar la variable Matriz, antes de asignar los valores a las variables "filas" y "columnas"
//Un error que tuve: Usar <=, lo que hace que los bucles recorran una posición de más.
//Si: filas = 3, los índices van de 0 a 3 (4 elementos), y eso desborda la memoria.