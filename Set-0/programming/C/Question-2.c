#include <stdio.h>
#include <math.h>
#define M_PI 3.14


// void calculateCone(double radius, double height);
// void calculateSphere(double radius);
// void calculateCuboid(double length, double width, double height);

int main() {
    double radius, height, length, width;

    // Cone
    printf("Enter radius and height of the cone: ");
    scanf("%lf %lf", &radius, &height);
    calculateCone(radius, height);

    // Sphere
    printf("Enter radius of the sphere: ");
    scanf("%lf", &radius);
    calculateSphere(radius);

    // Cuboid
    printf("Enter length, width, and height of the cuboid: ");
    scanf("%lf %lf %lf", &length, &width, &height);
    calculateCuboid(length, width, height);
}

// Cone
void calculateCone(double radius, double height) {
    double slantHeight = sqrt(radius * radius + height * height);
    double surfaceArea = M_PI * radius * (radius + slantHeight);
    double volume = (M_PI * radius * radius * height) / 3;

    printf("Cone-\n");
    printf("Surface Area: %.2lf\n", surfaceArea);
    printf("Volume: %.2lf\n", volume);
}

// Sphere
void calculateSphere(double radius) {
    double surfaceArea = 4 * M_PI * radius * radius;
    double volume = (4.0 / 3) * M_PI * radius * radius * radius;

    printf("Sphere-\n");
    printf("Surface Area: %.2lf\n", surfaceArea);
    printf("Volume: %.2lf\n", volume);
}

// Cuboid
void calculateCuboid(double length, double width, double height) {
    double surfaceArea = 2 * (length * width + width * height + height * length);
    double volume = length * width * height;

    printf("Cuboid-\n");
    printf("Surface Area: %.2lf\n", surfaceArea);
    printf("Volume: %.2lf\n", volume);
}
