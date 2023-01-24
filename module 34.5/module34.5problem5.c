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
    int m=n;
    while(n--)
    {
        for (int i=n ; i>=1 ; i--)
        {
            fprintf(outputFile," ");
        }
        for (int j=m ; j>=1 ; j--)
        {
            fprintf(outputFile,"#");
        }
        fprintf(outputFile,"\n");
    }
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
