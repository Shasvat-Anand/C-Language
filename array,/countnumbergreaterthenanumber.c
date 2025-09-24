#include<stdio.h>
int main (){
    int arr[7]={70,67,4,60,8,43,56,};
    int x=34;
    int count=0;
    for (int i=0;i<7;i++){
        if (arr[i]>x){
            count++;
        }
        else;
    }
    printf("%d",count);
    return 0;
}