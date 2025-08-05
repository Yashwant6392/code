#include<stdio.h>
#include<string.h>
typedef struct employee
{
    int id;
    char name[20];
    char depart[10];
    int salary;
}EMP;
int main()
{
    EMP arr[100];
    int i,n,salary_slab;
    char dp[20];
    printf("enter no. of employee ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n enter id ");
        scanf("%d",&arr[i].id);
        fflush(stdin);
        printf("\n enter name ");
        gets(arr[i].name);
        printf("\n enter department");
        gets(arr[i].depart);
        printf("\nenter salary ");
        scanf("%d",&arr[i].salary);
    }
    fflush(stdin);
    printf("\nenter salary of employee that you want ");
    scanf("%d",&salary_slab);
    printf("\nenter department that you want ");
    gets(dp);
    for(i=0;i<n;i++)
    {
        if((strcmpi(arr[i].depart,dp)==0) && (arr[i].salary>=salary_slab));
        printf("\n%d  %s  %s",arr[i].id,arr[i].name,arr[i].depart);

    }
    return 0;
}
