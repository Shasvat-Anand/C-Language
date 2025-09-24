#include<stdio.h>
int main(){
int n;
printf("enter a number:  ");
scanf("%d",&n);
int a,b,c;
a=1;
b=1;
c=1;
for (int i=1;i<=n; i++){
    c=a+b;
    a=b;
    b=c;
    if (i==1){("\n the fib0nacci of %d term  is :%d",i,c);}
    else if(i==2){("\n the fib0nacci of %d term  is :%d",i,c);}
 else {printf ("\n the fib0nacci of %d term  is :%d",i,c);}
      
}return 0;}