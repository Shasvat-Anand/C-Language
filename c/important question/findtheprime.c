#include<stdio.h>
// int prime (int x){
//     int s=0;
//     for (int i=1;i<=x;i++){
//         if (x%i==0){
//             s=s+1;
//             continue;
//         }

//     }
//     if (s==2){
//         printf("prime");
//     }
//     else{
//         printf("composite");
//     }
// }
//     for (int i=1;i<=x;i++){
//         if (x%i==0){
//             s=s+1;

//         }
//     }
//     if(s==2){
//         printf("prime");
//     }
//     else{
//         printf("composite");
//     }}
// int main(){
//     int a;
//     printf("enter the number:");
//     scanf("%d",&a);
//     prime(a);
   
    
// }
// #include<stdio.h>
// int main(){
//     int num;
//     printf("enter the number:");
//     scanf("%d",&num);
//     int count=0;
//     for (int i =2;i<=num;i++){
//         if(num%i==0){
//             count =count +1;
//         }
//         else
//           continue;
//     }
//     if (count==1){
//         printf("prime");
//     }
//     else{
//         printf("composite");
//     }
//     return 0;
// }
// #include<stdio.h>
// int prime(int x){
//     int count=0;
//     for (int i =2;i<=x;i++){
//         if(x%i==0){
//             count =count +1;
//         }
//         else
//           continue;
//     }
//     if (count==1){
//         printf("prime");
//     }
//     else{
//         printf("composite");
//     }
    
// }
// int main(){
//     int num=57;
//     prime(num);
//     return 0;

// }
// #include<stdio.h>
// int sum(int n,int m){
//     int c=n+m;
//     return c;
// }
// int main(){
//     int num=8;
//     int num1=9;
//     int s=sum(num,num1);
//     printf("%d",s);
//     return 0;
// }
#include<stdio.h>
int main (){
    int num=5;
    do{
        int fact=1;
        int i=1;
        while(i<=num){
            fact=fact*i;
            i++;}
        
        printf("%d\n",fact);
        
        printf("enter 1 to check another factorial,0 to terimiante the programe: ");
        scanf("%d",&num);
    }
    while(num!=0);
    printf("programe is terminated:");

}