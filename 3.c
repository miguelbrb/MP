#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int devolver(char*);
int MCD();

int main(){
    int a,b;
    printf("Maximo Comun Divisor.\n");
    a=devolver("primer");
    b=devolver("segundo");
    printf("mcd(%d,%d) = %d\n",a,b,MCD(a,b));
getch();
return 0;
}

int devolver(char *c){
    int n;
    printf("Introduce %s numero: ",c);
    scanf("%d",&n);
    return n;
}

int MCD(a,b){
    if(b==0){
        return a;
    }else{
        return MCD(b,a%b);
    }
}
