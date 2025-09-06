#include <stdio.h>

typedef struct {

char* nombre;
int vida;
double ataque;
double defensa;

} monstruo_t ;

monstruo_t evolution(monstruo_t monstrito) {
 monstruo_t monstruote = monstrito;
 monstruote.defensa += 10;
 monstruote.ataque += 10;

 return monstruote;
}

int main(){

monstruo_t chiquito= { "Pepe", 100, 20, 30};
printf("Stats:\n defensa:(%f)\n ataque:(%f)\n",chiquito.defensa,chiquito.ataque);
chiquito = evolution(chiquito);
printf("NewStats:\n defensa:(%f)\n ataque:(%f)\n",chiquito.defensa,chiquito.ataque);

return 0;
}
