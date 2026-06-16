#include<stdio.h>
int main(){
    int n,i,key,count=0;
    printf("Enter Array Size : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Array Elements : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter element: ");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(arr[i]==key){
            count++;
        }
    }
    printf("Frequency of %d = %d",key,count);
    return 0;
}