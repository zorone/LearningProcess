#include <stdio.h>

int main()
{
    char chr[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char pos0[] = "0123456789";
    char pos1[] = "0123456789";
    char pos2[] = "0123456789";
    long int counter = 0;


    for(int i1=0; i1<26; i1++){
        for(int i2=0; i2<10; i2++){
            for(int i3=0; i3<10; i3++){
                for(int i4=0; i4<10; i4++){
                    printf("%c-%c%c%c\n", chr[i1], pos0[i2], pos1[i3], pos2[i4]);
                    counter += 1;
                }
            }
        }
    }

    printf("\n\n\n%ld", counter);

    return 0;
}