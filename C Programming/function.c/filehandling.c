#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp1, *fp2;
    char ch;
    fp1 = fopen("record.txt", "r");
    fp2 = fopen("copy.txt", "w");
    if (fp1 == NULL && fp2 == NULL)
    {
        printf("file could not be opened...");
        exit(0);
    }
    while ((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, fp2);
    }
    printf("file copied successfull:  ");
    fclose(fp1);
    fclose(fp2);
    printf("\n\n content of copy.txt.....");
    fp2 = fopen("copy.txt", "r");
    while (!feof(fp2))
    {
        ch = getc(fp2);
        printf("%c", ch);
    }
    fclose(fp2);
    return 0;
}
