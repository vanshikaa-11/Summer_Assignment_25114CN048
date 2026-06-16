#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter Array Size : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Array Elements : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Dublicate Elements : ");
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("%d",arr[i]);
                break;
            }
        }
    }
    return 0;
}