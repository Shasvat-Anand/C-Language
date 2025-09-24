#include<stdio.h>
#include<stdbool.h>
int main (){
    int n=5;
    int arr[5]={1,2,3,4,5};
    for (int i=0;i<n-1;i++){
    bool flag= true;
        for (int j=0;j<=n-2-i;j++){
            if(arr[j+1]>arr[j]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                flag= false;

            }
             
        }
       if (flag== true) break; 

    }
    for (int i =0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;

}