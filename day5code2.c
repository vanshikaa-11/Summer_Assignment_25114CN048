// program to check given number is a strong number or not.
#include<stdio.h>
int main(){
    int n,d,original;
    int factorial;
    int sum=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    original=n;
    while(n>0){
        factorial=1;
        d=n%10;
        for(int i=1;i<=d;i++){
            factorial=factorial*i;
        }
    sum=sum+factorial;
    n=n/10;
    }
    if(sum==original){
        printf("Strong Number");
    }
    else{
        printf("Not Strong Number");
    }
    return 0;
}