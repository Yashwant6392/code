#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    printf("enter no.");
    scanf("%d %d %d",&a,&b,&c);
    float r1,r2,d,real,img;
    d=(b*b)-4*a*c;
    if (d>0)
    {
        printf("\n real and distinct root");
        r1=(-b+sqrt(d))/2*a;
        r2=(-b-sqrt(d))/2*a;
        printf("%.2f %.2f",r1,r2);

    }
    else if (d==0)
    {
        r1=r2=-b/2*a;
        printf("%.2f %.2f",r1,r2);
        
    }
    else
    {
        printf("\n imaginary root");
        real=(float)(-b/2*a);
        img=(float)sqrt(-d)/2*a;
        printf("%.2f+%.2fi %.2f-%.2fi",real,img,real,img);
    }
    return 0;

    
    
}