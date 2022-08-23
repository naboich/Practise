#include <stdio.h>
int main()
{
    int n, total;
    scanf("%d", &n);
    total = 300 * n;
    if (total >= 3000)
    {
        total *= 0.8;
    }
    printf("%d", total);
    return 0;
}