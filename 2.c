#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int f_NF(int);
int f_LL(int);
int f_F(int,int);
int f_I(int);

int main(){
    int n;
    printf("Introduce un numero entero: ");
    scanf("%d",&n);
    printf("Resultado funcion_NF: %d\n",f_NF(n));
    printf("Resultado llamada: %d\n",f_LL(n));
    printf("Resultado funcion_I: %d\n",f_I(n));
getch();
return 0;
}

int f_NF(int n){
    if(n==0){
        return 0;
    }else{
        return n + f_NF(n-1);
    }
}

int f_LL(int n){
    return f_F(n,0);
}

int f_F(int n,int cont){
    if(n==0){
        return cont;
    }else{
        return f_F(n-1,cont=cont+n);
    }
}

int f_I(int n){
    int cont=0;
    while(n>0){
        cont=cont+n;
        n--;
    }
    return cont;
}

/*
b) hace una suma del 0 hasta el numero que introducimos.
c) funcion recursiva no final
d) pasarla a funcion final
e) pasarla a funcion iterativa
*/
