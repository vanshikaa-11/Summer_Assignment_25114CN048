#include<stdio.h>
int main(){
    int a[3][3],b[3][3],sum[3][3];
    int r,c;
    printf("Enter rows and columns : ");
    scanf("%d%d",&r,&c);
    printf("Enter first matrix : \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter second matrix : \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Sum Matrix : \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}