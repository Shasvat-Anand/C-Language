#include<stdio.h>
int main (){
    int arr[5]={5,4,3,2,1};
    int n =5;
    for (int i=1;i<=n-1;i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
    printf("the inserted sort ");
    for (int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}