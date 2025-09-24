#include<stdio.h>
int main(){
    int arr[2][3]={ 2,3,488,9,6,7,};
    int max=0;
     int indx=0;
    int ind=0;
     for (int i=0;i<2;i++){ 
        for (int j=0;j<3;j++){
            if (arr[i][j]>max){
                max=arr[i][j];
                ind=i;
                indx=j;
           
                            

            }
        }
    }
    printf("value=%d and index=(%d,%d)",max,ind,indx);
    return 0;
}