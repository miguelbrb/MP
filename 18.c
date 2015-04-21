#include <stdio.h>
#include <stdlib.h>

int iniVector(int*,int,int);
int func(int*,int,int);

int main(){
    int N=0, v[N];
    printf("Introduce numero de elementos: ");
    scanf("%d",&N);
    iniVector(v,N,0);
    printf("Suma de elementos: %d\n",func(v,N,0));
return 0;
}
int iniVector(int *v,int N,int tam){
    if(tam==N){
        return 0;
    }else{
        printf("%d: ",tam+1);
        scanf("%d",v+tam);
        iniVector(v,N,tam+1);
    }
}

int func(int *v,int N,int cont){
    if(cont>(N-3)){
        return 0;
    }else{
        if(v[cont]+v[cont+1]==v[cont+2]+v[cont+3]){
            return v[cont] + func(v,N,cont+1);
        }else{
            return func(v,N,cont+1);
        }
    }
}
