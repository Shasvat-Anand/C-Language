#include<stdio.h>
int main(){
    int arr[5]={4,6,5,5,4};
    for (int i=0;i<5;i++){
        for (int j=i+1;j<5;j++){
            if (arr[i]==arr[j])
        {
            printf("%d has a duplicate\n",arr[i]);
            break;
        }
        }
    }
    return 0;
}