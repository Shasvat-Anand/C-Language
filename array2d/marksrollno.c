#include<stdio.h>
int main(){
    int arr[5][2]={46,79,45,90,44,78,43,23,42,45 };
    
    for (int i=0;i<5;i++)  {
        for(int j=0;j<2;j++){
            printf("%d ",arr[i][j]);
        }printf("\n");
    }
    return 0;
}