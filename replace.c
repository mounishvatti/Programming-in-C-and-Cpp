#include <stdio.h>
int main(){
    FILE *fp;
    fp = fopen("text.txt", "r");
    FILE *fpo;
    fpo = fopen("output.txt", "w");
    char ch;
    do
    {
        ch = fgetc(fp);
        if((int)ch >= 97 && (int)ch <= 122){
            ch++;
        }
        if((int)ch == 123){
            ch = 'a';
        }
        if((int)ch >= 65 && (int)ch <= 90){
            ch++;
        }
        if((int)ch == 91){
            ch = 'A';
        }
        fputc(ch,fpo);

    } while (ch != EOF);
    fclose(fp);
    fclose(fpo);
}