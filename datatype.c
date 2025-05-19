#include<stdio.h>

int main(){
    int a = 56;
    printf("%d",a); // 56

    int b = 4.5;
    printf("\n%d",b); /// 4

    //////// float///////
    float f1 = 45.59;
    printf("\n%d",f1); // garbage
    printf("\n%f",f1); // 45.590000

    float f2 = 34;
    printf("\n%f",f2);
    printf("\n%d",f2);
    
    ///////// char///////////
    char ch = 'A';
    printf("\n %c",ch); // A
    printf("\n %d",ch); // 65
    printf("\n %f",ch); //34.000000

    char ch2 = 'ABC';
    printf("\n %c",ch2); // C

    /////////// string //////////
    char str[] = "abc";
    printf("\n %s",str);  /// abc

    return 0;
}