#include<stdio.h>
typedef struct student
{
    int rollnumber;
    char name[20];
    char branch[10];
    int marks;
}STUD;
int main()
{
    STUD arr[100];
    int n,i,index=0,max,sum=0;
    printf("enter no. of student:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n enter roll no. ");
        scanf("%d",&arr[i].rollnumber);
        fflush(stdin);
        printf("\n enter name ");
        gets(arr[i].name);
        printf("\n enter branch ");
        gets(arr[i].branch);
        printf("\n enter marks ");
        scanf("%d",&arr[i].marks);
    }
    max=arr[0].marks;
    for(i=0;i<n;i++)
    {
        if(arr[i].marks>=75)
        {
            printf("\n%d\t%s\t%s\t%d",arr[i].rollnumber,arr[i].name,arr[i].branch,arr[i].marks);
        }

    }
    return 0;

}

