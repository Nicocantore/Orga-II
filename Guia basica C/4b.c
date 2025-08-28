#include <stdio.h>
#include <stdint.h>

int main() {

    int8_t c = 100;
    int16_t s = -8712;
    int32_t i = 123456;
    int64_t l = 1234567890;

    printf("int8_t(%lu): %d \n", sizeof(c),c);            // %d para imprimir char -short %ld para imprimir un long
    printf("int16_t(%lu): %d \n", sizeof(s),s);
    printf("int32_t(%lu): %d \n", sizeof(i),i);
    printf("int64_t(%lu): %ld \n", sizeof(l),l);

return 0;
}