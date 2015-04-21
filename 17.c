#include <stdio.h>
#include <stdlib.h>

int cuadrado(int);

int main(){
    int n;
    printf("Introduce numero entero: ");
    scanf("%d",&n);
    printf("Cuadrado de %d= %d\n",n,cuadrado(n));
return 0;
}

int cuadrado(int n){
    if(n==1){
        return 1;
    }else{
        return cuadrado(n-1)+2*(n-1)+1;
    }
}
