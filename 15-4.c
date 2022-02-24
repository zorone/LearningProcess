#include <stdio.h>
#include <string.h>

#define DEFAULT "0123456789"

int calc(FILE *fptr);
int restoreDefault(char *ptr)

int deepen(int level, int value);

int main()
{   

    FILE *fp1, *fp2;

    fp1 = fopen("./result-15-4.txt", "w");
    fp2 = fopen("./possible-15-4.txt", "w");

    calc(fp, scope[0], scope[1]);

    fclose(fp);

    return 0;
}

int calc(FILE *fptr1, FILE *fptr2){

    char invalidString[] = {"\0"};
    char unusedString[] = {"0123456789"};

    int lvr=0;

    for(int lv=0; lv<lvr; lv++){
            fprintf(fptr, " ");
    }

    
    fprintf(fptr, "\n");

    for(int i=0; i<10; i++){
        fprintf(fptr);
    }


    return 0;
}

int deepen(int level, int value){

    return 0;
}

int restoreDefault(char *ptr){

    strcpy(ptr, DEFAULT);

    return 0;

}