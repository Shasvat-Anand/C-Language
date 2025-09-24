// #include<stdio.h>
// int main (){
//     int m;
//     printf("enter the row of first matrix:");
//     scanf("%d",&m);
//     int n;
//     printf("enter the column of first matrix:");
//     scanf("%d",&n);
//     int p;
//     printf("enter the row of second matrix:");
//     scanf("%d",&p);
//     int q;
//     printf("enter the column of second matrix:");
//     scanf("%d",&q);
//     int arr[m][n];
//     int brr[p][q];
//     int res[m][q];
//     for (int i=0;i<m;i++){
//         for (int j=0;j<n;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for (int i=0;i<p;i++){
//         for (int j=0;j<q;j++){
//             scanf("%d",&brr[i][j]);
//         }
//     }
//     if (n!=p){printf("column of first is not equal to row of second:");}
//     else{
//         for (int i=0;i<m;i++){
//             for (int j=0;j<q;j++){
//                 res[i][j]=0;
//                 for (int k=0;k<n;k++){
//                     res[i][j]+=arr[i][k]*brr[k][j];
//                 }
//             }
//         }
    
//     printf("the resultant matrix:\n");
//     for(int i=0;i<m;i++){
//         for(int j=0;j<q;j++){
//             printf("%d ",res[i][j]);
//         }printf("\n");
//     } }
//     return 0;
// }
#include<stdio.h>
int main(){
    int m=2,n=2,p=2,q=2;
    int arr[m][n];
    int brr[p][q];
    int res[m][q];
    arr[2][2]=(1,2),(3,4);
    brr[2][2]=(1,2),(3,4);
    
        for (int i=0;i<m;i++){
            for (int j=0;j<q;j++){
                res[i][j]=0;
                for (int k=0;k<n;k++){
                    res[i][j]+=arr[i][k]*brr[k][j];
                }
            }
        }
       
    for (int i=0;i<m;i++){
        for (int j=0;j<q;j++){
            printf("%d  ",res[i][j]);
        }printf("\n");
    }

    return 0;
}