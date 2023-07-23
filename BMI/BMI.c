/*
Classification	BMI range - kg/m2
Severe Thinness	< 16
Moderate Thinness	16 - 17
Mild Thinness	17 - 18.5
Normal	18.5 - 25
Overweight	25 - 30
Obese Class I	30 - 35
Obese Class II	35 - 40
Obese Class III	> 40

*/
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <conio.h>

int main(void)
{
    char name[50];
    int age;
    float weight = 0.0, feet = 0.0, inche = 0.0, BMI = 0, meter = 0, Centimeter = 0;

    printf("Please Enter Your Name : ");
    scanf("%s", name);
    printf("Please Enter Your Age : ");
    scanf("%d", &age);
    printf("Please Enter your Weight : ");
    scanf("%f", &weight);
    printf("Please Enter your feet : ");
    scanf("%f", &feet);
    printf("Please Enter your inche : ");
    scanf("%f", &inche);

    Centimeter = ((feet * 12) + inche) * 2.54;

    meter = Centimeter / 100;

    BMI = (weight / (meter * meter));

    // printf("\n BMI = %.2f", BMI);

    if (BMI <= 18.5)
        printf("\nDear %s Your BMI value is %.2f: UnderWeight.\n", name, BMI);
    else if (BMI <= 24.9)
        printf("\nDear %s Your BMI value is %.2f: Normal.\n", name, BMI);
    else if (BMI <= 29.9)
        printf("\nDear %s Your BMI value is %.2f: OverWeight.\n", name, BMI);
    else if (BMI <= 34.9)
        printf("\nDear %s Your BMI value is %.2f: Obese Class I.\n", name, BMI);
    else if (BMI <= 39.9)
        printf("\nDear %s Your BMI value is %.2f: Obese Class II.\n", name, BMI);
    else
        printf("\nDear %s Your BMI value is %.2f: Obese Class III.\n", name, BMI);
    printf("\n");


    return 0;
}