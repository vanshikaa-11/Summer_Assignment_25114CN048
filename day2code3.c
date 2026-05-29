#include<stdio.h>
int main(){
    int n;
    int product = 1;
    printf("Enter a number");
    scanf("%d",&n);
    while(n>0){
        product = product * (n%10);
        n=n/10;
    }
    printf("The product of digits of a number : %d",product);
}