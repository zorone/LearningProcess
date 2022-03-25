#include <stdio.h>
#include <stdint.h>

#define MAX_WHITE 3
#define MAX_BLUE 2
#define MAX_PINK 2
#define MAX_VIOLET 2

int main(){
    FILE *fptr;

    fptr = fopen("./PAT1_65.2.txt", "w");
    int8_t i[10] = {0};

    char string[10] = "WWWBBPPVV";

    long long int counter = 0;

    for(i[0] = 0; i[0]<9; i[0]++){
        for(i[1] = 0; i[1]<9; i[1]++){
            for(i[2] = 0; i[2]<9; i[2]++){
                for(i[3] = 0; i[3]<9; i[3]++){
                    for(i[4] = 0; i[4]<9; i[4]++){
                        for(i[5] = 0; i[5]<9; i[5]++){
                            for(i[6] = 0; i[6]<9; i[6]++){
                                for(i[7] = 0; i[7]<9; i[7]++){
                                    for(i[8] = 0; i[8]<9; i[8]++){

                                        counter += 1;
                                        fprintf(fptr, "%10lld %c%c%c%c%c%c%c%c%c\n", counter, string[i[0]], string[i[1]], string[i[2]],string[i[3]], string[i[4]], string[i[5]], string[i[6]], string[i[7]], string[i[8]]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    fclose(fptr);

    return 0;

}