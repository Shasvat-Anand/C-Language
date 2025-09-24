#include<stdio.h>
int main (){
    int n;//itne baar loop chalega.
    printf("enter the number :");
    scanf("%d",&n);
    // 1 2 4 8 16....
    // we are going to use extra variable
    int a =1;
    for (int i=1;i<=n;i++)
    {printf("%d  ",a); (a=a*2);}
    return 0;
}