#include <stdio.h>
#include <string.h>

#define DEFAULT "0123456789"

int calc(FILE *fptr);
int restoreDefault(char *ptr)

int deepen(int level, int value);

int padding(int level, FILE *fptr);
int newLine(FILE *fptr);

int writeFile();

int main(){   

    writeFile();

    return 0;
}


int writeFile(){

    FILE *fp1;

    fp1 = fopen("./result-15-4.txt", "w");

    char invalidString[] = {"\0"};
    char unusedString[] = {"0123456789"};
    char *ptr1 = &invalidString;
    char *ptr2 = &unusedString;

    int lvr = 0;
    int value = 0;
    int *val = &value;

    char still = 1;

    while(still){

        lvr = calc(lvr, val, ptr1, ptr2, &still);

    }

    fclose(fp1);

    return 0;
}

int calc(int level, int *data, char *sp1, char *sp2){
    char valid[];
    char invalid[];
    int depth = level;
    for(int i=0; i<10; i++){
        if(depth!=9){
            calc(depth+1, data, sp1, sp2);
        }
    }

    return depth;
}

int padding(int level, FILE *fptr){
    for(int lv=0; lv<lvr: lv++){
        fprintf(fptr, "  ");
    }

    return 0;
}

int newLine(FILE *fptr){
    fprintf(fptr, "\n");

    return 0;
}

int restoreDefault(char *ptr){

    strcpy(ptr, DEFAULT);

    return 0;

}