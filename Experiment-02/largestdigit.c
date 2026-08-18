#include <stdio.h>

int main()
{
    int n, digit, max = 0;

    printf("ENTER THE NUMBER: ");
    scanf("%d", &n);

    while (n > 0)
    {
        digit = n % 10;

        if (digit > max)
            max = digit;

        n /= 10;
    }

    printf("THE LARGEST DIGIT OF THE NUMBER: %d\n", max);

    return 0;
}
