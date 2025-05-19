#include<stdio.h>

int main(){
    int a = 88;

    float  b = 566.5;
    printf("%d",a);
    printf("\n%3d",a); /// _44
    printf("\n%5.3d",a); /// __088


    printf("\n %f",b);
    printf("\n %15f",b);  // _____566.500000
    printf("\n %0.4f",b); //566.5000
    printf("\n %.4f",b);  //566.5000
    return 0;
}