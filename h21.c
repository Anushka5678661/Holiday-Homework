#include <stdio.h>
float calculateMonthlySalary(float basicSalary, int isMetro);

int main() {
    float basicSalary, totalSalary;
    int cityType;

    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    printf("Enter City Type (1 for Metro, 0 for Non-Metro): ");
    scanf("%d", &cityType);

    totalSalary = calculateMonthlySalary(basicSalary, cityType);

    printf("\nTotal Monthly Salary = %.2f\n", totalSalary);

    return 0;
}
float calculateMonthlySalary(float basicSalary, int isMetro) 
{
    float hra, da, total;
    if (isMetro == 1)
        hra = 0.15 * basicSalary;
    else
        hra = 0.10 * basicSalary;
    da = 0.05 * basicSalary;
    total = basicSalary + hra + da;

    return total;
}