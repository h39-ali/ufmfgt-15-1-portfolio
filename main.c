#include <stdio.h>
int main() {
   int num1, num2, num3, num4;
   int minimum;
   printf("Enter your first number");
   scanf("%d",&num1);
    printf("Enter your second number");
    scanf("%d", &num2);
    printf("Enter your thirst number");
    scanf("%d", &num3);
    printf("Enter your fourth number");
    scanf("%d", &num4);
    if (num1<num2) (minimum = num1);
    else minimum = num2;
    if (num3<minimum) (minimum = num3);
    if (num4<minimum) (minimum = num4);
    printf("%d", minimum);
    return 0;
}
