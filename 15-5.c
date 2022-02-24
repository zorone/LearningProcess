#include <stdio.h>
#include <string.h>

struct int_4
{
    unsigned int num1 : 4;
    unsigned int num2 : 4;
};


int main(){

    int_4 n1, n2, n3, n4, n5;

    n1.num1 = 0;
    n1.num2 = 0;
    n2.num1 = 0;
    n2.num2 = 0;
    n3.num1 = 0;
    n3.num2 = 0;
    n4.num1 = 0;
    n4.num2 = 0;
    n5.num1 = 0;
    n5.num2 = 0;

    while(n1.num1 < 10){
        n1.num1 += 1;
        n1.num2 += 2;
        n2.num1 += 3;
        n2.num2 += 4;
        n3.num1 += 5;
        n3.num2 += 6;
        n4.num1 += 7;
        n4.num2 += 8;
        n5.num1 += 9;
        n5.num2 += 10;

        if(n5.num2 > 9){
            n5.num2 = 0;
            n5.num1 += 1;
        }
        if(n5.num1 > 9){
            n5.num1 = 0;
            n4.num2 += 1;
        }
        if(n4.num2 > 9){
            n4.num2 = 0;
            n4.num1 += 1;
        }
        if(n4.num1 > 9){
            n4.num1 = 0;
            n3.num2 += 1;
        }
        if(n3.num2 > 9){
            n3.num2 = 0;
            n3.num1 += 1;
        }
        if(n3.num1 > 9){
            n3.num1 = 0;
            n2.num2 += 1;
        }
        if(n2.num2 > 9){
            n2.num2 = 0;
            n2.num1 += 1;
        }
        if(n2.num1 > 9){
            n2.num1 = 0;
            n1.num2 += 1;
        }
        if(n1.num2 > 9){
            n1.num2 = 0;
            n1.num1 += 1;
        }

        printf("%u%u%u%u%u%u%u%u%u%u\n", n1.num1, n1.num2, n2.num1, n2.num2, n3.num1, n3.num2, n4.num1, n4.num2, n5.num1, n5.num2);

    }


    return 0;
}