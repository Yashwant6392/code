#include<stdio.h>
#include<stdlib.h>
int main()
{
    char name[20],dept[10];
    int salary,id,i,n;
    FILE *fp;
    fp=fopen("employee.txt","w");
    printf("enter no. of employee:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("enter id: ");
        scanf("%d",&id);
        fflush(stdin);
        printf("\nEnter name: ");
        gets(name);
        printf("\n enter department: ");
        gets(dept);
        printf("\n enter salary: ");
        scanf("%d",&salary);
        fprintf(fp,"%d\t%s\t%s\t%d\n",id,name,dept,salary);
    }
    printf("\nrecord saved successfully\n");
    fclose(fp);
    printf("\n\n Data of the file:\n");
    fp=fopen("employee.txt","r");
    while(!feof(fp))
    {
        fscanf(fp,"%d\t%s\t%s\t%d\n",&id,name,dept,&salary);
        printf("\n%d\t%s\t%s\t%d\n",id,name,dept,salary);
    }
    fclose(fp);
    return 0;
    
}