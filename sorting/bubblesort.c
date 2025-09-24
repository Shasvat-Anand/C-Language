#include<stdio.h>
#include<stdbool.h>
int main (){
    int n=5;
    int arr[5]={5,4,9,2,1};

    for (int i=0;i<n-1;i++){ //here number of pass is n-1 for n element  ;
    bool flag= true;
    
        for (int j=0;j<=n-2-i;j++){/// here number of swap per pass is given by n-2-i
        ///and j<=n-2 represent last element is swap upto n-2 places.
            if (arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            flag = false;
            }
        }
        if(flag==true) break;
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}