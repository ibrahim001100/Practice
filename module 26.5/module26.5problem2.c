#include <stdio.h>

void swap(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void sort(int n, int ara[])
{
    int i,j;
    for (i=1 ; i<=n ; i++)
    {
        for (j=1 ; j<n ; j++)
        {
            if (ara[j]>ara[j+1])
            {
                swap(&ara[j], &ara[j+1]);
            }
        }
    }
    for (i=1 ; i<=n ; i++)
    {
        printf("%d ",ara[i]);
    }
    return;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int ara[n+1];
    for (i=1 ; i<=n ; i++)
    {
        scanf("%d",&ara[i]);
    }
    sort(n,ara);
    return 0;
}