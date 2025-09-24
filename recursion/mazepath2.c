#include<stdio.h>
int mazepath(int n,int m){
    int rightways=0; int downways=0;
    if(n==1 && m==1) return 1;
    if(n==1){rightways +=mazepath(n,m-1);}
    if(m==1){downways +=mazepath(n-1,m);}
    if(n>1 || m>1){ rightways +=mazepath(n,m-1);
        downways +=mazepath(n-1,m);}
    
    int totalways = rightways + downways;
    return totalways;
}
int main (){
    int n,m;
    printf("enter the number of rows:");
    scanf("%d",&n);
    printf("Enter the number of column:");
    scanf("%d",&m);
    int mp = mazepath(n,m);
    printf("%d",mp);
    return 0;
}