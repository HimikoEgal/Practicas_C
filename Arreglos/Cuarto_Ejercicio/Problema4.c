/*Realizar un programa que lea un arreglo el sexo de los N estudiantes del curso, y que determine
cuantos hombres y mujeres se encuentran en el grupo, suponiendo que los datos son extraidos alumno por alumno*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int i, num_alu, varon=0,mujer=0;
    char sex_alu[30];
    
    printf("Digite el numero de alumnos: ");scanf("%i", &num_alu);
    // Limpiar buffer después de scanf
    int c; while ((c = getchar()) != '\n' && c != EOF);
    
    for(i=1;i<=num_alu;i++){
        
        printf("\n%i.Digite el sexo del alumnx (masculino/femenino): ", i);fgets(sex_alu, 30, stdin);
        // eliminar salto de línea || strcspn = string complement span
        sex_alu[strcspn(sex_alu, "\n")] = 0; 
        //string compare == strcmp
        if(strcmp(sex_alu,"masculino") == 0){
            varon++;    
        }
        else if(strcmp(sex_alu,"femenino") == 0){
            mujer++;    
        }
    }
    //salimos del bucle
    printf("\nEl numero de alumnos masculinos es: %i", varon);
    printf("\nEl numero de alumnas femeninas es: %i\n", mujer);
    
    return 0;
}