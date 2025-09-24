#include<stdio.h>
int main (){
    int n;
    printf("enter the size:");
    scanf("%d",&n);
    int arr[n];
    int product=1;
    for (int i=0;i<=n-1;i++){int a=1;
        printf("enter the number %d :",a+i);
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<=n-1;i++){
        product=product*arr[i];
    }
    printf("The product of the element of array is %d:",product);
    return 0;

}
