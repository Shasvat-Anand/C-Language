#include <stdio.h>
int main (){
    float len, brd, area, peri;
    printf("enter the length :");
    scanf("%f",&len);
    printf("enter the breadth:");
    scanf("%f",&brd);
    area=len*brd;
    peri=2*(len+brd);
    if(len,brd==4){printf("Area is equal to perimeter.");}
    if (area>peri){printf("Area is greater then perimeter.");}

    if(area<peri) {printf("perimeter is greater then area.");};
    return 0;
}