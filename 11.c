#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int devolver(char*,int*);
int iniVector(int*,int,int);
int Escalar(int*,int*,int,int);

int main(){
    int N=3,M=3,v[N],b[M];
    N=devolver("primer",v);
    M=devolver("segundo",b);

    printf("Producto escalar: %d\n",Escalar(v,b,N,0));
getch();
return 0;
}

int devolver(char *c,int *w){
    int x;
    printf("Numero de elementos de %s vector: ",c);
    scanf("%d",&x);
    iniVector(w,x,0);
    return x;
}

int iniVector(int *w,int x,int tam){
    if(tam==x){
        return 0;
    }else{
        printf("%d: ",tam+1);
        scanf("%d",w+tam);
        iniVector(w,x,tam+1);
    }
}

int Escalar(int *v,int *b,int N,int tam){
    if(tam==N){
        return 0;
    }else{
        return v[tam] * b[tam] + Escalar(v,b,N,tam+1);
    }
}
