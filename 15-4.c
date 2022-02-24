#include <stdio.h>
#include <string.h>

#define DEFAULT "0123456789"

int calc(FILE *fptr);
int restoreDefault(char *ptr)

int deepen(int level, int value);

int padding(int level, FILE *fptr);
int newLine(FILE *fptr);

int writeFile(FILE *fp1, FILE *fp2, FILE *fp3, FILE *fp4);

int main(){   

    FILE *fp1, *fp2, *fp3, *fp4;

    fp1 = fopen("./result-15-4.txt", "w");
    fp2 = fopen("./possible-15-4.txt", "w");
    fp3 = fopen("./duplicable-15-4.txt", "w");
    fp4 = fopen("./list-15-4.txt", "w");

    writeFile(fp1, fp2, fp3, fp4);

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    fclose(fp4);

    return 0;
}

int calc(FILE *fptr1, FILE *fptr2){

    char invalidString[] = {"\0"};
    char unusedString[] = {"0123456789"};

    return 0;
}

int writeFile(FILE *fp1, FILE *fp2, FILE *fp3, FILE *fp4){
    int lvr = 0;
    deepen(lvr);
    

    return 0;
}

int deepen(int level, FILE *fp){
    for(int i=0; i<10; i++){
        padding(level, fp);

    }


    return 0;
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