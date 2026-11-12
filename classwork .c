// Variables and Data Types

#include <stdio.h>

int main() {
    // Declare variables
    char grade;
    char name[15];
    int age;
    float marks;
    double pi;

    printf("Enter your grade:\t");
    scanf(" %c", &grade);

    printf("Enter your name:\t");
    scanf("%14s", name);

    printf("Enter your age:\t");
    scanf("%d", &age);

    printf("Enter your marks:\t");
    scanf("%f", &marks);

    printf("Enter the value of pi:\t");
    scanf("%lf", &pi);

    printf("The grade is %c\n", grade);
    printf("My name is %s\n", name);
    printf("I am %d years old\n", age);
    printf("I scored %.2f marks in KCSE\n", marks);
    printf("The value of pi is %.3f\n", pi);

    return 0;
}