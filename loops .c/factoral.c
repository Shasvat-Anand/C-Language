#include<stdio.h>
int main(){
int n;
printf("enter a number");
scanf("%d",&n);
int fac=1;
for (int i=1;i<=n; i++){
    fac=fac*i;
}
printf ("the fadctorial is :%d",fac);
return 0;}