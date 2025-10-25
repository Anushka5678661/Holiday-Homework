#include <stdio.h>
#define PI 3.14159
float areaOfCircle(float radius) 
{
    return PI * radius * radius;
}
int main() {
    float radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = areaOfCircle(radius);

    printf("Area of the circle = %.2f\n", area);

    return 0;
}