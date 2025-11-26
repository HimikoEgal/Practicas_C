//Abrir 2 archivos de texto, despues cerrar cada uno con fclose()

#include <stdio.h>
#include <stdlib.h>

FILE *fd1, *fd2;

int main(){
    char direccion1[] = "/home/himiko/Downloads/Prueba/nuevo_archivo.txt";
    char direccion2[] = "/home/himiko/Downloads/Prueba/prueba.txt";

    fd1 = fopen(direccion1, "r"); // Abrir el primer archivo para lectura
    fd2 = fopen(direccion2, "r"); // Abrir el segundo archivo para lectura

    if(fd1 == NULL || fd2 == NULL) {
        printf("Error al abrir uno de los archivos.\n");
        return 1;
    } else {
        printf("Ambos archivos abiertos exitosamente.\n");
    }
    fclose(fd1); // Cerrar el primer archivo
    fclose(fd2); // Cerrar el segundo archivo
    return 0;
}