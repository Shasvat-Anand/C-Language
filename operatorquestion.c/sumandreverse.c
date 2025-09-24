#include <stdio.h>
int main (){
    int n;
    printf("enter the number ");
    scanf("%d",&n);
    int sum=0,rev=0, s1,ld;
    while(n>0){
        ld=n%10;
        sum=sum+ld;
        rev=rev*10;
        rev=rev+ld;
        s1=sum+rev;
        n=n/10;
    }
    printf("the sum and reverse of given numberis and sum of reverseis:sum=%d,reverse=%d,sumof reverse and sum=%d ",sum,rev,s1);
    return 0;
}