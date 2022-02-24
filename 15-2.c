#include <stdio.h>
#include <string.h>

int calc(FILE *fptr1);

int main()
{   

    FILE *fp1, *fp2;

    fp1 = fopen("./result-15.txt", "w");
    fp2 = fopen("./invalid-15.txt", "w");

    calc(fp1);

    fclose(fp1);
    fclose(fp2);

    return 0;
}

int calc(FILE *fptr1){

    for(long long int i=0; i<10000000000; i++){

        fprintf(fptr1, "%lld\n", i);
    }

    return 0;
}