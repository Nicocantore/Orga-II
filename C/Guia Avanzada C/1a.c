#include <stdio.h>

typedef struct {

char* nombre;
int vida;
double ataque;
double defensa;

} monstruo_t ;

monstruo_t monstros[] = {

{"Pepe",10,10,10},
{"Richard",15,15,15},
{"Juancito",20,20,20}

};
int main(){
int cantidad_monstros = sizeof(monstros) / sizeof(monstruo_t);

for(int i = 0; i < cantidad_monstros; i++){
    printf("(%d Monstro)\n Nombre:(%s) \n",i,monstros[i].nombre);
    printf(" Vida:(%d)\n",monstros[i].vida);
    printf(" Ataque:(%f)\n",monstros[i].ataque);
    printf(" Defensa:(%f)\n",monstros[i].defensa);
}
return 0;
}