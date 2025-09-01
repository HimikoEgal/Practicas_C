/*
Hacer un programa que pida por pantalla una temperatura en Celsius, muetre un menu para
convertirlos a Fahrenheit o Kelvin y muestre el equivalente por pantalla, utilizar funciones.

    a) Celsius a Fahrenheit: F = (9*C)/5 + 32
    b) Celsius a Kelvin: K = C + 273.15
*/

#include <stdio.h>
#include <stdlib.h>

//Declaracion de funciones
void menu();
void cel_to_fah();
void cel_to_kel();

int main(){
    
    menu();
    
    return 0;
}

//funcion del menu principal del programa
void menu(){
    
    int n;
    
    system("clear"); //limpiamos pantalla por si no es la primera vez que entramos a menu()
    printf("\t1.Celsius a Fahrenheit\n");
    printf("\t2.Celsius a Kelvin\n");
    printf("\t3.Salir\n");
    printf("\t========================\n");
    do{
        printf("\nSeleccione una opcion: ");scanf("%i", &n);
    }
    while (n < 1 || n > 3);
    
    switch(n){
        case 1:cel_to_fah();break;
        case 2:cel_to_kel();break;
    }
    
}

//funcion que transforma de Celsius a Fahrenheit
void cel_to_fah(){
    
    float c, f=0;
    char opc;
    
    system("clear"); //limpiamos pantalla para que se vea limpio el programa
    printf("\tCelsius a Fahrenheit\n");
    printf("\t=====================\n");
    printf("\nIngrese la temperatura: \n");scanf("%f", &c);
    
    f = (9*c)/5 + 32;
    
    system("clear");
    printf("\n\t%.2f en grados Celsius es igual a %.2f Fahrenheit\n", c, f);
    printf("\nDesea realizar otra operacion [S/N]: ");scanf(" %c", &opc);
    if(opc == 's' || opc == 'S'){
        menu();
    }
}

//funcion que transforma Celsius a Kelvin
void cel_to_kel(){
    
    float c, k=0;
    char opc;
    
    system("clear");
    printf("\tCelsius a Kelvin\n");
    printf("\t=====================\n");
    printf("\nIngrese la temperatura: \n");scanf("%f", &c);
    
    k = c + 273.15;
    
    system("clear");
    printf("\n\t%.2f en grados Celsius es igual a %.2f kelvin\n", c, k);
    printf("\nDesea realizar otra operacion [S/N]: ");scanf(" %c", &opc);
    if(opc == 's' || opc == 'S'){
        menu();
    }
    
}