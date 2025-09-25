//simple C program (Hello World)
/*
Name :Rodgers Kilongosi
Reg  :CT100/G/26245/25
Description :Volume and surface area of cylinderj
*/
#include <stdio.h>
#include <math.h>  // Needed for M_PI and pow()

int main() {
    double radius, height;
    double volume, surfaceArea;

    // Prompt user for input
    printf("Enter the radius of the cylinder: ");
    scanf("%lf", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%lf", &height);

    // Calculate volume and surface area
    volume = M_PI * pow(radius, 2) * height;
    surfaceArea = 2 * M_PI * pow(radius, 2) + 2 * M_PI * radius * height;

    // Display results
    printf("\nVolume of the cylinder = %.2lf\n", volume);
    printf("Surface area of the cylinder = %.2lf\n", surfaceArea);

    return 0;
}
