#include <stdio.h>

int main(void)
{
    int ascii;
    printf("Please enter the number:\n");
    scanf("%d", &ascii);
    printf("%d is the ASCII code for %c\n", ascii, ascii);

    return 0;
}