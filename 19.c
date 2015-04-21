#include <stdio.h>
#include <stdlib.h>

void binario(int);

int main(){
    int n;
    printf("Introduce numero entero: ");
    scanf("%d",&n);
    binario(n);
return 0;
}

void binario(int n){
    if(n==1){
        printf("1");
    }else{
        binario(n/2);
        printf("%d",n%2);
    }
}
