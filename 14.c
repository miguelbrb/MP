#include <stdio.h>
#include <stdlib.h>

int iniVector(int*,int,int);
int suma(int*,int,int,int );

int main(){
    int N=0, v[N];
    printf("Introduce numero de elementos: ");
    scanf("%d",&N);
    iniVector(v,N,0);
    printf("Suma de elementos: %d\n",suma(v,N,0,0));
return 0;
}

int iniVector(int *v,int N, int tam){
	if(tam==N){
		return 0;
	}else{
		printf("%d:  ",tam+1);
		scanf("%d",v+tam);
		return iniVector(v,N,tam+1);
	}
}

int suma(int *v,int N, int tam,int res){
	if(tam>N/2-1){
		return res;
	}else{
		if(v[tam]>v[tam*2]&&v[tam]>v[tam*2+1]){
				return suma(v,N,tam+1,res+v[tam]);
		}else{
			return suma(v,N,tam+1,res+v[tam]);
		}
	}
}
