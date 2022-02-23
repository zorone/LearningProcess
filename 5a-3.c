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

                    char *string = NULL;

                    if(i2+i3+i4 == 144){

                        strcpy(invalidName[invalidCount], "\0");

                        string = &i1;
                        strcat(invalidName[invalidCount], string);
                        strcat(invalidName[invalidCount], "-");

                        string = &i2;
                        strcat(invalidName[invalidCount], string);

                        string = &i3;
                        strcat(invalidName[invalidCount], string);

                        string = &i4;
                        strcat(invalidName[invalidCount], string);
                        
                        invalidCount +=1;

                        string = NULL;

                        continue;
                    }

                    strcpy(invalidName[invalidCount], "\0");

                    string = &i1;
                    strcat(invalidName[invalidCount], string);
                    strcat(invalidName[invalidCount], "-");

                    string = &i2;
                    strcat(invalidName[invalidCount], string);

                    string = &i3;
                    strcat(invalidName[invalidCount], string);

                    string = &i4;
                    strcat(invalidName[invalidCount], string);

                    printf("%s\n", validName[counter]);
                    counter += 1;

                    string = NULL;
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
    }

    i=0;

    while(invalidName[i][0]!='\0'){
        printf("%s\n", invalidName[i]);
    }

    return 0;
}