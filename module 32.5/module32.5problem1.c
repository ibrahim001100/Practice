#include <stdio.h>
int solve(int n, int m)
{
    if (m==0)
        return 1;
    int s = solve(n,m-1);
    return s*n;
}
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int s = solve(n,m);
    printf("%d\n",s);
    return 0;
}