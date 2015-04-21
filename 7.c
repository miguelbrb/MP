#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int cifras(int,int);

int main(){
    int n;
    printf("Introduce un numero entero: ");
    scanf("%d",&n);
    printf("Numero: %d\nCifras: %d\n",n,cifras(n,1));
getch();
return 0;
}

int cifras(int n,int c){
    if(n<10){
        return c;
    }else{
        return cifras(n/10,c+1);
    }
}
