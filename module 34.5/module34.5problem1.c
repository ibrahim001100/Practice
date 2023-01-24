#include <stdio.h>
int main()
{
    FILE *inputFile = fopen("input.txt","r");
    FILE *outputFile = fopen("output.txt","w");

    if (inputFile==NULL)
    {
        fprintf(outputFile,"No File Found\n");
        return 0;
    }

    while(1)
    {
        char ch = fgetc(inputFile);
        if (ch==EOF)
            break;
        putc(ch,outputFile);
    }
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
