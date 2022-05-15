#include <stdio.h>
#include <string.h>

void ascendingOrderString(char *input){
    int i, j;
    char temp;
    int stringLength = strlen(input);
    for (i = 0; i < stringLength - 1; i++){
        for (j = i + 1; j < stringLength; j++){
            if (input[i] > input[j]){
                temp = input[i];
                input[i] = input[j];
                input[j] = temp;
            }
        }
    }
}

int main(){
    FILE *fpin = fopen("file.txt", "r");
    FILE *fpout = fopen("fileo.txt", "w");
    char ch;
    while (ch != EOF){
        char rev[10];
        fscanf(fpin, "%s", rev);
        ch = fgetc(fpin);
        ascendingOrderString(rev);
        fputs(rev, fpout);
        fputc(' ', fpout);
    }
    fclose(fpin);
    fclose(fpout);
}
