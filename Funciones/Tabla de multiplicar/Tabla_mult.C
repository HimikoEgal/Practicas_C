/*
Hacer un programa que muestre una tabla de multiplicar hasta el 20 de un numero cualquiera por pantalla,
el numero se pedira en el programa principal. Usar funcion.

n * 1, n * 2, ... n * 20 void for/dentro printf con resultados
*/

#include <stdio.h>

void tabla_mult(int n);

int main() {
    
    int n, i, count;
    printf("Ingrese un numero para multiplicar hasta el 20: ");scanf("%i", &n);
    tabla_mult(n);

    return 0;
}

void tabla_mult(int n) {
    int i, count;
    for(i=1; i<=20; i++) {
        count = n * i;
        printf("%i * %i = %i\n", n, i, count);
    }
}