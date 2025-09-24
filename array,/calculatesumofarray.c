#include<stdio.h>
int main (){
    int a;
    printf("enter the size of the array:");
    scanf("%d",&a);
    int arr[a];
    int sum=0;
    for (int i=0;i<=a-1;i++){int n=1;
        printf("enter the number %d:",n+i);
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<=a-1;i++){int n=1;        
        sum=sum+arr[i]; }
    printf(" The sum of the element of array is %d:",sum);
    

    return 0;
}