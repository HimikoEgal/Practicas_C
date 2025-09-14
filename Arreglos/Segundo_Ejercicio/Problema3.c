/*Hacer 2 arreglos de cadena de caracteres, pedir el nombre al usuario y
guardarlo dentro de un arreglo, luego copiar el contenido al otro arreglo.*/

#include <stdio.h>
#include <string.h> //Se usa cuando se trabaja con cadenas de caracteres

const int TAM = 20;

int main(){
    char nombre1[TAM], nombre2[TAM];
    
    printf("Ingrese su nombre: \n");fgets(nombre1, TAM, stdin); //fgets es como scanf pero para copiar cadenas de caracteres
    strcpy(nombre2, nombre1); //string copy = strcpy || nombre1 = nombre2
    printf("Su nombre es: %s", nombre2);
    
    getchar();
    return 0;
}