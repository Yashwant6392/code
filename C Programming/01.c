#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    //scanf("%s", str);  
    gets(str);
    printf("You entered: %s\n", str);
    return 0;
}