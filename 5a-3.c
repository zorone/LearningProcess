#include <stdio.h>
#include <string.h>

int main()
{   
    long int counter = 0;
    int invalidCount = 0;

    char validName[26000][6];
    char invalidName[26000][6];

    FILE *fp1, *fp2;

    fp1 = fopen("./result.txt", "w");
    fp2 = fopen("./invalid.txt", "w");

    for(char i1=65; i1<91; i1++){
        for(char i2=48; i2<58; i2++){
            for(char i3=48; i3<58; i3++){
                for(char i4=48; i4<58; i4++){

                    if(i2+i3+i4 == 144){

                        invalidName[invalidCount][0] = i1;
                        invalidName[invalidCount][1] = '-';
                        invalidName[invalidCount][2] = i2;
                        invalidName[invalidCount][3] = i3;
                        invalidName[invalidCount][4] = i4;
                        invalidName[invalidCount][5] = '\0';
                        
                        invalidCount +=1;

                        fprintf(fp2, "%d  %s\n", invalidCount, invalidName[invalidCount-1]);

                        continue;
                    }

                    validName[counter][0] = i1;
                    validName[counter][1] = '-';
                    validName[counter][2] = i2;
                    validName[counter][3] = i3;
                    validName[counter][4] = i4;
                    validName[counter][5] = '\0';

                    printf("%s\n", validName[counter]);
                    counter += 1;

                    fprintf(fp1, "%ld  %s\n", counter, validName[counter-1]);

                }
            }
        }
    }

    fclose(fp1);
    fclose(fp2);

    return 0;
}