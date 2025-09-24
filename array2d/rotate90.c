#include<stdio.h>
int main(){
    int n;
    printf("enter the row:");
    scanf("%d",&n);
    int m;
    printf("enter the column:");
    scanf("%d",&m);
    int arr[n][m];
    printf("enter the elements:\n");
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The matrix is:\n");
    for (int i=0;i<n;i++){
    for (int j=0;j<m;j++){
        printf("%d",arr[i][j]);
    }printf("\n");
    }
    for (int i=0;i<m;i++){
        for (int j=i;j<m;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    printf("The transpose is:\n");
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            printf("%d",arr[i][j]);
        }printf("\n");
    }
    //rotate//
    for (int i=0;i<n;i++){
        int j=0;
        int k=n-1;
        while (j<k){
        int temp=arr[i][j];
        arr[i][j]=arr[i][k];
        arr[i][k]= temp;
        j++;
        k--;}
        
        
    }
    printf("rotation:\n");
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d",arr[i][j]);
        }printf("\n");
    }
    return 0;

}