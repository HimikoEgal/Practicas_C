/*Arreglos bidimensionales (matrices)

    -De enteros
    -De flotantes
    -De caracteres
    
    Primero Enteros
*/

#include <stdio.h>
#include <string.h>

int main(){
    float matriz[2][3];
    int i,j; //"i" para filas, "j" para columnas.
    
    //Ahora vamos a pedir al usuario que ingrese los valores de la matriz
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
        printf("Ingrese un numero matriz[%i][%i]: ", i+1, j+1); //ambos [%i] es para que el usuario sepa en que fila y columna va y el i+1 es porque la matriz inicia en el 0 pero queremos que parezca que inicia en el 1.
        scanf("%f", &matriz[i][j]); //Y lo guardamos en la variable "matriz[][]".
        }
    printf("\n");
    }
    //Ahora vamos a imprimirlos, tal y como lo hicimos antes con los dos bucles for.
    printf("La matriz que ingreso fue: \n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
        printf("%.2f ", matriz[i][j]);
        }
    printf("\n");
    }
    
    return 0;
}

//Observaciones:
//i+1 → solo calcula el valor a mostrar (i más 1) en ese momento. No cambia la variable i.
//i++ → sí cambia la variable i, porque el operador ++ incrementa la variable como parte de la operación.
//Y por eso es que se debe de usar i+1 cuando se quiere imprimir la posicion de "i" o "j" en pantalla.