#include <stdio.h>

int main() {
    int a, sum = 0, count = 0;

    printf("Enter a number: ");
    scanf("%d", &a);

    int temp = a; 
    while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
        count++;
    }

    printf("Number of digits: %d\n", count);
    printf("Sum of digits: %d\n", sum);

    return 0;
}