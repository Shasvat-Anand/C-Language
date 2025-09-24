#include<stdio.h>
int main(){
    int num;
    printf("enter a postive number.");
    scanf ("%d",&num);
    int d5=num%5;
    int d3=num%3;
    if(d5==0 || d3==0){printf("it is divisible by 5 or 3.");}
    else{printf("its is not divisible by 5 or 3.");}
    
    return 0;}