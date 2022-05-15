#include<stdio.h>
#include<string.h>

int main(){
    FILE* fpin = fopen("input.txt","r");
    FILE* fpout = fopen("output1.txt","w");
    char ch;
    while(ch != EOF){
        char rev[10];
        fscanf(fpin,"%s",rev);
        ch = fgetc(fpin);
        strrev(rev);
        fputs(rev,fpout);
        fputc(' ',fpout);
    }
    fclose(fpin);
    fclose(fpout);
}
