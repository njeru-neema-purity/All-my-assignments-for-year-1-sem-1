// Variables and Data Types

#include <stdio.h>

int main() {
    // Declare and initialize variables
    char grade = 'A';
    char name[15] = "John";
    int age = 2;
    float marks = 70;
    double pi = 3.142;

    printf("The grade is %c\n", grade);
    printf("My name is %s\n", name);
    printf("I am %d years old\n", age);
    printf("I scored %.2f marks in KCSE\n", marks);
    printf("The value of pi is %.3lf\n", pi);

    return 0;
}