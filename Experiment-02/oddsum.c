#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("ENTER THE LIMIT: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i += 2)
        sum += i;

    printf("SUM = %d\n", sum);

    return 0;
}
