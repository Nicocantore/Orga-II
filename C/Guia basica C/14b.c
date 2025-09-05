#include <stdio.h>
#include <stdint.h>

int16_t i = 0;

void printer(){
    int16_t i = 1;
    printf("El valor de i en el scope de f es:(%hd) \n",i);
}

int main(){
    printer();
    printf("El valor de i global es :(%hd) \n",i);
}