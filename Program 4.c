#include <stdio.h>

int main() {
    double x, y;
    
    printf("Enter the value of x: ");
    scanf("%ld", &x);
    printf("Enter the value of y: ");
    scanf("%ld", &y);
    
    if (x > 0 && y > 0) {
        printf("The point is in the First quadrant.");
    } 
    else if (x < 0 && y > 0) {
        printf("The point is in the Second quadrant.");
    } 
    else if (x < 0 && y < 0) {
        printf("The point is in the Third quadrant.");
    } 
    else if (x > 0 && y < 0) {
        printf("The point is in the Fourth quadrant.");
    } 
    else if (x == 0 && y > 0) {
        printf("The point lies on the Y-axis.");
    } 
    else if (y == 0 && x > 0) {
        printf("The point lies on the X-axis.");
    } 
    else {
        printf("The point is at the Origin.");
    }

    return 0;
}