/*
Tomar el archivo de texto creado en el problema anterior y con la funcion fgetc() leer todo su contenido
    fgetc(puntero_archivo);
*/

#include <stdio.h>
#include <stdlib.h>

FILE *fd;

int main(){
    int c;

    char direccion[] = "/home/himiko/Downloads/Prueba/nuevo_archivo.txt"; //Ruta absoluta
    
    fd = fopen(direccion, "rt"); //rt = read text (comprueba que el archivo exista y lee su texto)

    if(fd == NULL){
        printf("No se ha encontrado el archivo");
        return 1;
    }

    while((c = fgetc(fd)) != EOF){
        if(c == '\n'){
            printf("\n");
        }
        else{
            putchar(c);
        }
    }
    fclose(fd);
    
    return 0;
}