/*Voy a crear un juego de piedra papel o tijeras, con mi nivel actual*/

#include <stdio.h> //Libreria estandar
#include <time.h> //Libreria para numeros aleatorios
#include <stdlib.h> //Libreria para system("clear")

//Prototipos de funciones
void seleccion();
void piedra_fun();
void papel_fun();
void tijera_fun();

int main(){
    srand(time(NULL)); //Semilla para los numeros aleatorios
	seleccion(); //Menu principal del juego
	
	return 0;
}

void seleccion(){
	int opt;
    system("clear");
    printf("1.Piedra\n");
    printf("2.Papel\n");
    printf("3.Tijeras\n");
    printf("4.Finalizar\n\n");
    printf("Selecciona una opción: \n");scanf("%i", &opt); //Enumeramos las opciones y pedimos una al usuario.
    
    switch(opt){
    case 1: piedra_fun(); break;
    case 2: papel_fun(); break;
    case 3: tijera_fun(); break;
    } 
}
//Funciones de cada opción, el proceso es similar en las 3
void piedra_fun(){
	system("clear");
	int n; //Variable para el numero aleatorio 
    printf("\t¡Batalla!\n\n");
    printf("Seleccionaste piedra\n");
    n = (rand() % (3 - 1 +1))+1; //Generamos un numero aleatorio entre 1 y 3
    //Comparamos el numero aleatorio con la opcion del usuario, en este caso piedra(1)
    if(n == 2){
    	printf("Bot ha elegido papel\n\n"); //Si el numero es 2, el bot ha elegido papel 
        printf("\t¡Perdiste! \n");
        }
    else if(n == 3){
    	printf("Bot ha elegido tijeras\n\n"); //Si el numero es 3, el bot ha elegido tijeras
        printf("\t¡Ganaste! \n");
        }
    else{
    	printf("Bot ha elegido piedra\n\n"); //Si el numero es 1, el bot ha elegido piedra
    	printf("\t¡Empate! \n");
    }
   printf("\n============================\n");
   printf("Pulsa 'Enter' para continuar\n");
   getchar();getchar(); //Doble getchar para que espere a que el usuario pulse enter
   seleccion(); //Volvemos al menu principal
}

void papel_fun(){
	system("clear");
	int n;
    printf("\t¡Batalla!\n\n");
    printf("Seleccionaste papel\n");
    n = (rand() % (3 - 1 +1))+1;
    
    if(n == 1){
    	printf("Bot ha elegido piedra\n\n");
        printf("\t¡Ganaste! \n");
        }
    else if(n == 3){
    	printf("Bot ha elegido tijeras\n\n");
        printf("\t¡Perdiste! \n");
        }
    else{
    	printf("Bot ha elegido papel\n\n");
    	printf("\t¡Empate! \n");
    }
    printf("\n============================\n"); 
    printf("Pulsa 'Enter' para continuar\n");
    getchar();getchar();
    seleccion();
}

void tijera_fun(){
	system("clear");
	int n;
    printf("\t¡Batalla!\n\n");
    printf("Seleccionaste tijeras\n");
    n = (rand() % (3 - 1 +1))+1;
    
    if(n == 1){
    	printf("Bot ha elegido piedra\n\n");
        printf("\t¡Perdiste!\n");
        }
    else if(n == 3){
    	printf("Bot ha elegido papel\n\n");
        printf("\t¡Ganaste!\n");
        }
    else{
    	printf("Bot ha elegido tijeras\n\n");
    	printf("\t¡Empate!\n");
    }
    printf("\n============================\n");
    printf("Pulsa 'Enter' para continuar\n");
    getchar();getchar();
    seleccion();
}

//Observaciones:
//Siento que podría mejorar el codigo y hacerlo mas compacto ya que las 3 funciones son muy similares
//Podría hacer una sola función y pasarle como parametro la opción del usuario
//Y dentro de la función hacer las comparaciones correspondientes
//Pero por ahora lo dejo así. TWT