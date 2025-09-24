#include<stdio.h>
#include<limits.h>
int main (){
    int n,m;
    printf("enter the row and column:");
    scanf("%d %d",&n,&m);
    int arr[n][m];
    printf("enter the element:");
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    int s1=0;
    
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            sum=sum+arr[i][j];
            

            if (sum>s1){
            s1=sum;}}
            sum=0;
            
    }
     for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");}
   if (sum>s1)
   {
    printf("%d  is the maximum sum of row :",sum);}
   else
 {printf("%d is the maximum sum of row:",s1);}
    return 0;
}