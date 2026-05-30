// check whether given number is prime or not
#include<stdio.h>
int main(){
    int n;
    int count=0;
    printf(" Enter a number ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        printf("PRIME NO.");
    }
    else{
        printf("NOT PRIME NO.");
    }
    return 0;

}