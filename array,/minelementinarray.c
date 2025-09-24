#include<stdio.h>
#include<limits.h>
int main (){
    int arr[6]={3,45,56,76,2,1};
    int min=INT_MAX;
    //int min=arr[0]; it is the another way of find the minimum element in the given array;
    for (int i=0;i<6;i++){
        if (min>arr[i]){
            min=arr[i];
        }
    }
    printf("%d",min);
    return 0;
}