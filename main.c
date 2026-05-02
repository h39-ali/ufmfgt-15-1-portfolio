#include <stdio.h>

int main() {
    int sensorID = 99;
    float temperature = 12.34;
    char status_code = 'A';
    printf("sensorID: %d\n", sensorID);
    printf("temperature: %f\n", temperature);
    printf("status_code: %c\n", status_code);

    int num, reverse;
    printf("Enter a 2 digit Number.");
    scanf("%d", &num);
    int tens = (num / 10);
    int units = (num % 10);
    reverse = (units * 10) + tens;
    printf("%d\n", reverse);

double mph, kmh;
printf("Enter your speed in mph\n");
scanf("%lf", &mph);
kmh = mph * 1.60934;
printf("This is your speed in kmh: %lf\n", kmh);
    return 0;
}
