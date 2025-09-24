#include<stdio.h>
int main(){
int n;
printf("enter a number:  ");
scanf("%d",&n);
//****for finding the nth term of fibonacci series
int a,b,c;
a=0;
b=1;
c=1;
for (int i=1;i<=n-2; i++){
    c=a+b;
    a=b;
    b=c;
} printf ("the fib0nacci %d term is :%d",n,c);
      
return 0;}

// **********for print n term of fib************
// int n1=0;
// int n2=1;
// int n3;
// for(int i=1;i<=n;i++){
//     if (i==1){
//      printf("%d is the %d term of fib. series\n",n1,i);}
//     else if(i==2){
//      printf("%d is the %d term of fib series\n",n2,i);}
//     else{
//      n3=n1+n2;
//      n1=n2;
//      n2=n3;
//      printf("%d is the %d term of fib series\n",n3,i);}


// }
// return 0;}
