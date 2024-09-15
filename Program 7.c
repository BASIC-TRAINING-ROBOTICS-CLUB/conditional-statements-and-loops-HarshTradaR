#include <stdio.h>

int main() {
    int a;
    
    printf("Enter The Year :");
    scanf("%d",&a);
    
    if (a > 2000) {
        if (a % 4 == 0) {
            printf("This is a leap year and it's after 2000.");
        } else {
            printf("This is not a leap year but it's after 2000.");
        }
    } else {
        printf("The year is not after 2000.\n");
    }

    return 0;
}
