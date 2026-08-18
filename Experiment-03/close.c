#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("sample.txt", "w");

    if (fp == NULL)
    {
        printf("File Opening Failed\n");
        return 1;
    }

    printf("File Opened Successfully\n");

    fprintf(fp, "Operating Systems Lab");

    fclose(fp);

    printf("File Closed Successfully\n");

    return 0;
}
