#include <stdio.h>
#include <string.h>

int main()
{   
    long int counter = 0;
    int invalidCount = 0;

    char validName[26000][6];
    char invalidName[26000][6];

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

                }
            }
        }
    }
    
    printf("result? (y/n)");

    char arg;
    scanf("%c", &arg);
    if(arg!='y'){
        return 0;
    }

    int i=0;

    while(validName[i][0]!='\0'){
        printf("%s\n", validName[i]);
        i+=1;
    }

    i=0;

    while(invalidName[i][0]!='\0'){
        printf("%s\n", invalidName[i]);
        i+=1;
    }

    return 0;
}