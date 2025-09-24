// #include<stdio.h>
// int main(){
//     float unit;
//     float totalbill;
//     printf("enter the unit of electricity:");
//     scanf("%f",&unit);
//     if (unit<=60){
//         float bill=(unit*0.60);
//         totalbill=bill;
//     printf("the total bill including the surcharge is  %f",totalbill);}
//     if (unit>60 && unit<=110){
//         float bill=(unit*0.85);
//         totalbill=bill;
//     printf("the total bill including the surcharge is  %f",totalbill);

//     }
//     if (unit>110 && unit<=200){
//         float bill=(unit*1.25);
//         totalbill=bill;
//     printf("the total bill including the surcharge is  %f",totalbill);
//     }
//     if(unit>200 || unit>250){
//         float bill=(unit*1.75);
//         totalbill=bill+bill*25/100;
//     printf("the total bill including the surcharge is  %f",totalbill);
//     }
    

//     return 0;
// }
#include <iostream>
#include <vector>

int main() {
    int n;

    std::cout << "Enter the size of array: ";
    std::cin >> n;

    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Enter the " << i + 1 << " number: ";
        std::cin >> arr[i];
    }

    int tar = 9;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == tar) {
                std::cout << "[" << i << "," << j << "]";
            }
        }
    }

    return 0;
}
