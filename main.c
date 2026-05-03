#include <stdio.h>
#include <math.h>
int main() {
    float height, length;
    printf("Enter height of Right angle triangle");
    scanf("%f", &height);
    printf("Enter length of Right angle triangle");
    scanf("%f", &length);
    float hypotenuse = sqrt(pow(height, 2) + pow(length, 2));
    float perimeter = height + length + hypotenuse;
    printf("Hypotenuse is: %f", hypotenuse);
    printf("Perimeter is: %f", perimeter);
    return 0;
}
