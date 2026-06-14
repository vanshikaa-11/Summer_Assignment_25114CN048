#include<stdio.h>
int armstrong(int num){
    int original=num,sum=0,digit;
    while(num>0){
        digit=num%10;
        sum = sum + digit*digit*digit;
        num /= 10;
    }
    return (sum==original);
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(armstrong(n))
    printf("Armstrong Number");
    else
    printf("Not an Armstrong Number");
    return 0;
}