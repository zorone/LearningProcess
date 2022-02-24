#include <stdio.h>
#include <string.h>

int calc();

int main()
{   

    FILE *fp1, *fp2;

    fp1 = fopen("./result-15.txt", "w");
    fp2 = fopen("./invalid-15.txt", "w");

    calc();

    /*char string[10000000000];

    for(long long int i=0; i<10000000000; i++){
        sprintf(string, "%lld", i);

        printf("%s\n", string);
    }*/

    fclose(fp1);
    fclose(fp2);

    return 0;
}

int calc(){

    char string[12];

    for(long long int i=0; i<10000000000; i++){
        sprintf(string, "%lld", i);

        printf("%s\n", string);
    }

    return 0;
}