#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int devolver(char*);
int conj(int,int,int);

int main(){ //Como ver cual es mas eficiente de los dos??
    int n,k;
    n=devolver("numero de personas");
    k=devolver("numero de personas por conjunto");
    printf("Conjunto/s total/es: %d\n",conj(n,k,0));
getch();
return 0;
}

int devolver(char *c){
    int x;
    printf("Introduce %s: ",c);
    scanf("%d",&x);
    return x;
}

int conj(int n, int k,int cont){
    if(n<k || k<1){
        printf("Error!\n");
        return cont;
    }else if(n==k){
        return cont+1;
    }else if(k==1){
        return cont+n;
    }else{
        return conj(n-1,k,cont=conj(n-1,k-1,cont));
    }
}
