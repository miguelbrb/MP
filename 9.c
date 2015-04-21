#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void iniVector(int*,int,int);
int orden(int*,int,int);

int main(){
    int N=1,v[N];
    printf("Introduce numero de elementos del vector: ");
    scanf("%d",&N);
    iniVector(v,N,0);
    if(orden(v,N,0)==1){
        printf("Vector ordenado ascendentemente\n");
    }else{
        printf("Vector no ordenado ascendentemente\n");
    }
}

void iniVector(int *v,int N,int tam){
    if(tam==N){
        return 0;
    }else{
        printf("%d: ",tam+1);
        scanf("%d",v+tam);
        iniVector(v,N,tam+1);
    }
}

int orden(int *v,int N,int tam){
    if(tam==N-1){
        return 1;
    }else if(v[tam]<v[tam+1]){
        return orden(v,N,tam+1);
    }else{
        return 0;
    }
}
