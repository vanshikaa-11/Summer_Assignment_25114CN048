#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the order : ");
    scanf("%d ",&n);
    int a[n][n];
    printf("Enter the Matrix : ");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d ", &a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
            sum += a[i][i];
    }
    printf("the diagonal sum = %d ",sum);
    return 0;
}