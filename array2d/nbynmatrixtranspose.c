#include<stdio.h>
int main (){
    int a;int b;
    printf("enter the row :");
    scanf("%d",&a );
     printf("enter the column:");
    scanf("%d",&b);
   int arr[a][b];
   printf("enter the element:\n");
    for (int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
   }
    printf("the matrix is :\n");
    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            printf("%d",arr[i][j]);
        }printf("\n");
    }
    printf("The Transpose of matrix is:\n");
    for(int i=0;i<b;i++){
        for (int j=i;j<b;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    for(int i=0;i<b;i++){
        for (int j=0;j<a;j++){
            printf("%d",arr[i][j]);
        }printf("\n");
    }
     return 0;
 }