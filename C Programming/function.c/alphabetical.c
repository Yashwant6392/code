#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j;
    char stduents[50][100],temp[100];

    printf("enter no. of stduents\n");
    scanf("%d",&n);
    fflush(stdin);
    for(i=0;i<n;i++)
    {
        puts("\nenter name");
        gets(stduents[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(strcmpi(stduents[j],stduents[j+1])>0)
            {
                strcpy(temp,stduents[j]);
                strcpy(stduents[j],stduents[j+1]);
                strcpy(stduents[j+1],temp);
            }
        }
    }
    printf("sorted array:\n");
    for(i=0;i<n;i++)
    {
        puts(stduents[i]);
    }
    return 0;

}