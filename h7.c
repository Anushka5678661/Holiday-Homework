
#include <stdio.h>

int main() 
{
    char brandName[50];
    char modelName[50];
    int serialNumber;
    float price;
    char color[50];
    int batteryCapacity;
    printf("Enter Brand Name: ");
    scanf("%s", brandName);
    printf("Enter Model Name: ");
    scanf("%s", modelName);
    printf("Enter Serial Number: ");
    scanf("%d", &serialNumber);
    printf("Enter Price: ");
    scanf("%f", &price);
    printf("Enter Color: ");
    scanf("%s", color);
    printf("Enter Battery Capacity: ");
    scanf("%d", &batteryCapacity);
    printf("\n--- Mobile Phone Information ---\n");
    printf("Brand Name       : %s\n", brandName);
    printf("Model Name       : %s\n", modelName);
    printf("Serial Number    : %d\n", serialNumber);
    printf("Price            : %.2f\n", price);
    printf("Color            : %s\n", color);
    printf("Battery Capacity : %d mAh\n", batteryCapacity);

    return 0;
}