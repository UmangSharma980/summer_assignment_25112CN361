#include<stdio.h>
int main(){
    int n,mul=0,i=1;
    printf("enter a number");
    scanf("%d",&n);
    while(i<=10){
        mul=n*i;
        printf("%d%d=%d",n,i,mul);
        i++;
    }return 0;
}