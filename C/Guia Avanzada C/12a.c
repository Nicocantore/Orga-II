#include <stdio.h>
#include <stdlib.h>


typedef struct 
{
    char *nombre;
    int edad;
} persona_t;

persona_t* crearPersona(char *nick, int age ){

    persona_t *individuo = malloc(sizeof(persona_t));
    individuo->nombre = nick;
    individuo->edad = age   ;

    return individuo ;
}

int main(){
    
    char nom[] = "Juan" ;
    persona_t* persona = crearPersona(nom,25);

    printf("El nombre de la persona es %s y tiene %d anios\n",persona->nombre,persona->edad);
    free(persona);
    return 0;
}