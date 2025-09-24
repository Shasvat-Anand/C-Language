#include<stdio.h>
int main(){
    float a;
    printf("Enter a float value:");
    scanf("%f",&a);
    int b=a;
    float fp=a-b;
    printf("The Fricitional Part of %f is:%f",a,fp);
    return 0;
}