// #include<stdio.h>
// int main (){
//    char eq[70];
//    printf("enter the equation:");
//    scanf("%s",&eq);
//    printf("%s",eq);
//    int arr[40];
//    for (int i=0;i=="\0";i++){
//     arr[i]=eq[i];
//    }
//    printf("%d",arr[0]);

// }
#include<stdio.h>
#include<math.h>
int main(){
   int arr[6];
   int max ,min;
   int sum=0;
   int avg;
   for (int i=0;i<6;i++){
      printf("enter the %d number:",i+1);
      scanf("%d",&arr[i]);
   }
   for (int i=0;i<6;i++){
      printf("%d ",arr[i]);
   }
   max=min=arr[0];
   for (int i=0;i<6;i++){  
      sum=sum+arr[i];
      avg=sum/6;

         if (max<arr[i]){
             max=arr[i];
          }
         else if (arr[i]<min){
            min=arr[i];
         }
          
         
      }
   
   
   printf("\nthe max number is %d\n",max);
   printf("the min number is %d\n",min);
   printf("the total sum of the given number is %d\n",sum);
   printf("the avg of given number is %d",avg);
}