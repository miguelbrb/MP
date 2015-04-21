#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int iniVector(int*,int,int);
void parejas(int*,int,int,int,int,int,int,int);

int main(){
    int N=0, v[N];
    printf("Introduce numero de elementos: ");
    scanf("%d",&N);
    iniVector(v,N,0);
    parejas(v,N,0,0,0,0,0,0);
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

void parejas(int *v,int N,int tamJ,int tamK,int j,int k,int sumJ,int sumK){
    if(j<N){
        if(tamJ<=j){
                if(k<N){
                    sumK=sumK+v[k];
                    parejas(v,N,tamJ+1,tamK,j,k+1,sumJ+v[tamJ],sumK);
                }
        }else{
            if(k<N){
                sumK=sumK+v[k];
                parejas(v,N,tamJ,tamK,j,k+1,sumJ,sumK);
            }else{
                if(sumJ==sumK){
                    printf("Pareja (%d,%d)\n",j,tamK);
                    parejas(v,N,0,0,j+1,0,0,0);
                }else{
                    k=tamK+1;
                    parejas(v,N,0,tamK+1,j,k,0,0);
                }
            }
        }
    }
}
