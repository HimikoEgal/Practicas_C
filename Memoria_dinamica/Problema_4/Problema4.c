/****************************************************************************
Pedir al usuario el numero de elementos para un array de numeros enteros,
comprobar con malloc si hay memoria suficiente (si el puntero es diferente de NULL),
si hay memoria rellenar ese array con numeros aleatorios, si no la hay decir que
hay un error en la asignacion de memoria.
****************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, n, *p_n;
    
    printf("Ingrese valor de n: \n");scanf("%i", &n); //Pedir n numeros
    p_n = malloc(n * sizeof(int)); //Reservar el tamaño de n en p_n con malloc
    srand(time(NULL));
    if (p_n == NULL){
        printf("Error en asignar memoria.");
        return -1;
    }
    else{
        for(i=0;i<n;i++){
            p_n[i]= (rand() % 100 - 1 +1) + 1;
            printf("%i.-%i\n", i + 1, p_n[i]);
        }
    }
	return 0;
}

