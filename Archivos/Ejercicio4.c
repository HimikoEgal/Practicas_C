/*
Utilizar la funcion fputc() para introducrir caracteres en un archivo de texto.
    fputc(c, puntero_archivo);
    c: caracter a escribir
*/

#include <stdio.h>
#include <stdlib.h>

FILE *fd;

int main(){
    int c;
    
    char direccion[] = "/home/himiko/Downloads/Prueba/nuevo_archivo.txt";
    fd = fopen(direccion,"wt"); //wt = write text (escribir texto)

    if(fd == NULL){
        printf("Error al crear el archivo");
        return 1;
    }
    printf("Pulsar ctrl + D para finalizar de escribir\n");
    while((c = getchar()) != EOF){
        fputc(c, fd);
    }
    fclose(fd);
    return 0;
}