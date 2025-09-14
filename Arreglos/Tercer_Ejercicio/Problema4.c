/*Hacer 2 arrays de cadena de caracteres, almacenar 2 nombres, cada uno en su respectivo arreglo,
y luego intercambiar el contenido de los arreglos*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const int TAM = 20;
int main(){
    char nombre1[TAM], nombre2[TAM], aux[TAM];
    
    printf("Ingrese su primer nombre: \n");fgets(nombre1, TAM, stdin); //Himiko
    printf("Ingrese su segundo nombre: \n");fgets(nombre2, TAM, stdin); //Egal
    
    strcpy(aux, nombre1);
    strcpy(nombre1, nombre2);
    strcpy(nombre2, aux);
    
    system("clear");
    printf("Su primer nombre ahora es: %s\n", nombre1); //Egal
    printf("Su segundo nombre ahora es: %s", nombre2); //Himiko
    
    return 0;
}