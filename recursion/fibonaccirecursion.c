#include<stdio.h>
int fibonnaci(int n){{if (n==1 || n==2) return 1;}
    return ( fibonnaci(n-1) + fibonnaci(n-2));
}
int main (){
    int n;
    printf("enter the number of term:");
    scanf("%d",&n);
    int fibo=fibonnaci(n);
    printf("%d",fibo);
    return 0;
}