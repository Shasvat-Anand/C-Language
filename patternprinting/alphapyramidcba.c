#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of line :");
    scanf("%d",&n);
    int nst=1;
    for (int i=1;i<=n;i++){int a=i-1;
        for(int j=1;j<=n-i;j++){
            printf(" ");
        } char ch=65;
        for (int k=1;k<=nst;k++){
            printf("%c",ch);
            ch++;
         }nst=nst+1;
         for (int q=1;q<=i-1;q++){
            char ch =(char)(a+64);
            printf("%c",ch);
            a--;
         }
         printf("\n");
    }
    return 0;
}