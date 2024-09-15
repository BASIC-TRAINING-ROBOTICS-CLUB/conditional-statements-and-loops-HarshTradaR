#include <stdio.h>
#include <math.h>

int main() {
    float int_velocity,time1, acceleration,displacement;
    printf("Enter int velocity(m/s):");
    scanf("%f",&int_velocity);
    printf("Enter time(s): ");
    scanf("%f",&time1);
    printf("Enter acceleration (m/s^2): ");
    scanf("%f",&acceleration);
    displacement=(int_velocity * time1)+(0.5 * acceleration * time1* time1);
    printf("Displacement after %.2f seconds : %2f meters\n", time1, displacement);
    
    

    return 0;
}