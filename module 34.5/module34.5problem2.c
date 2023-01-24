#include <stdio.h>
void solve(int i, int n)
{
    FILE *outputFile = fopen("output.txt","w");
    if (i>n)
        return 0;
    fprintf(outputFile,"%d ",i);
    solve(i+1, n);
    return 0;
}
int main()
{
    FILE *inputFile = fopen("input.txt","r");
    int n;
    fscanf(inputFile,"%d",&n);
    solve(1,n);
    return 0;
}
//console a print korle kaj kore, but file a print korle kaj kore na keno
