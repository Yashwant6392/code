#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char str[200];
    char text[200];
    fp=fopen("message.txt","w");
    printf("enter the string");
    gets(str);
    fputs(str,fp);
    fclose(fp);
    fp=fopen("message.txt","r");
    while(!feof(fp))
    {
        fgets(text,15,fp);
        printf("%s\n",text);
    }
    fclose(fp);
    return 0;
}