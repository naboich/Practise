#include <stdio.h>
int main()
{
    char in, out;
    scanf("%c", &in);
    out = in + ('a' - 'A');
    printf("%c", out);
    return 0;
}