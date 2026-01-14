#include <stdio.h>

int main(void)
{
    int age;
    int days;

    printf("How old are you?\n");
    
    scanf("%d", &age);
    days = 365 * age;
    printf("The number of days you've lived is %d.\n", days);

    return 0;

}