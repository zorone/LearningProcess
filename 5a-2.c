#include <stdio.h>

int main()
{   
    long int counter = 0;


    for(char i1=65; i1<91; i1++){
        for(char i2=48; i2<58; i2++){
            for(char i3=48; i3<58; i3++){
                for(char i4=48; i4<58; i4++){
                    printf("%c-%c%c%c\n", i1, i2, i3, i4);
                    counter += 1;
                }
            }
        }
    }

    printf("\n\n\n%ld", counter);

    return 0;
}