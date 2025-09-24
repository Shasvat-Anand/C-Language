#include<stdio.h>
int mazepath(int cr,int cc,int er,int ec){
    int downways=0;int rightways=0;
    if (cr==er && cc==ec) return 1;
    if (cr==er){
        rightways+=mazepath(cr,cc+1,er,ec);
    }
    if(cc==ec){
        downways+=mazepath(cr+1,cc,er,ec);
    }
    if (cr<er && cc<ec){
        downways+=mazepath(cr+1,cc,er,ec);
        rightways+=mazepath(cr,cc+1,er,ec);


    }
  int totalways= downways + rightways;
  return totalways;

}
int main (){
    int a,b;
    printf("enter the number of rows:");
    scanf("%d",&a);
    printf("Enter the number of column:");
    scanf("%d",&b);
    int mp=mazepath(1,1,a,b);
    printf("%d",mp);
    return 0;
}