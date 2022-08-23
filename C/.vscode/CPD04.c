#include <stdio.h>
#include <string.h>
int main()
{
    char a[128], b[128];
    int n, r;
    scanf("%s", &a);
    scanf("%s", &b);
    scanf("%d", &n);
    r = strncmp(a, b, strlen(a));
    if (r > 0)
    {
        printf("%s > %s", a, b);
    }
    else if (r < 0)
    {
        printf("%s < %s", a, b);
    }
    else
    {
        printf("%s = %s", a, b);
    }
    return 0;
}