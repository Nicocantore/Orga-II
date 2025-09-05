#include <stdio.h>

int main(){
    int n;
    printf("Eliga el numero que quiere hacer el factorial:");
    scanf("%d",&n);

    long res =factorial(n);
    printf("\n El factorial de tu numero es:%ld \n",res);
    return 0;
}
factorial( int n){
    if (n < 0){
        return 0;
    } 

    long res = 1;

    for(int i=1; i <= n; i++ ){
        res *= i; 
    }
    return res;
}