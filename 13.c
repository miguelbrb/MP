#include <stdio.h>
#include <stdlib.h>

int iniVector(int*,int,int);
int mayoritario(int*,int,int,int,int,int);

int main(){
    int N=0, v[N];
    printf("Introduce numero de elementos: ");
    scanf("%d",&N);
    iniVector(v,N,0);
    mayoritario(v,N,1,v[0],0,1);
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

int mayoritario(int *v,int N,int tam,int may,int pos,int cont){
    if(tam<N){
        if(v[pos]==v[tam]){
            return mayoritario(v,N,tam+1,may,pos,cont+1);
        }else{
            return mayoritario(v,N,tam+1,may,pos,cont);
        }
    }else{
        if(cont>N/2){
            printf("Elemento mayoritario: %d\nPosicion: %d\n",may,pos+1);
            return 0;
        }else{
            if(pos<N){
                pos=pos+1; //Porque no puedo inicialiarzo dentro de la funcion¿?
                return mayoritario(v,N,pos+1,v[pos],pos,1);
            }else{
                printf("No hay elemento mayoritario\n");
                return 0;
            }
        }
    }
}
