 #include<stdio.h>
 #include<string.h>
// void mystrrev(char str[])
// {
//     int i,j;
//     char temp;
//     j=0;
//     while (str[j]!='\0')
//     {
//         j++;
//     }
//     j--;
//     i=0;
//     while (i<j)
//     {
//         temp=str[i];
//         str[i]=str[j];
//         str[j]=temp;
//         i++;
//         j--;
//     }
// }
// int main()
// {
//     char str[100],rev[100];
//     puts("enter the string:");
//     gets(str);
//     strcpy(rev,str);
//     mystrrev(rev);
//     if(strcmp(str,rev)==0)
//     puts("\nPalindrome:");
//     else
//     puts("\nNot palindrome:");
//     return 0;
// }

void mystrrev(char str[])
{
    int i,j;
    char temp;
    j=0;
    while(str[j]!='\0')
    {
        j++;
    }
    j--;
    i=0;
    while(i<j)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }

}

int main()
{
    char str[100],rev[100];
    puts("enter the string:");
    gets(str);
    strcpy(rev,str);
    mystrrev(rev);
    if(strcmp(str,rev)==0)
    puts("\nPalindrome:");
    else
    puts("\nNot palindrome:");
    return 0;
}
