#include <stdio.h>

void special_lower_to_upper(char str[])
{
    int i;
    for (i=0 ; i<strlen(str) ; i++)
    {
        if (str[i]%2==0)
        {
            str[i]-=32;
        }
    }
    puts(str);
}
int main()
{
    char str[100];
    gets(str);
    special_lower_to_upper(str);
    return 0;
}