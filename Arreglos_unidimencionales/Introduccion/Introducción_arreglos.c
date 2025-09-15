//Introducción a los Arraglos
//Compiar un arreglo dentro de otro a través de una función 

#include <stdio.h>

void copia_arreglo(int a[], int b[], int tam);

int main() {
	int array1[5] = {1,2,3,4,5}; //Se declara el arreglo
    int array2[5]; // Como el arreglo anterior estaba inicializado acá abajo declaramos el segundo areeglo
    
    copia_arreglo(array1, array2, 5); //A la funcion hay que decirle qué elementos se va a jalar y el tamaño
    getchar(); //Ayuda a que el programa no se finalice al instante
    
	return 0;
}
//Creamos función con los parámetros de lo que va a obtener del main
void copia_arreglo(int a[], int b[], int tam){
	int i;
    
    //creamos un bucle para que b = array2 tome los valores de a = array1
    for(i=0;i<tam;i++){
    	b[i] = a[i];
    }
    //Utilizamos otro bucle para que se impriman los nuevos valores de b = arreglo 2
    for(i=0;i<tam;i++){
    printf("%i. %i\n", i+1, b[i]);
    }
}   