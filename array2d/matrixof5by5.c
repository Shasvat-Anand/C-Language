#include<stdio.h>
int main (){
    int arr[5][5];
    printf("enter the number which is only 10 in each indices:");
    for (int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        scanf("%d",&arr[i][j]);
    }
    }
    for (int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            printf("%d ",arr[i][j]);
        }printf("\n");
    }
    return 0;
}