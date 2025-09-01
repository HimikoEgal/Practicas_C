//El repetir el mismo programa pero con funciones que regresen un valor

#include <stdio.h>
#include <stdlib.h>

float fahrenheit_conv(float C);
float kelvin_conv(float C);

int main(){
    float C, F=0, K=0;
    int opc;

    do{
        system("clear"); //limpiamos pantalla por si no es la primera vez que llegamos al menu
        printf("\n\tCONVERSOR DE TEMPERATURA");
        printf("\n\t======================");
        printf("\nDigite la temperatura en Celsius: ");scanf("%f", &C);
    
        system("clear");//Limpiamos nuevamente para dar paso a la pantalla anterior
        printf("\n1.Convertir a Fahrenheit");
        printf("\n2.Convertir a Kelvin");
        printf("Seleccione una opcion: ");scanf("%i", &opc);

        switch (opc){
        case 1: 
        F = fahrenheit_conv(C);
        printf("El valor en fahrenheit es de: %.2f", F);break;
        case 2: 
        K = kelvin_conv(C);
        printf("El valor en kelvin es de: %.2f", K);break;
        }
    }
    while(opc != 3);
    
    return 0;
}

float fahrenheit_conv(float C){
    float F=0;
    F = (9*C)/5 + 32;
    return F;
}

float kelvin_conv(float C){
    float K;
    K = C + 273.15;
    return K;
}