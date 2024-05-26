#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int a, b, c;
    scanf ("%d", &a);
    scanf ("%d", &b);
    scanf ("%d", &c);
    printf ("a = %d\n", a);
    printf ("b = %d\n", b);
    printf ("c = %d\n", c);
    if (a + b == c)
        printf ("True");
    else
        printf ("False");
    return 0;
}