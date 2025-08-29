#include <stdio.h>

int main() {

 float f = 0.1;
 double d = 0.1;

 printf("El Float es (%lf) \n",f);
 printf("El Double es (%lf)\n",d);

 f = (int) f;
 d = (int) d;

 printf("El nuevo Float es (%lf) \n",f);
 printf("El nuevo Double es (%lf)\n",d);

    return 0;
}   