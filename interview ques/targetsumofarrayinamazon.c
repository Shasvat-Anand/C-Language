#include<stdio.h>
int main(){
  int arr[]={4,6,99,8,7,10,90,1};
  int tar=9;
  int x=7;
  printf(len(arr));

  //it for array in acesending order
  // int i=0;
  // int j=5;

  // for (int k=0;k<=5;k++){
  //   if (arr[i]+arr[j]<tar)
  //   {printf("%d %d\n",i,j);
  //      i++;}
  //   else if (arr[i]+arr[j]>tar){
  //     j--;
  //    }
  //   else{
  //     printf("&");
  //    printf("indexes of list %d %d",i,j);
  //     break; }

  for (int i=0;i<=x;i++){
    for (int j=i+1;j<=x;j++){
      if (arr[i]+arr[j]==tar){
        printf("The indixes of list who's sum is %d --- %d and %d",tar,i,j);
        break;
      }
    }
  }
  
  return 0;
}