/*Crear un programa que tenga un array de 100 numeros aleatorios entre 1 y 1000. 
Una vez creado organizarlo de tal forma que almacene los numeros pares en
un array y los impares en otro*/

#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int main(){

    //Declaracion de arreglos y variables
	int array_t[99];
    int array_par[99] = {0};
    int array_impar[99] = {0}; 
    int n, min=1, max=1000; 
    int i, cp=0, ci=0; 

    srand(time(NULL)); //Inicializa el generador de numeros aleatorios
    printf("Arreglo Total\n");
    printf("================\n");
    //Llenado del arreglo y separacion de pares e impares
    for(i=0;i<=99;i++){
    n = (rand() % (max - min + 1)) + min;
    array_t[i] = n;
       
       //Condicional para separar pares e impares
       if(n%2 == 0){
   	   array_par[cp] = n;
       cp++;
       } 
       else{
       array_impar[ci] = n;
       ci++;
       } 
    //Impresion del arreglo total   
    printf("%i. %i\n", i+1, array_t[i]);
    }   
    //Impresion de arreglos pares e impares
    printf("\nArreglo de pares\n");
    printf("================\n");
    for(i=0;i<cp;i++){
    printf("%i. %i\n", i+1, array_par[i]);
    }
    printf("\nArreglo de impares\n");
    printf("================\n");
    for(i=0;i<ci;i++){
    printf("%i. %i\n", i+1, array_impar[i]);
    }
    
	return 0;
}

//Observaciones: 
//Se inicializan los arreglos de pares e impares en 0 para evitar basura
//Se utilizan contadores unicos para llevar el control de la cantidad de numeros pares e impares
//Si solo se usa un contador para todos los arreglos, se corre el riesgo de que se impriman valores basura
