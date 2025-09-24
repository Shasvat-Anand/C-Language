#include<stdio.h>
#include<string.h>
int main (){
    struct pokemon{
        int speed;
        int hp;
        int attact;
        char tier;

    } pikachu,mewtwo,charizard;///it is a type of declaration;
    /// it is another  type of declaration 
    struct pokemon pikachu;
    pikachu.hp=50;
    pikachu.speed=80;
    pikachu.attact=100;
    pikachu.tier='A';

    struct pokemon charizard;
    charizard.hp=80;
    charizard.speed=100;
    charizard.attact=80;
    charizard.tier='S';

    struct pokemon mewtwo;
    mewtwo.hp=90;
    mewtwo.attact=120;
    mewtwo.speed=90;
    mewtwo.tier='G';
    printf("%c\n",mewtwo.tier);
    printf("%d\n",charizard.attact);    
    printf("%d",pikachu.hp);
    return 0;

}