#include <stdio.h>
#include <stdint.h>

    int main(){
        int16_t arry[] = {1,2,3,4};
        size_t n = sizeof(arry) / sizeof(int16_t);

        int16_t arry2[n];

        for (int i = 0 ; i < n; i++){
            arry2[i] = arry[n-i-1];
            printf("(%hd) \n",arry2[i]);
        }
        
    

        return 0;
    }