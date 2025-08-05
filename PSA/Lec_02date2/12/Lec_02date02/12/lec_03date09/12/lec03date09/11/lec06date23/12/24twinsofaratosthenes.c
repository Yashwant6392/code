#include <stdio.h>
#include <stdbool.h>

void SieveOfEratosthenes(int n) {
    bool prime[n + 1];
    for (int i = 0; i <= n; i++) {
        prime[i] = true;
    }
    prime[0]=prime[1]=false;
    for (int p = 2; p*p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p) {
                prime[i] = false;
            }
        }
    }

    printf("Prime numbers up to %d\n", n);
    for (int p = 2; p <= n; p++) {
        if (prime[p]) {
            printf("%d ", p);
        }
    }
    printf("\n");
}
void twins(int n)
{
    bool prime[n];
    int count=0;
    for (int p= 2; p <= n - 2; p++) 
    {
        if (prime[p] && prime[p + 2]) 
        {
            printf("(%d, %d)\n", p, p + 2);
            count++;
        }

    }
    printf("Total number of twin prime pairs: %d\n",count);
}
int main()
{
    int n;
    printf("enter no of limits:\n");
    scanf("%d", &n);
    SieveOfEratosthenes(n);
    twins(n);
    return 0;
}


