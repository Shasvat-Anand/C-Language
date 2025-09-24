#include<stdio.h>
void palindrom(int arr[]){
    for (int i=0;i<7;i++){
        if (i<6-i && arr[i]==arr[6-i]){
            continue;
        }
        else if (i==(6-i)){
            printf("it is palindrom:");
            break;
        }
        else{printf("it is not a palindrom:");
        break;}
    }return;
}
int main (){
    int arr[7]={1,2,3,4,3,2,1};
    palindrom(arr);    
}