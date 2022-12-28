#include <stdio.h>
int fun(int n)
{
    if (n>0)
        return n+fun(n-1);
    else
        return 0;
}
int main()
{
    int x;
    scanf("%d",&x);
    printf("%d\n",fun(x));
    return 0;
}