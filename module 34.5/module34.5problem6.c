#include <stdio.h>
int main()
{
    FILE *inputFile = fopen("input.txt","r");
    FILE *outputFile = fopen("output.txt","a");
    if (inputFile==NULL)
    {
        fprintf(outputFile,"No file found\n");
        return 0;
    }
    int year;
    fscanf(inputFile,"%d",&year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        fprintf(outputFile,"%d-->YES\n",year);
    }
    else
    {
        fprintf(outputFile,"%d-->NO\n",year);
    }
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}

