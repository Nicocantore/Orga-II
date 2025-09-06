#include <stdio.h>

void intomays(char *palabra){

    for(int i = 0; palabra[i] != '\0';i++){

        if (palabra[i] >= 'a' && palabra[i] <= 'z'){
         palabra[i] = palabra[i] + 'A' - 'a';
         }
    }    
}

int main(){
    char palabra[] = "Te voy a gritar";
    intomays(palabra);
    printf("%s\n",palabra);
    return 0;
}