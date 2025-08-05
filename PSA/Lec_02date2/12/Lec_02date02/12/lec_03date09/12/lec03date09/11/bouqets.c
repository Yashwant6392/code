#include <stdio.h>

int main() {
    // Example input values
    int size = 8;
    int bloomDays[] = {7,7,7,7,13,11,12,7};
    int m ,k;
    printf("enter no. of bouquets to make:\n");
    scanf("%d",&m);
    printf("no. of flower required to make one bouquet:\n");
    scanf("%d",&k);

    if (m * k > size) {
        printf("It is not possible to make %d bouquets with %d flowers each.\n", m, k);
        return 0;
    }

    int maxDay = 0;
    for (int i = 0; i < size; i++) {
        if (bloomDays[i] > maxDay) {
            maxDay = bloomDays[i];
        }
    }

    for (int day = 1; day <= maxDay; day++) {
        int bouquets = 0;
        int flowers = 0;

        for (int i = 0; i < size; i++) {
            if (bloomDays[i] <= day) {
                flowers++;
                if (flowers == k) {
                    bouquets++;
                    flowers = 0;
                }
            } else {
                flowers = 0;
            }
        }

        if (bouquets >= m) {
            printf("Minimum number of days required: %d\n", day);
            return 0;
        }
    }

    printf("It is not possible to make %d bouquets with %d flowers each.\n", m, k);
    return 0;
}
