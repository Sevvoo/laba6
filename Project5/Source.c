#include <stdio.h>
#include <math.h>

// Function to calculate the length of a vector based on coordinates
double calculateVectorLength(int x1, int y1, int x2, int y2) {
    // Calculate the differences in coordinates along the axes
    int dx = x2 - x1;
    int dy = y2 - y1;
    // Calculate the sum of squares of the coordinate differences
    int square_sum = dx * dx + dy * dy;
    // Calculate the length of the vector by taking the square root of the sum
    double length = sqrt(square_sum);
    return length;
}

int main() {
    int x1, y1, x2, y2;
    printf("Enter the coordinates of the vector's start (x1, y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the coordinates of the vector's end (x2, y2): ");
    scanf("%d %d", &x2, &y2);

    // Calculate the length of the vector
    double vectorLength = calculateVectorLength(x1, y1, x2, y2);

    // Display the result
    printf("Vector length: %f\n", vectorLength);

    return 0;
}
