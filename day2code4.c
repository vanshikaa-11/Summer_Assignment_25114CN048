#include<stdio.h>
int main(){
    int n,d;
    int original;
    int reverse=0;
    printf(" Enter a number ");
    scanf("%d",&n);
    original = n;
    while(n>0){
        d= n%10;
        reverse = reverse * 10 + d ;
        n = n/10;
     }
     if( original == reverse){
        printf("Palindrome no.");
     }
     else {
        printf(" Not a Palindrome no.");
     }
     return 0;

}