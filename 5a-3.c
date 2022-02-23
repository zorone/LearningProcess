#include <stdio.h>
#include <string.h>

int main()
{   
    long int counter = 0;
    int invalidCount = 0;

    FILE *fp1, *fp2;

    fp1 = fopen("./result-5a.txt", "w");
    fp2 = fopen("./invalid-5a.txt", "w");

    for(char i1=65; i1<91; i1++){
        for(char i2=48; i2<58; i2++){
            for(char i3=48; i3<58; i3++){
                for(char i4=48; i4<58; i4++){

                    if(i2+i3+i4 == 144){
                        
                        invalidCount +=1;

                        fprintf(fp2, "%d  %c-%c%c%c\n", invalidCount, i1, i2, i3, i4);

                        continue;
                    }

                    printf("%c-%c%c%c\n", i1, i2, i3, i4);
                    counter += 1;

                    fprintf(fp1, "%ld  %c-%c%c%c\n", counter, i1, i2, i3, i4);

                }
            }
        }
    }

    fclose(fp1);
    fclose(fp2);

    return 0;
}