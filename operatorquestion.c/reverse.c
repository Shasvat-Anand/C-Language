#include <stdio.h>
int main (){
    int n;
    printf("enter the a number:");
    scanf("%d",&n);
     int r=0;
     while(n>0){
        r=r*10;
        int re=n%10;
        r=r+re;
        n=n/10;
     };
    printf("the reverse is %d",r);
    return 0;
}