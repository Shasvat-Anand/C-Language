#include<stdio.h>
int main (){
    int n;
    printf("enter the no:");
    scanf("%d",&n);
    int count=0;
    while(n!=0){
     n=n/10;
        count++;
    }
    printf("There are %d digit in given number.",count);
    

    return 0;

}