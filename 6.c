#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float media(float,float,int);

int main(){
    printf("La media es: %.2f\n",media(0,0,0));
getch();
return 0;
}

float media(float n,float x,int c){
    scanf("%f",&n);
    if(n==0){
        return c/x;
    }else{
        return media(n,x+1,c=c+n);
    }
}
