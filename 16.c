#include <stdio.h>
#include <stdlib.h>

int iniVector(int*,int,int);
int funcion(int*,int,int,int,int,int);

int main(){
    int N=0, v[N];
    printf("Introduce numero de elementos: ");
    scanf("%d",&N);
    iniVector(v,N,0);
    printf("La suma de elementos: %d\n",funcion(v,N,0,0,0,0));
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

int funcion(int *v,int N,int tam,int j,int k,int res){
    if(tam<N){
        if(j<N){
            if(k==N){
                return funcion(v,N,tam,j+1,0,res);
            }else if(v[tam]*v[j]==v[k]){
                return funcion(v,N,tam,j+1,0,res+v[k]);
            }else{
                return funcion(v,N,tam,j,k+1,res);
            }
        }else{
            return funcion(v,N,tam+1,tam+1,0,res);
        }
    }else{
        return res;
    }
}
