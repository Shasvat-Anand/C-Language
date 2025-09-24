#include<stdio.h>
int main (){
    int bsalary;
    float gsalary;
    printf("enter the basic salary:");
    scanf("%d",&bsalary);
    if (bsalary<=12000){
        gsalary=bsalary + bsalary*15/100 + bsalary*70/100;
        printf("The gross salary of the person is %f",gsalary);

    }
    if (bsalary>12000 && bsalary<=22000){
        gsalary=bsalary + bsalary*25/100 + bsalary*80/100;
        printf("The gross salary of the person is %f",gsalary);
    }
    if (bsalary>=22001){
        gsalary=bsalary + bsalary*25/100 + bsalary*95/100;
        printf("The gross salary of the person is %f",gsalary);
    }
    return 0;
}