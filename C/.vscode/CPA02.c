#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n > 60 && n <= 100)
    {
        n += 10;
        printf("%d", n);
    }
    else if (n <= 60 && n >= 0)
    {
        n += 5;
        printf("%d", n);
    }
    else
    {
        printf("error");
    }
    return 0;
}