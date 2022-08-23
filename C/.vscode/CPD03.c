#include <stdio.h>
void compute();
int n;
int main()
{
    scanf("%d", &n);
    compute();
    return 0;
}
void compute()
{
    if (n >= 60 && n <= 100)
    {
        n += 5;
        printf("%d", n);
    }
    else if (n < 60 && n >= 0)
    {
        n += 10;
        printf("%d", n);
    }
    else
    {
        printf("-1");
    }
}