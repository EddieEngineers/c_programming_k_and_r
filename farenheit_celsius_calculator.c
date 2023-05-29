#include <stdio.h>

#define LOWER   0
#define UPPER   300
#define STEP    20

int main()
{


    printf("Fahrenheit\tCelsius\n");
    printf("-----------------------\n");

    int fahr, celsius;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
        printf("%d\t\t%3.2f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
    }

    printf("Celsius\t\tFahrenheit\n");
    printf("-----------------------\n");

    for (celsius = LOWER; celsius <= UPPER; celsius = celsius + STEP) {
        printf("%d\t\t%3.0f\n", celsius, celsius * (9.0 / 5.0) + 32);
    }

    return 0;
}