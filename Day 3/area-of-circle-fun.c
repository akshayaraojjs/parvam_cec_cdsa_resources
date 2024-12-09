#include <stdio.h>
#define PI 3.14159
float calculateArea(float r) {
    return PI * r * r;
}
float calculateCircumference(float r) {
    return 2* PI * r;
}
int main() {
    float radius, area, circumference;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = calculateArea(radius);
    printf("The area of the circle is: %.2f\n", area);
    circumference = calculateCircumference(radius);
    printf("The circumference of the circle is: %.2f\n", circumference);
    return 0;
}