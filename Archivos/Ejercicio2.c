//Hacer un programa en C que cree un archivo de texto

#include <stdio.h>
#include <stdlib.h>

FILE *fd;

int main(){
    char direccion[] = "/home/himiko/Downloads/Prueba/nuevo_archivo.txt";
    fd = fopen(direccion, "w"); // w de write para crear el archivo
    if (fd == NULL) {
        printf("Error al crear el archivo.\n");
        return 1;
    }
    else {
        printf("Archivo creado exitosamente.\n");
    }
    fclose(fd); //cerrar el archivo
    return 0;
}

/*
Modo de apertura de archivos en C:
- "r": Abrir un archivo para lectura.
- "w": Abrir un archivo para escritura. Si ya existe se pierden los datos, si no existe se crea uno nuevo.
- "a": Abrir un archivo para añadir datos al final.
- "r+": Abrir un archivo existente para lectura y escritura.
- "w+": Crea un archivo para escribir y leer.
- "a+": Abrir un archivo para modificar.

Se utiliza la letra t para archivos de texto (por defecto) y b para archivos binarios.

    rt: lectura de archivo de texto
    wt: escritura de archivo de texto
    at: añadir datos al final de un archivo de texto
*/