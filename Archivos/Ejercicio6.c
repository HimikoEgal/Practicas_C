#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fd;
    int c;
    char direccion[] = "nuevo_archivo.txt"; // Ruta relativa
    


    // --- Abrir archivo para escritura ---
    fd = fopen(direccion, "wt"); // "wt" = write text
    if(fd == NULL){
        perror("Error al crear el archivo");
        return 1;
    }

    printf("Escribe texto (Ctrl+D para terminar en Linux / Ctrl+Z en Windows):\n");
    while((c = getchar()) != EOF){
        fputc(c, fd);
    }
    fclose(fd);  // Cerrar archivo después de escribir

    // --- Limpiar pantalla (opcional) ---
    system("clear");

    // --- Abrir archivo para lectura ---
    fd = fopen(direccion, "rt"); // "rt" = read text
    if(fd == NULL){
        perror("No se ha encontrado el archivo");
        return 1;
    }

    printf("Contenido del archivo:\n");
    while((c = fgetc(fd)) != EOF){
        putchar(c); // Ya incluye los saltos de línea
    }
    fclose(fd);

    return 0;
}