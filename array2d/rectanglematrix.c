#include<stdio.h>
int main (){
    int n,m;
    printf("enter the row and column :");
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for(int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int L1,R1,L2,R2;
    printf("enter the (L1,R1)and (L2,R2):");
    scanf("%d%d %d%d",&L1,&L2,&R1,&R2);
    for (int i=L1;i<=L2;i++){
        for(int j=R1;j<=R2;j++){
            printf("%d ",arr[i][j]);
        }printf("\n");
    }
    return 0;
}