//program to find largest prime factor
#include<stdio.h>
int main(){
    int n,largest=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        if(n%i==0){
            int prime=1;
            for(int j=2;j<=i/2;j++){
                if(i%j==0){
                    prime=0;
                    break;
                }
            }
            if(prime){
                largest=i;
            }
        }
    }
        printf("Largest prime factor=%d",largest);
     return 0;
}