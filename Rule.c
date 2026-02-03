#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int lastDigit = num % 10;

    if (lastDigit % 2 == 0)
        printf("%d is divisible by 2", num);
    else
        printf("%d is not divisible by 2", num);

    return 0;
}
