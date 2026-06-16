#include<stdio.h>
int main(){
    int n,i,j=0;
    printf("Enter Array Size : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Array Elements : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i] != 0){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }
    printf("Array after moving zeroes to end : ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}