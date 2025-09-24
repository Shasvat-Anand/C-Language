#include<stdio.h>
int main (){
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n-1];
    int sum2=n*(n+1)/2;
    for (int i=0;i<n-1;i++){int a=1;
        printf("enter the number %d:  ",a+i);
        scanf("%d",&arr[i]);
    }
    int sum =0;
    for (int i=0;i<n-1;i++){
        sum=sum+arr[i];
    }
    int num=sum2-sum;
    printf("The missing number is %d",num);
    return 0;
}