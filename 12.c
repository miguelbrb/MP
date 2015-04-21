#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int iniVector(int*,int,int);
int Escalera(int*,int,int,int,int);
int main(){
    int N=3,v[N];
    printf("Numero de elementos del vector: ");
    do{ scanf("%d",&N); }while(N<1);
    iniVector(v,N,0);
    printf("Longitud escalera mas larga: %d\n",Escalera(v,N,0,1,1));
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

int Escalera(int *v,int N,int tam,int sec,int cont){
    if(tam==N-1){
        if(cont>sec){
            return cont;
        }else{
            return sec;
        }
    }else{
        if(v[tam]+1==v[tam+1]){
            return Escalera(v,N,tam+1,sec,cont+1);
        }else if(cont>sec){
            sec=cont;
            return Escalera(v,N,tam+1,sec,cont=1);
        }else{
            return Escalera(v,N,tam+1,sec,cont=1);
        }
    }
}
