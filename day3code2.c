//print prime numbers in a range
#include<stdio.h>
int main(){
    int a,b,count;
    printf("Enter the range ");
    scanf("%d%d",&a,&b);
    for(a;a<=b;a++){
        count=0;
        for(int i=1;i<=a;i++){
            if(a%i==0){
                count++;
            }
        }
        if(count==2){
            printf("%d\n",a);
        }
    }
    return 0;
}