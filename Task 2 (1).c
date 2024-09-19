#include <stdio.h>
#include <math.h>

#define GRAVITY 9.81

double degrees_to_radians(double degrees) {
    return degrees * (M_PI / 180.0);
}

double calculate_time_of_flight(double initial_velocity, double angle_in_degrees) {
    double angle_in_radians = degrees_to_radians(angle_in_degrees);
    return (2 * initial_velocity * sin(angle_in_radians)) / GRAVITY;
}

double calculate_max_height(double initial_velocity, double angle_in_degrees) {
    double angle_in_radians = degrees_to_radians(angle_in_degrees);
    return (pow(initial_velocity, 2) * pow(sin(angle_in_radians), 2)) / (2 * GRAVITY);
}

double calculate_range(double initial_velocity, double angle_in_degrees) {
    double angle_in_radians = degrees_to_radians(angle_in_degrees);
    return (pow(initial_velocity, 2) * sin(2 * angle_in_radians)) / GRAVITY;
}

int main() {
    double velocity, angle;

    printf("Enter the initial velocity (m/s): ");
    scanf("%lf", &velocity);
    printf("Enter the angle of projection (degrees): ");
    scanf("%lf", &angle);

    double time_of_flight = calculate_time_of_flight(velocity, angle);
    double max_height = calculate_max_height(velocity, angle);
    double range = calculate_range(velocity, angle);

    printf("Time of Flight: %.2f seconds\n", time_of_flight);
    printf("Maximum Height: %.2f meters\n", max_height);
    printf("Range: %.2f meters\n", range);

    return 0;
}
