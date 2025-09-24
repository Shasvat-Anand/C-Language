// #include<stdio.h>
// int power(int b,int p){if(p==0) return 1;
//     return b*power(b,p-1);
// }
// int main (){
//     int b,p;
//     printf("Enter the base:");
//     scanf("%d",&b);
//     printf("enter the power:");
//     scanf("%d",&p);
//     int po=power(b,p);
//     printf("%d",po);
//     return 0;
// }

// power by loop
#include<stdio.h>
#include<math.h>
int main (){int n;
    printf("enter the number ");
    scanf("%d",&n);
    
    int po=pow(2,n);
    printf("%d",po);
    return 0;
}