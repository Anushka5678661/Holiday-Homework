
#include <stdio.h>

int main() {
    FILE *fp;
    char line[300];

    fp = fopen("myfile.txt", "r");

    if (fp == NULL) {
        printf("Error: Unable to open the file!\n");
        return 1;
    }

    printf("File content (line by line):\n");

    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}