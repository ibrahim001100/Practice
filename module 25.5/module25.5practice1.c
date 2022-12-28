#include<stdio.h>

int withoutk(int n, int input[], int k);
int main()
{
    int n,i,k;
    scanf("%d",&n);

    int input[n+1];
    for (i=1 ; i<=n ; i++)
    {
        scanf("%d",&input[i]);
    }

    scanf("%d",&k);

    int ans = withoutk(n,input,k);
    printf("%d\n",ans);
    return 0;
}

int withoutk(int n, int input[], int k)
{
    int i,count=0;
    for (i=1 ; i<=n ; i++)
    {
        if (input[i]!=k)
            count++;
    }
    return count;
}