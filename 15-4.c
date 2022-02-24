#include <stdio.h>
#include <string.h>

struct int_4
{
    unsigned int num1 : 4;
    unsigned int num2 : 4;
};


int main(){

    int_4 n1, n2, n3, n4, n5;

    for(n1.num1=0; n1.num1<10; n1.num1++){
        for(n1.num2=0; n1.num2<10; n1.num2++){
            for(n2.num1=0; n2.num1<10; n2.num1++){
                for(n2.num2=0; n2.num2<10; n2.num2++){
                    for(n3.num1=0; n3.num1<10; n3.num1++){
                        for(n3.num2=0; n3.num2<10; n3.num2++){
                            for(n4.num1=0; n4.num1<10; n4.num1++){
                                for(n4.num2=0; n4.num2<10; n4.num2++){
                                    for(n5.num1=0; n5.num1<10; n5.num1++){
                                        for(n5.num2=0; n5.num2<10; n5.num2++){
                                            printf("%u%u%u%u%u%u%u%u%u%u\n", n1.num1, n1.num2, n2.num1, n2.num2, n3.num1, n3.num2, n4.num1, n4.num2, n5.num1, n5.num2);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}