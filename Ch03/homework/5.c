#include <stdio.h>

int main(void)
{
    float second = 3.156e7;
    int age;

    printf("Please enter your age:");
    scanf("%d", &age);
    printf("The number of second of your age is: %e\n", age * second);

    return 0;
}