#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int words = 0;
    int inWord = 0;

    fp = fopen("myfile.txt", "r");

    if (fp == NULL) {
        printf("Error: Unable to open file!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        
        if (!isspace(ch) && !inWord) {
            inWord = 1;
            words++;
        }
        else if (isspace(ch)) {
            inWord = 0;
        }
    }

    fclose(fp);

    printf("Total number of words in the file: %d\n", words);

    return 0;
}