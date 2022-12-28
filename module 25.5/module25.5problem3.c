#include <stdio.h>

void costCalculate(char str[]);
int main()
{
    char str[100];
    gets(str);

    costCalculate(str);
    return 0;
}

void costCalculate(char str[])
{
    int i=0, ans=0;

    while(str[i]!='\0')
    {
        str[i]=str[i]-'a'+1;
        ans+=str[i];
        i++;
    }

    //printf("%d\n",ans);
    int count=0, flag=1;
    while(ans>1)
    {
        if (ans%2==0)
        {
            ans/=2;
            count++;
        }
        else
        {
            flag=0;
            break;
        }
    }
    if (flag==1)
        printf("YES\ncost=2^%d",count);
    else
        printf("NO\n");
    return;
}