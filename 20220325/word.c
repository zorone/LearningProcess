#include <stdio.h>
#include <stdint.h>

#define MAX_C 2
#define MAX_D 1
#define MAX_E 2
#define MAX_H 1
#define MAX_I 1
#define MAX_K 2
#define MAX_N 1
#define MAX_S 1

int main(){
    FILE *fptr;

    fptr = fopen("./word.txt", "w");
    int8_t i[11] = {0};

    char invalid = 0;

    char string[9] = "CDEHIKNS";

    int cCount = MAX_C;
    int dCount = MAX_D;
    int eCount = MAX_E;
    int hCount = MAX_H;
    int iCount = MAX_I;
    int kCount = MAX_K;
    int nCount = MAX_N;
    int sCount = MAX_S;
    long long int counter = 0;

    //give 0 C, 1 D, 2 E, 3 F, 4 H, 5 I, 6 K, 7 N, 8 S.

    for(i[0] = 0; i[0]<8; i[0]++){
        switch(i[0]){
            case 0:
                cCount -= 1;
                break;
            case 1:
                dCount -= 1;
                break;
            case 2:
                eCount -= 1;
                break;
            case 3:
                hCount -= 1;
                break;
            case 4:
                iCount -= 1;
                break;
            case 5:
                kCount -= 1;
                break;
            case 6:
                nCount -= 1;
                break;
            case 7:
                sCount -= 1;
                break;
        }

        for(i[1] = 0; i[1]<8; i[1]++){
            switch(i[1]){
                case 0:
                cCount -= 1;
                break;
            case 1:
                if(!dCount) invalid = 1;
                dCount -= 1;
                break;
            case 2:
                eCount -= 1;
                break;
            case 3:
                if(!hCount) invalid = 1;
                hCount -= 1;
                break;
            case 4:
                if(!iCount) invalid = 1;
                iCount -= 1;
                break;
            case 5:
                kCount -= 1;
                break;
            case 6:
                if(!nCount) invalid = 1;
                nCount -= 1;
                break;
            case 7:
                if(!sCount) invalid = 1;
                sCount -= 1;
                break;
            }
            if(invalid){
                switch(i[1]){
                    case 0: cCount += 1; break;
                    case 1: dCount += 1; break;
                    case 2: eCount += 1; break;
                    case 3: hCount += 1; break;
                    case 4: iCount += 1; break;
                    case 5: kCount += 1; break;
                    case 6: nCount += 1; break;
                    case 7: sCount += 1; break;
                }

                invalid = 0;
                continue;
                }

            for(i[2] = 0; i[2]<8; i[2]++){
                switch(i[2]){
                    case 0:
                    if(!cCount) invalid = 1;
                    cCount -= 1;
                    break;
                case 1:
                    if(!dCount) invalid = 1;
                    dCount -= 1;
                    break;
                case 2:
                    if(!eCount) invalid = 1;
                    eCount -= 1;
                    break;
                case 3:
                    if(!hCount) invalid = 1;
                    hCount -= 1;
                    break;
                case 4:
                    if(!iCount) invalid = 1;
                    iCount -= 1;
                    break;
                case 5:
                    if(!kCount) invalid = 1;
                    kCount -= 1;
                    break;
                case 6:
                    if(!nCount) invalid = 1;
                    nCount -= 1;
                    break;
                case 7:
                    if(!sCount) invalid = 1;
                    sCount -= 1;
                    break;
                }
                if(invalid){
                    switch(i[2]){
                        case 0: cCount += 1; break;
                        case 1: dCount += 1; break;
                        case 2: eCount += 1; break;
                        case 3: hCount += 1; break;
                        case 4: iCount += 1; break;
                        case 5: kCount += 1; break;
                        case 6: nCount += 1; break;
                        case 7: sCount += 1; break;
                    }

                    invalid = 0;
                    continue;
                    }

                for(i[3] = 0; i[3]<8; i[3]++){
                    switch(i[3]){
                        case 0:
                            if(!cCount) invalid = 1;
                            cCount -= 1;
                            break;
                        case 1:
                            if(!dCount) invalid = 1;
                            dCount -= 1;
                            break;
                        case 2:
                            if(!eCount) invalid = 1;
                            eCount -= 1;
                            break;
                        case 3:
                            if(!hCount) invalid = 1;
                            hCount -= 1;
                            break;
                        case 4:
                            if(!iCount) invalid = 1;
                            iCount -= 1;
                            break;
                        case 5:
                            if(!kCount) invalid = 1;
                            kCount -= 1;
                            break;
                        case 6:
                            if(!nCount) invalid = 1;
                            nCount -= 1;
                            break;
                        case 7:
                            if(!sCount) invalid = 1;
                            sCount -= 1;
                            break;
                    }
                    if(invalid){
                        switch(i[3]){
                            case 0: cCount += 1; break;
                            case 1: dCount += 1; break;
                            case 2: eCount += 1; break;
                            case 3: hCount += 1; break;
                            case 4: iCount += 1; break;
                            case 5: kCount += 1; break;
                            case 6: nCount += 1; break;
                            case 7: sCount += 1; break;
                        }

                        invalid = 0;
                        continue;
                        }

                    for(i[4] = 0; i[4]<8; i[4]++){
                        switch(i[4]){
                            case 0:
                            if(!cCount) invalid = 1;
                            cCount -= 1;
                            break;
                        case 1:
                            if(!dCount) invalid = 1;
                            dCount -= 1;
                            break;
                        case 2:
                            if(!eCount) invalid = 1;
                            eCount -= 1;
                            break;
                        case 3:
                            if(!hCount) invalid = 1;
                            hCount -= 1;
                            break;
                        case 4:
                            if(!iCount) invalid = 1;
                            iCount -= 1;
                            break;
                        case 5:
                            if(!kCount) invalid = 1;
                            kCount -= 1;
                            break;
                        case 6:
                            if(!nCount) invalid = 1;
                            nCount -= 1;
                            break;
                        case 7:
                            if(!sCount) invalid = 1;
                            sCount -= 1;
                            break;
                        }
                        if(invalid){
                            switch(i[4]){
                                case 0: cCount += 1; break;
                                case 1: dCount += 1; break;
                                case 2: eCount += 1; break;
                                case 3: hCount += 1; break;
                                case 4: iCount += 1; break;
                                case 5: kCount += 1; break;
                                case 6: nCount += 1; break;
                                case 7: sCount += 1; break;
                            }

                            invalid = 0;
                            continue;
                            }

                        for(i[5] = 0; i[5]<8; i[5]++){
                            switch(i[5]){
                                case 0:
                                if(!cCount) invalid = 1;
                                cCount -= 1;
                                break;
                            case 1:
                                if(!dCount) invalid = 1;
                                dCount -= 1;
                                break;
                            case 2:
                                if(!eCount) invalid = 1;
                                eCount -= 1;
                                break;
                            case 3:
                                if(!hCount) invalid = 1;
                                hCount -= 1;
                                break;
                            case 4:
                                if(!iCount) invalid = 1;
                                iCount -= 1;
                                break;
                            case 5:
                                if(!kCount) invalid = 1;
                                kCount -= 1;
                                break;
                            case 6:
                                if(!nCount) invalid = 1;
                                nCount -= 1;
                                break;
                            case 7:
                                if(!sCount) invalid = 1;
                                sCount -= 1;
                                break;
                            }
                            if(invalid){
                                switch(i[5]){
                                    case 0: cCount += 1; break;
                                    case 1: dCount += 1; break;
                                    case 2: eCount += 1; break;
                                    case 3: hCount += 1; break;
                                    case 4: iCount += 1; break;
                                    case 5: kCount += 1; break;
                                    case 6: nCount += 1; break;
                                    case 7: sCount += 1; break;
                                }

                                invalid = 0;
                                continue;
                                }

                            for(i[6] = 0; i[6]<8; i[6]++){
                                switch(i[6]){
                                    case 0:
                                    if(!cCount) invalid = 1;
                                    cCount -= 1;
                                    break;
                                case 1:
                                    if(!dCount) invalid = 1;
                                    dCount -= 1;
                                    break;
                                case 2:
                                    if(!eCount) invalid = 1;
                                    eCount -= 1;
                                    break;
                                case 3:
                                    if(!hCount) invalid = 1;
                                    hCount -= 1;
                                    break;
                                case 4:
                                    if(!iCount) invalid = 1;
                                    iCount -= 1;
                                    break;
                                case 5:
                                    if(!kCount) invalid = 1;
                                    kCount -= 1;
                                    break;
                                case 6:
                                    if(!nCount) invalid = 1;
                                    nCount -= 1;
                                    break;
                                case 7:
                                    if(!sCount) invalid = 1;
                                    sCount -= 1;
                                    break;
                                }
                                if(invalid){
                                    switch(i[6]){
                                        case 0: cCount += 1; break;
                                        case 1: dCount += 1; break;
                                        case 2: eCount += 1; break;
                                        case 3: hCount += 1; break;
                                        case 4: iCount += 1; break;
                                        case 5: kCount += 1; break;
                                        case 6: nCount += 1; break;
                                        case 7: sCount += 1; break;
                                    }

                                    invalid = 0;
                                    continue;
                                    }

                                for(i[7] = 0; i[7]<8; i[7]++){
                                    switch(i[7]){
                                        case 0:
                                        if(!cCount) invalid = 1;
                                        cCount -= 1;
                                        break;
                                    case 1:
                                        if(!dCount) invalid = 1;
                                        dCount -= 1;
                                        break;
                                    case 2:
                                        if(!eCount) invalid = 1;
                                        eCount -= 1;
                                        break;
                                    case 3:
                                        if(!hCount) invalid = 1;
                                        hCount -= 1;
                                        break;
                                    case 4:
                                        if(!iCount) invalid = 1;
                                        iCount -= 1;
                                        break;
                                    case 5:
                                        if(!kCount) invalid = 1;
                                        kCount -= 1;
                                        break;
                                    case 6:
                                        if(!nCount) invalid = 1;
                                        nCount -= 1;
                                        break;
                                    case 7:
                                        if(!sCount) invalid = 1;
                                        sCount -= 1;
                                        break;
                                    }
                                    if(invalid){
                                        switch(i[7]){
                                            case 0: cCount += 1; break;
                                            case 1: dCount += 1; break;
                                            case 2: eCount += 1; break;
                                            case 3: hCount += 1; break;
                                            case 4: iCount += 1; break;
                                            case 5: kCount += 1; break;
                                            case 6: nCount += 1; break;
                                            case 7: sCount += 1; break;
                                        }

                                        invalid = 0;
                                        continue;
                                        }

                                    for(i[8] = 0; i[8]<8; i[8]++){
                                        switch(i[8]){
                                            case 0:
                                            if(!cCount) invalid = 1;
                                            cCount -= 1;
                                            break;
                                        case 1:
                                            if(!dCount) invalid = 1;
                                            dCount -= 1;
                                            break;
                                        case 2:
                                            if(!eCount) invalid = 1;
                                            eCount -= 1;
                                            break;
                                        case 3:
                                            if(!hCount) invalid = 1;
                                            hCount -= 1;
                                            break;
                                        case 4:
                                            if(!iCount) invalid = 1;
                                            iCount -= 1;
                                            break;
                                        case 5:
                                            if(!kCount) invalid = 1;
                                            kCount -= 1;
                                            break;
                                        case 6:
                                            if(!nCount) invalid = 1;
                                            nCount -= 1;
                                            break;
                                        case 7:
                                            if(!sCount) invalid = 1;
                                            sCount -= 1;
                                            break;
                                        }
                                        if(invalid){
                                            switch(i[8]){
                                                case 0: cCount += 1; break;
                                                case 1: dCount += 1; break;
                                                case 2: eCount += 1; break;
                                                case 3: hCount += 1; break;
                                                case 4: iCount += 1; break;
                                                case 5: kCount += 1; break;
                                                case 6: nCount += 1; break;
                                                case 7: sCount += 1; break;
                                            }

                                            invalid = 0;
                                            continue;
                                        }

                                        for(i[9] = 0; i[9]<8; i[9]++){
                                            switch(i[9]){
                                                case 0:
                                                    if(!cCount) invalid = 1;
                                                    cCount -= 1;
                                                    break;
                                                case 1:
                                                    if(!dCount) invalid = 1;
                                                    dCount -= 1;
                                                    break;
                                                case 2:
                                                    if(!eCount) invalid = 1;
                                                    eCount -= 1;
                                                    break;
                                                case 3:
                                                    if(!hCount) invalid = 1;
                                                    hCount -= 1;
                                                    break;
                                                case 4:
                                                    if(!iCount) invalid = 1;
                                                    iCount -= 1;
                                                    break;
                                                case 5:
                                                    if(!kCount) invalid = 1;
                                                    kCount -= 1;
                                                    break;
                                                case 6:
                                                    if(!nCount) invalid = 1;
                                                    nCount -= 1;
                                                    break;
                                                case 7:
                                                    if(!sCount) invalid = 1;
                                                    sCount -= 1;
                                                    break;
                                                }
                                                if(invalid){
                                                    switch(i[9]){
                                                        case 0: cCount += 1; break;
                                                        case 1: dCount += 1; break;
                                                        case 2: eCount += 1; break;
                                                        case 3: hCount += 1; break;
                                                        case 4: iCount += 1; break;
                                                        case 5: kCount += 1; break;
                                                        case 6: nCount += 1; break;
                                                        case 7: sCount += 1; break;
                                                    }

                                                    invalid = 0;
                                                    continue;
                                                }
                                            for(i[10] = 0; i[10]<8; i[10]++){                                            
                                                switch(i[10]){
                                                    case 0:
                                                        if(!cCount) invalid = 1;
                                                        cCount -= 1;
                                                        break;
                                                    case 1:
                                                        if(!dCount) invalid = 1;
                                                        dCount -= 1;
                                                        break;
                                                    case 2:
                                                        if(!eCount) invalid = 1;
                                                        eCount -= 1;
                                                        break;
                                                    case 3:
                                                        if(!hCount) invalid = 1;
                                                        hCount -= 1;
                                                        break;
                                                    case 4:
                                                        if(!iCount) invalid = 1;
                                                        iCount -= 1;
                                                        break;
                                                    case 5:
                                                        if(!kCount) invalid = 1;
                                                        kCount -= 1;
                                                        break;
                                                    case 6:
                                                        if(!nCount) invalid = 1;
                                                        nCount -= 1;
                                                        break;
                                                    case 7:
                                                        if(!sCount) invalid = 1;
                                                        sCount -= 1;
                                                        break;
                                                }
                                                if(invalid){
                                                    switch(i[10]){
                                                        case 0: cCount += 1; break;
                                                        case 1: dCount += 1; break;
                                                        case 2: eCount += 1; break;
                                                        case 3: hCount += 1; break;
                                                        case 4: iCount += 1; break;
                                                        case 5: kCount += 1; break;
                                                        case 6: nCount += 1; break;
                                                        case 7: sCount += 1; break;
                                                    }

                                                    invalid = 0;
                                                    continue;
                                                }
                                                
                                                counter += 1;
                                                fprintf(fptr, "%7lld %c%c%c%c%c%c%c%c%c%c%c\n", counter, string[i[0]], string[i[1]], string[i[2]],string[i[3]], string[i[4]], string[i[5]], string[i[6]], string[i[7]], string[i[8]], string[i[9]], string[i[10]]);
                                                switch(i[10]){
                                                    case 0: cCount += 1; break;
                                                    case 1: dCount += 1; break;
                                                    case 2: eCount += 1; break;
                                                    case 3: hCount += 1; break;
                                                    case 4: iCount += 1; break;
                                                    case 5: kCount += 1; break;
                                                    case 6: nCount += 1; break;
                                                    case 7: sCount += 1; break;
                                                }
                                            }
                                            switch(i[9]){
                                                case 0: cCount += 1; break;
                                                case 1: dCount += 1; break;
                                                case 2: eCount += 1; break;
                                                case 3: hCount += 1; break;
                                                case 4: iCount += 1; break;
                                                case 5: kCount += 1; break;
                                                case 6: nCount += 1; break;
                                                case 7: sCount += 1; break;
                                            }
                                        }

                                        switch(i[8]){
                                            case 0: cCount += 1; break;
                                            case 1: dCount += 1; break;
                                            case 2: eCount += 1; break;
                                            case 3: hCount += 1; break;
                                            case 4: iCount += 1; break;
                                            case 5: kCount += 1; break;
                                            case 6: nCount += 1; break;
                                            case 7: sCount += 1; break;
                                        }
                                    }
                                    switch(i[7]){
                                        case 0: cCount += 1; break;
                                        case 1: dCount += 1; break;
                                        case 2: eCount += 1; break;
                                        case 3: hCount += 1; break;
                                        case 4: iCount += 1; break;
                                        case 5: kCount += 1; break;
                                        case 6: nCount += 1; break;
                                        case 7: sCount += 1; break;
                                    }
                                }
                                switch(i[6]){
                                    case 0: cCount += 1; break;
                                    case 1: dCount += 1; break;
                                    case 2: eCount += 1; break;
                                    case 3: hCount += 1; break;
                                    case 4: iCount += 1; break;
                                    case 5: kCount += 1; break;
                                    case 6: nCount += 1; break;
                                    case 7: sCount += 1; break;
                                }
                            }
                            switch(i[5]){
                                case 0: cCount += 1; break;
                                case 1: dCount += 1; break;
                                case 2: eCount += 1; break;
                                case 3: hCount += 1; break;
                                case 4: iCount += 1; break;
                                case 5: kCount += 1; break;
                                case 6: nCount += 1; break;
                                case 7: sCount += 1; break;
                            }
                        }
                        switch(i[4]){
                            case 0: cCount += 1; break;
                            case 1: dCount += 1; break;
                            case 2: eCount += 1; break;
                            case 3: hCount += 1; break;
                            case 4: iCount += 1; break;
                            case 5: kCount += 1; break;
                            case 6: nCount += 1; break;
                            case 7: sCount += 1; break;
                        }
                    }
                    switch(i[3]){
                        case 0: cCount += 1; break;
                        case 1: dCount += 1; break;
                        case 2: eCount += 1; break;
                        case 3: hCount += 1; break;
                        case 4: iCount += 1; break;
                        case 5: kCount += 1; break;
                        case 6: nCount += 1; break;
                        case 7: sCount += 1; break;
                    }
                }
                switch(i[2]){
                    case 0: cCount += 1; break;
                    case 1: dCount += 1; break;
                    case 2: eCount += 1; break;
                    case 3: hCount += 1; break;
                    case 4: iCount += 1; break;
                    case 5: kCount += 1; break;
                    case 6: nCount += 1; break;
                    case 7: sCount += 1; break;
                }
            }
            switch(i[1]){
                case 0: cCount += 1; break;
                case 1: dCount += 1; break;
                case 2: eCount += 1; break;
                case 3: hCount += 1; break;
                case 4: iCount += 1; break;
                case 5: kCount += 1; break;
                case 6: nCount += 1; break;
                case 7: sCount += 1; break;
            }
        }
        switch(i[0]){
            case 0: cCount += 1; break;
            case 1: dCount += 1; break;
            case 2: eCount += 1; break;
            case 3: hCount += 1; break;
            case 4: iCount += 1; break;
            case 5: kCount += 1; break;
            case 6: nCount += 1; break;
            case 7: sCount += 1; break;
        }
    }

    fclose(fptr);

    return 0;

}