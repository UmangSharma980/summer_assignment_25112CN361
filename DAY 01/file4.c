#include<stdio.h>
int main(){
    int num,count=0;
    printf("enter no.");
    scanf("%d",&num);
    while(num!=0){
        count++;
        num=num/10;
    }
    printf("count=%d",count);
    return 0;
}