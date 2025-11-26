//Hacer un programa en C que lea un archivo de texto
#include <stdio.h>

FILE *fd;

int main(){
    char direccion[] = "/home/himiko/Downloads/Prueba//prueba.txt";
    fd = fopen(direccion, "r"); //r de read para leer el archivo
    if (fd == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1;
    }
    else {
        printf("Archivo abierto exitosamente.\n");
    }
    fclose(fd); //cerrar el archivo
    return 0;
}