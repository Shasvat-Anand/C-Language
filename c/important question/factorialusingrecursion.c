#include<stdio.h>
int factorial(int n){{
    if (n==0 || n==1) return 1; }   
    return ((n)*factorial(n-1));
}
int main(){
    int n;
//     int fact=1;
    printf("enter the number :");
    scanf("%d",&n);
//     // for (int i=1;i<=5;i++){
//     //     fact=fact*i;
        
//     // }
//     // printf("%d",fact);
    int n1=factorial(n);
    printf("%d",n1);
    

    return 0;
}
// #include<stdio.h>
// int factorial(int x){
//     // int fact=1;
//     // int i=1;
//     // while(i<=x){
//     //     fact=fact*i;
//     //     i++;
//     // }
//     // printf("%d",fact);
// }
// int main(){
//     int num;
//     printf("enter");
//     scanf("%d",&num);
//     factorial(num);
//     //int fact=1;
//     // for (int i=1;i<=num;i++){
//     //     fact=fact*i;
//     // }
//     // int i=1;
//     // while(i<=num){
//     //     fact=fact*i;
//     //     i++;
//     // }
//     // printf("%d",fact);

// }
// #include<stdio.h>
// int main (){
//     int num;
//     do{
//         printf("enter the non negative number :");
//         scanf("%d",&num);
//         if (num<0){
//             printf("factorial is not possible for a non negative number :");
//         }
//         else{
//            long long fact=1;
//            int i=1;
//            while(i<=num){
//             fact=fact*i;
//             i++;}
        
//            printf("%d\n",fact);
        
//            printf("enter 1 to check another factorial,0 to terimiante the programe: ");
//            scanf("%d",&num);
//     }}
//     while(num!=0);
//     printf("programe is terminated:");

// }