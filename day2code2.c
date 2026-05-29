#include<stdio.h>
int main(){
    int n,d;
    int reverse = 0;
    printf(" Enter a number ");
    scanf("%d",&n);
    while(n>0){
        d = n%10;
        reverse = reverse * 10 + d;
        n = n/10;
    }
    printf(" The reverse of the number : %d", reverse);
    return 0;
}