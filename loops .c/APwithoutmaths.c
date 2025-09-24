#include<stdio.h>
int main (){
    int n;//itne baar loop chalega.
    printf("enter the number :");
    scanf("%d",&n);
    //4 7 10....n term 
    // we are going to use extra variable
    int a =4;
    for (int i=1;i<=n;i++)
    {printf("%d  ",a); (a=a+3);}
    return 0;
}