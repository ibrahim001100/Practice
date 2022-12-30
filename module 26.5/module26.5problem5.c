#include <stdio.h>
void conditionalSum(int N, int input[])
{
    int i, rem[N+1], summ=0;
    for (i=1 ; i<=N ; i++)
    {
        rem[i]=input[i]%10;
        if (rem[i]==0)
            summ+=input[i];
    }
    printf("%d",summ);
}
int main()
{
    int N,i;
    scanf("%d",&N);
    int input[N+1];
    for (i=1 ; i<=N ; i++)
    {
        scanf("%d",&input[i]);
    }
    conditionalSum(N,input);
    return 0;
}
