/*
Hacer una matriz de tipo entera de 2*2, llenarla de numeros y luego
copiar todo su contenido en otra matriz.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[2][2];
    int matriz2[2][2];
    int i, j;
    
    // Llenar la primera matriz.
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Ingresa el valor de matriz[%i][%i]: ", i+1, j+1);scanf("%i", &matriz[i][j]);
        }
    printf("\n");
    }
    
    system("clear"); //Limpiamos la pantalla para que se vea bonito. uwu
    
    //Copiamos la matriz y aprovechamos el mismo bucle para imprimir en pantalla.
    printf("\tMatriz 2\n");
    printf("\t=========\n\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            matriz2[i][j] = matriz[i][j]; //copia.
            printf("%i ", matriz2[i][j]); //imprime.
        }
    printf("\n");    
    }
    return 0;
}

//Observaciones:
//Podría mejorar legibilidad del codigo si hiciera un bucle para copiar la matriz
//y despues otro bucle para imprimir la matriz

/*
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            matriz2[i][j] = matriz[i][j];
        }
    printf("\n");    
    }
    
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%i ", matriz2[i][j]);
        }
    printf("\n");    
    }

*/