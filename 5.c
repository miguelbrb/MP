#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float funcion(float);

int main(){
    float n;
    printf("Introduce numero entero: ");
    scanf("%f",&n);
    printf("Resultado: %.2f\n",funcion(n));
getch();
return 0;
}

float funcion(float n){
    if(n==1){
        return 1;
    }else{
        return (1/n)+funcion(n-1);
    }
}
