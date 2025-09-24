#include<stdio.h>
#include<limits.h>
int main (){
    int arr[2][3]={4,67,87,3,5,0};
    int min =INT_MAX;
    int ind =0,indx=0;
    for (int i=0;i<2;i++){
        for (int j=0;j<3;j++){
            if (arr[i][j]<min){
                min=arr[i][j];
                ind=i;
                indx=j;
            }
        }
    }
    printf("The minmum value is %d and index is (%d,%d)",min,ind,indx);
    return 0;
}