#include <stdio.h>
#include <stdint.h>

#define MAX_WHITE 3
#define MAX_BLUE 2
#define MAX_PINK 2
#define MAX_VIOLET 2

int main(){
    FILE *fptr;

    fptr = fopen("./PAT1_65.txt", "w");
    int8_t i[10] = {0};

    char invalid = 0;

    char string[5] = "WBPV";

    int whiteCount = MAX_WHITE;
    int blueCount = MAX_BLUE;
    int pinkCount = MAX_PINK;
    int violetCount = MAX_VIOLET;
    long long int counter = 0;

    //give 0 is W, 1 is B, 2 is P, 3 is V.

    for(i[0] = 0; i[0]<4; i[0]++){
        switch(i[0]){
            case 0:
                whiteCount -= 1;
                break;
            case 1:
                blueCount -= 1;
                break;
            case 2:
                pinkCount -= 1;
                break;
            case 3:
                violetCount -= 1;
                break;
        }

        for(i[1] = 0; i[1]<4; i[1]++){
            switch(i[1]){
                case 0:
                    whiteCount -= 1;
                    break;
                case 1:
                    blueCount -= 1;
                    break;
                case 2:
                    pinkCount -= 1;
                    break;
                case 3:
                    violetCount -= 1;
                    break;
            }
            for(i[2] = 0; i[2]<4; i[2]++){
                switch(i[2]){
                    case 0:
                        whiteCount -= 1;
                        break;
                    case 1:
                        if(!blueCount) invalid = 1;
                        blueCount -= 1;
                        break;
                    case 2:
                        if(!pinkCount) invalid = 1;
                        pinkCount -= 1;
                        break;
                    case 3:
                        if(!violetCount) invalid = 1;
                        violetCount -= 1;
                        break;
                }
                if(invalid){
                    switch(i[2]){
                        case 0: whiteCount += 1; break;
                        case 1: blueCount += 1; break;
                        case 2: pinkCount += 1; break;
                        case 3: violetCount += 1; break;
                    }

                    invalid = 0;
                    continue;
                }
                for(i[3] = 0; i[3]<4; i[3]++){
                    switch(i[3]){
                        case 0:
                            if(!whiteCount) invalid = 1;
                            whiteCount -= 1;
                            break;
                        case 1:
                            if(!blueCount) invalid = 1;
                            blueCount -= 1;
                            break;
                        case 2:
                            if(!pinkCount) invalid = 1;
                            pinkCount -= 1;
                            break;
                        case 3:
                            if(!violetCount) invalid = 1;
                            violetCount -= 1;
                            break;
                    }
                    if(invalid){
                        switch(i[3]){
                            case 0: whiteCount += 1; break;
                            case 1: blueCount += 1; break;
                            case 2: pinkCount += 1; break;
                            case 3: violetCount += 1; break;
                        }

                        invalid = 0;
                        continue;
                    }
                    for(i[4] = 0; i[4]<4; i[4]++){
                        switch(i[4]){
                            case 0:
                                if(!whiteCount) invalid = 1;
                                whiteCount -= 1;
                                break;
                            case 1:
                                if(!blueCount) invalid = 1;
                                blueCount -= 1;
                                break;
                            case 2:
                                if(!pinkCount) invalid = 1;
                                pinkCount -= 1;
                                break;
                            case 3:
                                if(!violetCount) invalid = 1;
                                violetCount -= 1;
                                break;
                        }
                        if(invalid){
                            switch(i[4]){
                                case 0: whiteCount += 1; break;
                                case 1: blueCount += 1; break;
                                case 2: pinkCount += 1; break;
                                case 3: violetCount += 1; break;
                            }

                            invalid = 0;
                            continue;
                        }
                        for(i[5] = 0; i[5]<4; i[5]++){
                            switch(i[5]){
                                case 0:
                                    if(!whiteCount) invalid = 1;
                                    whiteCount -= 1;
                                    break;
                                case 1:
                                    if(!blueCount) invalid = 1;
                                    blueCount -= 1;
                                    break;
                                case 2:
                                    if(!pinkCount) invalid = 1;
                                    pinkCount -= 1;
                                    break;
                                case 3:
                                    if(!violetCount) invalid = 1;
                                    violetCount -= 1;
                                    break;
                            }
                            if(invalid){
                                switch(i[5]){
                                    case 0: whiteCount += 1; break;
                                    case 1: blueCount += 1; break;
                                    case 2: pinkCount += 1; break;
                                    case 3: violetCount += 1; break;
                                }

                                invalid = 0;
                                continue;
                            }
                            for(i[6] = 0; i[6]<4; i[6]++){
                                switch(i[6]){
                                    case 0:
                                        if(!whiteCount) invalid = 1;
                                        whiteCount -= 1;
                                        break;
                                    case 1:
                                        if(!blueCount) invalid = 1;
                                        blueCount -= 1;
                                        break;
                                    case 2:
                                        if(!pinkCount) invalid = 1;
                                        pinkCount -= 1;
                                        break;
                                    case 3:
                                        if(!violetCount) invalid = 1;
                                        violetCount -= 1;
                                        break;
                                }
                                if(invalid){
                                    switch(i[6]){
                                        case 0: whiteCount += 1; break;
                                        case 1: blueCount += 1; break;
                                        case 2: pinkCount += 1; break;
                                        case 3: violetCount += 1; break;
                                    }

                                    invalid = 0;
                                    continue;
                                }
                                for(i[7] = 0; i[7]<4; i[7]++){
                                    switch(i[7]){
                                        case 0:
                                            if(!whiteCount) invalid = 1;
                                            whiteCount -= 1;
                                            break;
                                        case 1:
                                            if(!blueCount) invalid = 1;
                                            blueCount -= 1;
                                            break;
                                        case 2:
                                            if(!pinkCount) invalid = 1;
                                            pinkCount -= 1;
                                            break;
                                        case 3:
                                            if(!violetCount) invalid = 1;
                                            violetCount -= 1;
                                            break;
                                    }
                                    if(invalid){
                                        switch(i[7]){
                                            case 0: whiteCount += 1; break;
                                            case 1: blueCount += 1; break;
                                            case 2: pinkCount += 1; break;
                                            case 3: violetCount += 1; break;
                                        }
                                        
                                        invalid = 0;
                                        continue;
                                    }
                                    for(i[8] = 0; i[8]<4; i[8]++){
                                        switch(i[8]){
                                            case 0:
                                                if(!whiteCount) invalid = 1;
                                                whiteCount -= 1;
                                                break;
                                            case 1:
                                                if(!blueCount) invalid = 1;
                                                blueCount -= 1;
                                                break;
                                            case 2:
                                                if(!pinkCount) invalid = 1;
                                                pinkCount -= 1;
                                                break;
                                            case 3:
                                                if(!violetCount) invalid = 1;
                                                violetCount -= 1;
                                                break;
                                        }
                                        if(invalid){
                                            switch(i[8]){
                                                case 0: whiteCount += 1; break;
                                                case 1: blueCount += 1; break;
                                                case 2: pinkCount += 1; break;
                                                case 3: violetCount += 1; break;
                                            }

                                            invalid = 0;
                                            continue;
                                        }

                                        counter += 1;
                                        fprintf(fptr, "%7lld %c%c%c%c%c%c%c%c%c\n", counter, string[i[0]], string[i[1]], string[i[2]],string[i[3]], string[i[4]], string[i[5]], string[i[6]], string[i[7]], string[i[8]]);
                                        switch(i[8]){
                                            case 0: whiteCount += 1; break;
                                            case 1: blueCount += 1; break;
                                            case 2: pinkCount += 1; break;
                                            case 3: violetCount += 1; break;
                                        }
                                    }
                                    switch(i[7]){
                                        case 0: whiteCount += 1; break;
                                        case 1: blueCount += 1; break;
                                        case 2: pinkCount += 1; break;
                                        case 3: violetCount += 1; break;
                                    }
                                }
                                switch(i[6]){
                                    case 0: whiteCount += 1; break;
                                    case 1: blueCount += 1; break;
                                    case 2: pinkCount += 1; break;
                                    case 3: violetCount += 1; break;
                                }
                            }
                            switch(i[5]){
                                case 0: whiteCount += 1; break;
                                case 1: blueCount += 1; break;
                                case 2: pinkCount += 1; break;
                                case 3: violetCount += 1; break;
                            }
                        }
                        switch(i[4]){
                            case 0: whiteCount += 1; break;
                            case 1: blueCount += 1; break;
                            case 2: pinkCount += 1; break;
                            case 3: violetCount += 1; break;
                        }
                    }
                    switch(i[3]){
                        case 0: whiteCount += 1; break;
                        case 1: blueCount += 1; break;
                        case 2: pinkCount += 1; break;
                        case 3: violetCount += 1; break;
                    }
                }
                switch(i[2]){
                    case 0: whiteCount += 1; break;
                    case 1: blueCount += 1; break;
                    case 2: pinkCount += 1; break;
                    case 3: violetCount += 1; break;
                }
            }
            switch(i[1]){
                case 0: whiteCount += 1; break;
                case 1: blueCount += 1; break;
                case 2: pinkCount += 1; break;
                case 3: violetCount += 1; break;
            }
        }
        switch(i[0]){
            case 0: whiteCount += 1; break;
            case 1: blueCount += 1; break;
            case 2: pinkCount += 1; break;
            case 3: violetCount += 1; break;
        }
    }

    fclose(fptr);

    return 0;

}