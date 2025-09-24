#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int nst=n;
    int nsp=1;
    char ch =65;
    for (int f=1;f<=2*n+1;f++){printf("%c",ch);ch++; }printf("\n");
    for (int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=nst;j++){ char ch =(char)(a+64);
            printf("%c",ch);a++;
        }for (int k=1;k<=nsp;k++){printf(" ");a++;}
       
        for (int l=1;l<=nst;l++){char ch =(char)(a+64);printf("%c",ch); 
        a++;}nsp+=2;nst--;
        printf("\n");
    }
    return 0;
}