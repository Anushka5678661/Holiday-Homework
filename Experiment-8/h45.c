#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    int size;
    printf("Enter initial size of string: ");
    scanf("%d", &size);
    getchar(); 

    char *str = (char*) malloc(size * sizeof(char));

    printf("Enter string: ");
    fgets(str, size, stdin);
    str[strcspn(str, "\n")] = '\0';

    int newSize;
    printf("Enter new size (larger): ");
    scanf("%d", &newSize);
    getchar();

    str = (char*) realloc(str, newSize * sizeof(char));

    printf("Enter text to append: ");
    fgets(str + strlen(str), newSize - strlen(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("Final string: %s\n", str);

    free(str);
    return 0;
}
