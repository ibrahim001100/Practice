#include <stdio.h>
void sort(int N, int input[], int k)
{
    int i,j, max=input[1];
    for (i=2 ; i<=N ; i++)
    {
        if (input[i]>max)
        {
            max=input[i];
        }
    }
    int freq[max+1];
    for (i=1 ; i<=max ; i++)
    {
        freq[i]=0;
    }

    for (i=1 ; i<=N ; i++)
    {
        freq[input[i]]++;
    }

    int output[N+1],index=1;
    for (i=1 ; i<=max ; i++)
    {
        if (freq[i]==1)
        {
            output[index]=i;
            index++;
        }

        else if (freq[i]>1)
        {
            for (j=1 ; j<=freq[i] ; j++)
            {
                output[index]=i;
                index++;
            }
        }
    }
    printf("%dth largest element = %d\n",k,output[N-(k-1)]);
    printf("%dth smallest element = %d\n",k,output[k]);
    return;
}
int main()
{
    int N,i,k;
    scanf("%d",&N);
    int input[N+1];

    for (i=1 ; i<=N ; i++)
    {
        scanf("%d",&input[i]);
    }

    scanf("%d",&k);
    sort(N,input,k);
    return 0;
}