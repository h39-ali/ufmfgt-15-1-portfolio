#include <stdio.h>
#include <math.h>
//task1
void print_welcome_message() {
    printf("ENGINEERING CALCULATOR v1.0"
           "System Ready. Awaiting input\n");
}
//task2
int add_numbers(int x, int y){
    return x + y;
}
//task3
float pi = 3.14159;                      //part 1
double calculate_circumference(double r){
    return 2 * pi * r;
}
double calculate_area(int r){        //  part2
    return pi * pow(r, 2);
}
//task4
void is_even(int z){
    if (z % 2 == 0);
    {
        printf("1");
        else
            printf("0");
    }
}

int main() {
    //task1
print_welcome_message();
//task2
int x, y;
    printf("Insert your first number");
    scanf("%d", &x);
    printf("Insert your second number");
    scanf("%d", &y);
    int result = add_numbers(x, y);
    printf("This is the sum of your numbers: %d", result);
    return 0;
}