//PIEDRA PAPEL TIJERAS | Linux Edition
#include <stdio.h> //Libreria estandar
#include <time.h> //Libreria para numeros aleatorios
#include <stdlib.h> //Libreria para system("clear")

//Prototipos de funciones
void main_menu(float win, float lose, float draw);
void piedra_fun(float win, float lose, float draw);
void papel_fun(float win, float lose, float draw);
void tijera_fun(float win, float lose, float draw);
//Funcion principal
int main(){
 float win = 0, lose = 0, draw = 0; 
    srand(time(NULL)); //Semilla para los numeros aleatorios
 main_menu(win, lose, draw); //Menu principal del juego
 return 0;
}
//Menu principal
void main_menu(float win, float lose, float draw){
 int opt;
    float promedio;
    do{
    system("clear");
    if(win == 0 && lose == 0 && draw == 0){
        promedio = 0;
    }
    else{
        promedio = (win / (win + lose + draw)) * 100;
    }
    printf("Promedio victorias: %.2f\n",promedio);
    printf("victorias: %.0f| derrotas: %.0f | empate: %0.f\n\n", win, lose, draw);
    printf("1.Piedra\n");
    printf("2.Papel\n");
    printf("3.Tijeras\n");
    printf("4.Finalizar\n\n");
    printf("Selecciona una opción: \n");scanf("%i", &opt); //Enumeramos las opciones y pedimos una al usuario.
    
    switch(opt){
    case 1: piedra_fun(win, lose, draw); break;
    case 2: papel_fun(win, lose, draw); break;
    case 3: tijera_fun(win, lose, draw); break;
    default: printf("Seleccione una opcion valida, enter para continuar..."); getchar();getchar();
    } 
    }while(opt != 4);
}
//Funciones de cada opción, el proceso es similar en las 3
void piedra_fun(float win, float lose, float draw){
 system("clear");
 int n; //Variable para el numero aleatorio 
    printf("\t¡Batalla!\n\n");
    printf("Seleccionaste piedra\n");
    n = (rand() % (3 - 1 +1))+1; //Generamos un numero aleatorio entre 1 y 3
    //Comparamos el numero aleatorio con la opcion del usuario, en este caso piedra(1)
    if(n == 2){
     printf("Bot ha elegido papel\n\n"); //Si el numero es 2, el bot ha elegido papel 
        printf("\t¡Perdiste! \n");
        lose++;
        }
    else if(n == 3){
     printf("Bot ha elegido tijeras\n\n"); //Si el numero es 3, el bot ha elegido tijeras
        printf("\t¡Ganaste! \n");
        win++;
        }
    else{
     printf("Bot ha elegido piedra\n\n"); //Si el numero es 1, el bot ha elegido piedra
     printf("\t¡Empate! \n");
        draw++;
    }
   printf("\n============================\n");
   printf("Pulsa 'Enter' para continuar\n");
   getchar();getchar(); //Doble getchar para que espere a que el usuario pulse enter
   main_menu(win, lose, draw); //Volvemos al menu principal
}

void papel_fun(float win, float lose, float draw){
 system("clear");
 int n;
    printf("\t¡Batalla!\n\n");
    printf("Seleccionaste papel\n");
    n = (rand() % (3 - 1 +1))+1;
    
    if(n == 1){
     printf("Bot ha elegido piedra\n\n");
        printf("\t¡Ganaste! \n");
        win++;
        }
    else if(n == 3){
     printf("Bot ha elegido tijeras\n\n");
        printf("\t¡Perdiste! \n");
        lose++;
        }
    else{
     printf("Bot ha elegido papel\n\n");
     printf("\t¡Empate! \n");
        draw++;
    }
    printf("\n============================\n"); 
    printf("Pulsa 'Enter' para continuar\n");
    getchar();getchar();
    main_menu(win, lose, draw);
}

void tijera_fun(float win, float lose, float draw){
 system("clear");
 int n;
    printf("\t¡Batalla!\n\n");
    printf("Seleccionaste tijeras\n");
    n = (rand() % (3 - 1 +1))+1;
    
    if(n == 1){
     printf("Bot ha elegido piedra\n\n");
        printf("\t¡Perdiste!\n");
        lose++;
        }
    else if(n == 3){
     printf("Bot ha elegido papel\n\n");
        printf("\t¡Ganaste!\n");
        win++;
        }
    else{
     printf("Bot ha elegido tijeras\n\n");
     printf("\t¡Empate!\n");
        draw++;
    }
    printf("\n============================\n");
    printf("Pulsa 'Enter' para continuar\n");
    getchar();getchar();
    main_menu(win, lose, draw);
}