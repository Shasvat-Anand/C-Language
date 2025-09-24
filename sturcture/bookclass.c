#include<stdio.h>
#include<string.h>
int main(){
    struct Book{
        int price;
        int noofpages;
        char name[45];
    }secretseven ,storyteller,youth;
     
     secretseven.price=900;
     secretseven.noofpages=180;
     strcpy(secretseven.name,"secret seven");

     storyteller.noofpages=120;
     storyteller.price=500;
     strcpy(storyteller.name,"storyteller");

     youth.price=200;
     youth.noofpages=90;
     strcpy(youth.name,"youth");

     printf("%s\n",secretseven.name);
     printf("%s\n",storyteller.name);
     printf("%s",youth.name);
    
     }