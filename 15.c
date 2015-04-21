#include <stdio.h>
#include <stdlib.h>

int iniVector(int*,int,int);
int funcion(int*,int,int,int);

int main(){
    int N=0, v[N];
    printf("Introduce numero de elementos: ");
    scanf("%d",&N);
    iniVector(v,N,0);
    funcion(v,N,0,0);
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

int funcion(int *v,int N,int tam,int res){
    if(tam<=N/2-1){
        if(v[tam]==v[N-tam-1]){
            return funcion(v,N,tam+1,1);
        }else{
            return funcion(v,N,N/2+1,0);
        }
    }else{
        if(res==0){
            printf("No cumple\n");
        }else{
            printf("Cumple\n");
        }
    }
}
