#include<stdio.h>
int main (){
   int num;
   printf("enter the number "); 
   scanf("%d",&num); 
   if(num>99 && num<1000){printf("This is three digit number.");}
    else { printf ("this is not a three digit number.");}
    return 0;}