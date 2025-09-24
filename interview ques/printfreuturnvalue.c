//Here we have to print the hello string and then print the value of x from which the hello is store
//now here printf will print the stirng store in it and in c language printf reture the size of string store 
//in it and then it will store in x and then printf also print the value of x

#include<stdio.h>
int main(){
    int x=printf("hello");
    printf("%d\n",x);
    return 0;
}

//output is 
//hello
//5
