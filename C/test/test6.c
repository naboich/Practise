#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    int n = a;
    a = b;
    b = c;
    c = n;
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d", c);
    return 0;
}