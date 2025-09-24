#include<stdio.h>
int main (){
    int x,y;
    printf("enter the coordinate:");
    scanf ("%d%d",&x,&y);
    if (x==0 && y==0){printf ("this lies on orgin.");}
    else if (y==0){printf ("it is lies on x axis .");}
    else if (x==0){printf("it is lies on y axis .");}
    else {printf ("it is not lies on x or y axis .");}
    return 0;

}