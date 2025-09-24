#include<stdio.h>
#include<stdbool.h>
int main (){
    int arr[8]={1,3,4,5,6,7,8,9};
    int x=2;
    bool flag=false;
    int ind=0;
    for (int i=0;i<8;i++){
      if (arr[i]==x){  
        flag =true;
        ind=i;
        break;
      }
    }       
     if (flag==false){printf("it is not present:");}
     else {printf("%d is present in the array and its index is %d:",x,ind);}
    return 0;
}