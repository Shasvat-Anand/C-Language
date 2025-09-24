#include<stdio.h>
#include<string.h>
int main ()
{
    struct mobile{
        int price;
        float size;
        int batback;
        char tier;

    } vivo,sumsung,oppo;
    
    printf("enter the size of vivo");
    scanf("%d",&vivo.size);
    printf("enter the price of vivo");
    scanf("%d",&vivo.price);
    printf("enter the batterybackup");
    scanf("%d",&vivo.batback);

printf("%d\n",vivo.batback);
printf("%d\n",vivo.price);
    return 0;
}