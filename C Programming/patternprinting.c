// #include<stdio.h>
// int main()
// {
//     int i,n,j;
//     printf("enter number");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=n;j++)
//         {
//             printf("*");

//         }
//         printf("\n");
//     }
//     return 0;

// }

// #include<stdio.h>
// int main()                     //*
// {                              //**
//     int i,n,j;                 //***
//     printf("enter number");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             printf("*");

//         }
//         printf("\n");
//     }
//     return 0;

// }

// #include<stdio.h>
// int main()
// {
//     int i,n,j;                 //***
//     printf("enter number");    //**
//     scanf("%d",&n);            //*
//     for(i=n;i>=1;i--)
//     {
//         for(j=1;j<=i;j++)
//         {
//             printf("*");

//         }
//         printf("\n");
//     }
//     return 0;

// }

// #include<stdio.h>
// int main()
// {                                 //    *
//     int i,n,j,k;                  //   **
//     printf("enter number");       //  ***
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         for(k=1;k<=n-i;k++)
//         {
//             printf(" ");
//         }
//         for(j=1;j<=i;j++)
//         {
//             printf("*");

//         }
//         printf("\n");
//     }
//     return 0;

// }

// #include<stdio.h>
// int main()
// {                              //***
//     int k,i,n,j;               // **
//     printf("enter number");    //  *
//     scanf("%d",&n);
//     for(i=n;i>=1;i--)
//     {
//         for(k=1;k<=n-i;k++)
//         {
//             printf(" ");
//         }
//         for(j=1;j<=i;j++)
//         {
//             printf("*");

//         }
//         printf("\n");
//     }
//     return 0;

// }

// #include<stdio.h>
// int main()
// {                                  //    1
//     int k,i,n,j;                   //   12
//     printf("enter number");       //   123
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         for(k=1;k<=n-i;k++)
//         {
//             printf(" ");
//         }
//         for(j=1;j<=i;j++)
//         {
//             printf("%d",j);

//         }
//         printf("\n");
//     }
//     return 0;

// }

// #include<stdio.h>
// int main()
// {                                  //    1
//     int k,count,i,n,j;             //   23
//     printf("enter number");       //   345
//     scanf("%d",&n);               //  4567
//     for(i=1;i<=n;i++)
//     {
//         for(k=1;k<=n-i;k++)
//         {
//             printf(" ");
//         }
//         count=i;
//         for(j=1;j<=i;j++)
//         {
//             printf("%d",count++);

//         }
//         printf("\n");
//     }
//     return 0;

// }

// #include<stdio.h>
// int main()
// {                                  //    A
//     int k,i,n,j;                   //   AB
//     printf("enter number");       //   ABC
//     scanf("%d",&n);               //  ABCD
//     for(i=1;i<=n;i++)
//     {
//         for(k=1;k<=n-i;k++)
//         {
//             printf(" ");
//         }
//         for(j=1;j<=i;j++)
//         {
//             printf("%c",64+j);

//         }
//         printf("\n");
//     }
//     return 0;

// }

// #include<stdio.h>
// int main()
// {                                  //    A
//     int k,i,n,j;                   //   AB
//     printf("enter number");       //   ABC
//     scanf("%d",&n);               //  ABCD
//     for(i=1;i<=n;i++)
//     {
//         for(k=1;k<=n-i;k++)
//         {
//             printf(" ");
//         }
//         char ch='A';
//         for(j=1;j<=i;j++)
//         {
//             printf("%c",);

//         }
//         printf("\n");
//     }
//     return 0;

// }

// #include<stdio.h>
// int main()
// {                              //      *
//     int k,i,n,j;               //     ***
//     printf("enter number");    //    *****
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         for(k=1;k<=n-i;k++)
//         {
//             printf(" ");
//         }
//         for(j=1;j<=(2*i-1);j++)
//         {
//             printf("*");

//         }
//         printf("\n");
//     }
//     return 0;

// }

// #include<stdio.h>
// int main()
// {
//     int k,i,n,t,j;
//     printf("enter number");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         for(k=1;k<=n-i;k++)
//         {
//             printf(" ");
//         }
//         for(j=1;j<=i;j++)
//         {
//             printf("%d",j);

//         }
//         for(t=i-1;t>=1;t--)
//         {
//             printf("%d",t);
//         }
//         printf("\n");
//     }
//     return 0;

// }

// #include <stdio.h>
// int main()
// {                           //    1
//     int k, i, n, t, j;      //   12
//     printf("enter number"); //   123
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         for (k = 1; k <= n - i; k++)
//         {
//             printf(" ");
//         }
//         for (j = 1; j <= i; j++)
//         {
//             printf("%d", j);
//         }
//         for (t = i - 1; t >= 1; t--)
//         {
//             printf("%d", t);
//         }
//         printf("\n");
//     }

//     for (i = n - 1; i >= 1; i--)
//     {
//         for (k = 1; k <= n - i; k++)
//         {
//             printf(" ");
//         }
//         for (j = 1; j <= i; j++)
//         {
//             printf("%d", j);
//         }
//         for (t = i - 1; t >= 1; t--)
//         {
//             printf("%d", t);
//         }
//         printf("\n");
//     }
// }

#include <stdio.h>
int main()
{
    int i, n,k, j;
    char count='A';           
    printf("enter number");
    scanf("%d", &n);        
    for (i = 1; i<=n; i++)
    {
        for(k=1;k<=n-i;k++)
        {
            printf(" ");

        }

        for (j = 1; j <= i; j++)
        {
            printf("%c",count++);
        }
        printf("\n");
    }
    return 0;
}



// #include <stdio.h>
// int main()
// {
//     int i, n, j;            
//     printf("enter number"); 
//     scanf("%d", &n);        
//     for (i = n; i >= 1; i--)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

