#include<stdio.h>
int main (){
    int a;
    int b;
    int c;
     
     
     
    scanf("%d",&b);
    // printf ("enter the age of Ajay.");
    scanf("%d",&c);
     if(b<a && b<c){
        printf ("Shyam is the Youngest.");}
    else if (a<b && a<c){
        printf("Ram is the youngest.");}
    
    else if  (c<a && c<b){
        printf ("Ajay is the Youngest.");}
    else {printf("*****\n*****\n*****");}
    return 0;
}