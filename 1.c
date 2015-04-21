#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void cuenta_atras(int);

int main(){
    int x;
    printf("Introduce numero para la cuenta atras: ");
    scanf("%d",&x);
    cuenta_atras(x);
getch();
return 0;
}

void cuenta_atras(int a){
    if(a==0){
        printf("CERO\n");
    }else{
        printf("%d ",a);
        cuenta_atras(a-1);
    }
}
