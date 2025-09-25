#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "en_US.UTF-8");

    float c, k, f;
    int choice;

    printf("Hello, my frind! Please, pick a number concerning the temperature conversion that you want to do:\n");
    printf("1 - Celsius to Kelvin\n");
    printf("2 - Kelvin to Celsius\n");
    printf("3 - Celsius to Fahrenheit\n");
    printf("4 - Fahrenheit to Celsius\n");
    printf("5 - Kelvin to Fahrenheit\n");
    printf("6 - Fahrenheit to Kelvin\n");

    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Please, enter the temperature in Celsius: ");
        scanf("%f", &c);
         k = c + 273.15;
         printf("The temperature in Kelvin is: %.2f K\n", k);
        break;
    
    case 2:
        printf("Please, enter the temperature in Kelvin: ");
        scanf("%f", &k);
        c = k - 273.15;
        printf("The temperature in Celsius is: %.2f °C\n", c);
        break;
    
    case 3:
        printf("Please, enter the temperature in Celsius: ");
        scanf("%f", &c);
        f = 9*c/5 + 32;
        printf("The temperature in Fahrenheit is: %.2f °F\n", f);
        break;
    
    case 4:
        printf("Please, enter the temperature in Fahrenheit: ");
        scanf("%f", &f);
        c = 5 * (f - 32) / 9;
        printf("The temperature in Celsius is: %.2f °C\n", c);
        break;
    
    case 5:
        printf("Please, enter the temperature in Kelvin: ");
        scanf("%f", &k);
        f = 9 * (k - 273.15) / 5 + 32;
        printf("The temperature in Fahrenheit is: %.2f °F\n", f);
        break;
    
    case 6:
        printf("Please, enter the temperature in Fahrenheit: ");
        scanf("%f", &f);
        k = 5 * (f - 32) / 9 + 273.15;
        printf("The temperature in Kelvin is: %.2f K\n", k);
        break;     
    
    default:
        printf("Invalid choice.\n");
        break;
    }
    return 0;
}