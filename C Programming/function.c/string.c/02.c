#include<stdio.h>
#include<string.h>
int mystrlen(char*s)
{
    int l=0;
    while(s[l]!='\0')
    {
        l++;
    }
    return l;
}
int main()
{
    char s[100];
    printf("enter string :");
    gets(s);
    //strlen(s);
    printf("%d",mystrlen(s));
    return 0;

}