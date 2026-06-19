#include<stdio.h>
int main(){
    int n;
    printf("Enter size : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int maxfreq=0,element;
    for(int i=0;i<n;i++){
        int count = 1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
            if(count>maxfreq){
                maxfreq=count;
                element=arr[i];
            }
        }
        printf("Element with Maximum Frequency = %d",element);
        return 0;
    }
}