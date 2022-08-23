#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (a == b && a == c)
    {
        printf("正三角形\n");
    }
    if (a == b || a == c || b == c)
    {
        printf("等腰三角形\n");
    }
    if (pow(a, 2) + pow(b, 2) == pow(c, 2) || pow(a, 2) + pow(c, 2) == pow(b, 2) || pow(c, 2) + pow(b, 2) == pow(a, 2))
    {
        printf("等腰直角三角形\n");
    }
    return 0;
}