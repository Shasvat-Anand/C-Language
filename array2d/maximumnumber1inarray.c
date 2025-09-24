//anand///
#include<stdio.h>
int main(){
    int arr[3][3]={1,1,1,0,0,0,1,0,0};
    int count=0;
    int sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==1){
                count++;
                if(count>sum){
                    sum=count;
                }
            }
        }count =0;
    }
    if (count>sum){
        printf("%d is the maximum one in the row: ",count );
    }
    else{printf("%d is the maximum one in the row:",sum);}
    return 0;
}