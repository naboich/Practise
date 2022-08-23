#include <stdio.h>
int main()
{
    int n1, n2;
    scanf("%d", &n1);
    scanf("%d", &n2);
    int a = n1;
    n1 = n2;
    n2 = a;
    printf("%d\n", n1);
    printf("%d", n2);
    return 0;
}