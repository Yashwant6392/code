#include<stdio.h>
struct date
{
    int day;
    int month;
    int year;
};
int main()
{
    struct date arr[20],d1,d2;
    printf("enter first date \n");
    scanf("%d %d %d",&d1.day,&d1.month,&d1.year);
    printf("enter second date ");
    scanf("%d %d %d",&d2.day,&d2.month,&d2.year);
    printf("\nchecking equality of structure objects");
    if(d1.day==d2.day&&d1.month==d2.month&&d1.year==d2.year)
    printf("\n both date are same");
    else
    printf("\n date are not same");
    return 0;

}
