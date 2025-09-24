#include<stdio.h>
int main(){
    int num;
    printf("enter a postive number.");
    scanf ("%d",&num);
    if(num%5==0){if(num%3==0)
        {printf("it is divisible by 5 and 3.");}
        else{printf ("the number is not divisible by 5 and 3");}}
    else{printf("its is not divisible by 5 and 3.");}
    
    return 0;}