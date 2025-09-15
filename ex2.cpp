#include <stdio.h>
#include <math.h>

int main() {
    char name[12];
    int age;
    float height;
    float weight;
    float bmi;
    
    printf("Hello, my friend, please tell me your name: ");
    scanf(" %s", name);
    printf(" %s", "It is great name, Sir Daniel\n");
    
    printf(" %s", "Please tell me your age:");
    scanf(" %d", &age);

    printf(" %s", "Please tell me your height in centimeters:");
    scanf(" %f", &height);

    printf(" %s", "Please tell me your weight in kg:");
    scanf(" %f", &weight);

    bmi = weight / pow(height/100, 2);

    printf("Mr. %s, with only %d years old, your BMI is %.2f kg/m2.\n", name, age, bmi);

    return 0;  

}