#include <stdio.h>
#include <string.h>

int main()
{   
    long int counter = 0;
    int invalidCount = 0;

    FILE *fp1, *fp2;

    fp1 = fopen("./result-15.txt", "w");
    fp2 = fopen("./invalid-15.txt", "w");

    for(char i1=48; i1<58; i1++){
        for(char i2=48; i2<58; i2++){
            for(char i3=48; i3<58; i3++){
                for(char i4=48; i4<58; i4++){
                    for(char i5=48; i5<58; i5++){

                            /*if(i2==i3 || i3==i4 || i2 == i4){
                        
                            invalidCount +=1;

                            fprintf(fp2, "%d  %c-%c%c%c\n", invalidCount, i1, i2, i3, i4);

                            continue;
                        } */

                        printf("(%c, %c), (%c, %c)\n", i1, i2, i3, i4);
                        counter += 1;

                        fprintf(fp1, "%ld  %c-%c%c%c\n", counter, i1, i2, i3, i4);

                    }
                }
            }
        }
    }

    fclose(fp1);
    fclose(fp2);

    return 0;
}

int calc(char num[]){
    if (num[5] == '\0'){

        calc(num);
    }

    for(int i=0; i<10; i++){

    }
}