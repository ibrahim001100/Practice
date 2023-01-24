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
    for (int i=1 ; i<=n ; i++)
    {
        fprintf(outputFile,"%d ",i);
    }
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
