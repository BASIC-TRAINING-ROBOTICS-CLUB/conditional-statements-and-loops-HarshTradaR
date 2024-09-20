#include <stdio.h>
#include <math.h>

#define Gravity 9.81

void projectile_motion(double initial_velocity, double angle, double *time_of_flight, double *max_height, double *range) {
 
    double angle_radian = angle * (3.14 / 180.0);
    
 
    *time_of_flight = (2 * initial_velocity * sin(angle_radian)) / Gravity;
    
    
    *max_height = (initial_velocity * initial_velocity * sin(angle_radian) * sin(angle_radian)) / (2 * Gravity);
    

    *range = (initial_velocity * initial_velocity * sin(2 * angle_radian)) / Gravity;
}

int main() {
    double initial_velocity = 510;
    double angle = 72.0;   
    double time_of_flight, max_height, range;
    
    projectile_motion(initial_velocity, angle, &time_of_flight, &max_height, &range);
    
    printf("Time of Flight: %.2f s\n", time_of_flight);
    printf("Maximum Height: %.2f m\n", max_height);
    printf("Range: %.2f m\n", range);
    
return 0;
}
