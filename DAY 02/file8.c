#include<stdio.h>
int main(){
    int n,rev=0,r,N;
    printf("enter a no.");
    scanf("%d",&n);
    N=n;
    while(n!=0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("reverse=%d",rev);
    if(N==rev){
        printf("No.is palindrome");
    }else{
        printf("No is not palindrome");
    }return 0;
}