#include <stdio.h>
#include <string.h>

int calc(FILE *fptr1, int num1, int num2);
int reArrange(int *num1, int *num2);

int main()
{   

    FILE *fp1, *fp2;

    int scope[2];

    fp1 = fopen("./result-15.txt", "w");
    fp2 = fopen("./invalid-15.txt", "w");

    scanf("%d %d", &scope[0], &scope[1]);

    reArrange(&scope[0], &scope[1]);
    calc(fp1, scope[0], scope[1]);

    fclose(fp1);
    fclose(fp2);

    return 0;
}

int calc(FILE *fptr1, int num1, int num2){

    for(long long int i=num1; i<=num2; i++){

        fprintf(fptr1, "%lld\n", i);
    }

    return 0;
}

int reArrange(int *num1, int *num2){
    if(num1>num2){
        int temp;
        num1 = &temp;
        num1 = num2;
        num2 = &temp;
    }

    return 0;
}