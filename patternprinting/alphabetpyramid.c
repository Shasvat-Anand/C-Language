#include<stdio.h>
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    int nst=1;
for (int i=1;i<=n;i++){ ;
    for (int j=1;j<=n-i;j++){
        printf(" ");
    }char ch=65;
   
    for (int k=1;k<=nst;k++){
        printf("%c",ch);
         ch++;}
        nst=nst+2;
    printf("\n");
}
    return 0;
}