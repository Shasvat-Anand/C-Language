#include<stdio.h>
void fun (int arr[]){
    arr[0]=9;
    return;
}
int main(){
    int arr[3]={2,4,6,};
    printf("%d\n",arr[0]);
    fun(arr);
    printf("%d",arr[0]);
    return 0;
}