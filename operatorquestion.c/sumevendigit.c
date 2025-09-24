#include<stdio.h>
int main(){
    int n,sum,ld,even;
    printf("Enter the number :");
    scanf("%d",&n);
    sum=0;
    while(n!=0){
        ld=n%10;
        n=n/10;
         if (ld%2==0){
        sum=sum+ld;
        }
        else if(sum==0){printf("there is no even digit in the given number.");}
        break;
    
    }
    printf("the sum of even digit in given no.is %d",sum);
    return 0;

}