
#include <stdio.h>

int main() {
    FILE *fp;
    char text[200];

    printf("Enter text to write into the file:\n");
    fgets(text, sizeof(text), stdin);

    fp = fopen("myfile.txt", "w");

    if (fp == NULL) {
        printf("Error creating the file!\n");
        return 1;
    }

    fprintf(fp, "%s", text);

    fclose(fp);

    printf("File created and text written successfully.\n");

    return 0;
}