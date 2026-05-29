#include<stdio.h>
int main(){
    int n,product=1,r;
    printf("enter no");
    while(n!=0){
        r=n%10;
        product=product*r;
        n=n/10;
    }printf("product=%d",product);
    return 0;
}