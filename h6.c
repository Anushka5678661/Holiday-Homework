
#include <stdio.h>

int main() 
{
    char bookTitle[50];
    char authorName[50];
    int isbn;
    float price;
    char publisher[50];
    int year;
    printf("Enter Book Title: ");
    scanf("%s", bookTitle);
    printf("Enter Author Name: ");
    scanf("%s", authorName);
    printf("Enter ISBN: ");
    scanf("%d", &isbn);
    printf("Enter Price: ");
    scanf("%f", &price);
    printf("Enter Publisher: ");
    scanf("%s", publisher);
    printf("Enter Year of Publication: ");
    scanf("%d", &year);
    printf("\n--- Book Information ---\n");
    printf("Book Title        : %s\n", bookTitle);
    printf("Author Name       : %s\n", authorName);
    printf("ISBN              : %d\n", isbn);
    printf("Price             : %.2f\n", price);
    printf("Publisher         : %s\n", publisher);
    printf("Year of Publication: %d\n", year);

    return 0;
}