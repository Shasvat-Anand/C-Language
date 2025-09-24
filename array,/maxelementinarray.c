#include<stdio.h>
#include<limits.h>
int main(){
    int arr[4]={-45,-56,-78,-89 };
    int max= INT_MIN;// AND ANOTHER WAY take max=arr[0];it will compare the remaining element;
    for (int i=0;i<4;i++){
        if (max<arr[i]){
            max=arr[i];
        }
        
    }
    printf("%d",max);
    return 0;
}