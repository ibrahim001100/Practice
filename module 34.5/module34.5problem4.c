#include <stdio.h>
int main()
{
    FILE *inputFile = fopen("input.txt","r");
    FILE *outputFile = fopen("output.txt","w");
    if (inputFile==NULL)
    {
        fprintf(outputFile,"No file found\n");
        return 0;
    }
    int n;
    fscanf(inputFile,"%d",&n);
    int a,rem,sum=0;
    for (int i=1 ; i<=n ; i++)
    {
        fscanf(inputFile,"%d",&a);
        rem=a%10;
        sum+=rem;
    }
    fprintf(outputFile,"Sum = %d",sum);
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
