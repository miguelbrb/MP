#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int devolver(char*);
int elevar(int,int);

int main(){
    int a,b;
    a=devolver("base");
    b=devolver("exponente");
    printf("%d^%d = %d",a,b,elevar(a,b));
getch();
return 0;
}

int devolver(char *c){
    int n;
    printf("Introduce %s: ",c);
    scanf("%d",&n);
    return n;
}

int elevar(int a,int b){
    if(b==1){
        return a;
    }else{
        return a * elevar(a,b-1);
    }
}
