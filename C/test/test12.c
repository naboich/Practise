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
        printf("���T����\n");
    }
    if (a == b || a == c || b == c)
    {
        printf("���y�T����\n");
    }
    if (pow(a, 2) + pow(b, 2) == pow(c, 2) || pow(a, 2) + pow(c, 2) == pow(b, 2) || pow(c, 2) + pow(b, 2) == pow(a, 2))
    {
        printf("���y�����T����\n");
    }
    return 0;
}