/*Realizar un programa que permita leer una cadena de caracteres y que devuelva el numero
de caracteres que tiene dicha cadena e imprimir dicha cadena al reves

cadena de caracteres = Arreglo de caracteres.
Devolver el numero de caracteres que contiene el arreglo.
Imprimir el arreglo de caracteres al reves

Ejemplo:

//Ingresar:
Alice
El arreglo contiene 5 caracteres.
El arreglo al reves es: ecilA
*/

#include <stdio.h>
#include <string.h>

const int TAM = 21;
void cadena_alreves(char a[], int tam);

int main(){
    //Declaracion de variables
    char text[TAM];
    int longitud=0;
    printf("Ingresa una cadena de caracteres: \n");fgets(text, TAM, stdin);
    //Funcion strlen = string leng (longitud de cadena)
    longitud = strlen(text);
    printf("La longitud de la cadena es: %i\n", longitud);
    //Llamamos a la funcion que escribirá nuestra cadena al reves
    cadena_alreves(text, longitud);
    return 0;
}
void cadena_alreves(char a[], int tam){
    int i;
    //Unicamente hacemos que escriba los caracteres de atras para adelante
    for(i=tam;i>=0;i--){
        printf("%c",a[i]);
    }
    printf("\n");
}

//Observaciones:
//El programa se come el caracter 20 si tengo un arreglo de 20, ya que el -1 sirve para eliminar el salto de linea
//Solucion propuesta: Hacer el arreglo de 21 caracteres en vez de 20