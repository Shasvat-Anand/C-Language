#include<stdio.h>
int main(){
    int marks[10]={45,7,80,85,46,67,89,50,35,30};
    
    for (int i=0;i<10;i++){
        if (marks[i] < 35){
            printf(" marks is %d  and roll number is",marks[i]);
            printf(" %d\n",i);

        }
    }
    return 0;

}