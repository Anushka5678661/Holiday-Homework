
#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("myfile.txt", "r");

    if (fp == NULL) {
        printf("Error: File could not be opened!\n");
        return 1;
    }

    printf("File content:\n");

    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);

    return 0;
}