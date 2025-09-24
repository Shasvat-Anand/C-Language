#include<stdio.h>
int main(){
    int n;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){int a=1;
        printf("enter the number %d:",a+i);
        scanf("%d",&arr[i]);
    }
    int sumeven=0;
    int sumodd=0;
    for (int i=0;i<n;i++){
        if (i%2==0){
            sumeven=sumeven+arr[i];
        }
        else(sumodd=sumodd+arr[i]);
    }
    printf("%d+%d=%d",sumeven,sumodd,sumeven-sumodd);
    return 0;
}