#include <stdio.h>

int main()
{
    int *p, *q, *r, s, a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    p = &a;
    q = &b;
    r = &c;
    s = *p + *q + *r;
    printf("Sum of numbers: %d\n",s);
    return 0;
}