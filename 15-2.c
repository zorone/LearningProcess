#include <stdio.h>
#include <string.h>

int main()
{   
    long int counter = 0;
    int invalidCount = 0;

    FILE *fp1, *fp2;

    fp1 = fopen("./result-15.txt", "w");
    fp2 = fopen("./invalid-15.txt", "w");

    calc();

    fclose(fp1);
    fclose(fp2);

    return 0;
}

int calc(){

    char string[10000000000];

    for(long int i=0; i<10000000000; i++){
        sprintf(string, "%ld");

        printf("%s\n", string);
    }
}