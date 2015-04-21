#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int iniVector(int*,int,int);
int maxmin(int*,int,int,int*,int*);

int main(){
    int N=3,v[N];
    printf("Numero de elementos del vector: ");
    scanf("%d",&N);
    iniVector(v,N,0);
    int max=v[0],min=v[0];
    if(N==0){
        printf("Minimo debe haber 1 elemento en el vector\n");
    }else{
        maxmin(v,N,1,&max,&min);
        printf("Maximo: %d\nMinimo: %d\n",max,min);
    }
getch();
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

int maxmin(int *v,int N,int tam,int *max,int *min){
    if(tam==N){
        return 0;
    }else{
        if(*max<v[tam]){
            *max=v[tam];
        }
        if(*min>v[tam]){
            *min=v[tam];
        }
        return maxmin(v,N,tam+1,max,min);
    }
}
