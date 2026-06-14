#include<stdio.h>
int palindrome(int num){
    int original = num;
    int reverse = 0,digit;
    while(num>0){
        digit=num%10;
        reverse=reverse*10+digit;
        num=num/10;
    }
    if(original==reverse)
    return 1;
    else 
    return 0;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(palindrome(n))
     printf("Palindrome Number");
     else 
     printf("Not a Palindrome Number");
     return 0;
}