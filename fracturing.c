#include <stdio.h>
#include <math.h>
#define PI 3.14159

double askForUserInput(int *x1, int *x2, int *y1, int *y2);
double calculateDistance(int x1, int x2, int y1, int y2);
double calculatePerimeter(double distance, int x1, int x2, int y1, int y2);
double calculateArea(double distance, int x1, int x2, int y1, int y2);
double calculateWidth(int x1, int x2, int y1, int y2);
double calculateHeight(int x1, int x2, int y1, int y2);

int main(int argc, char **argv) {

    int x1, x2, y1, y2;

    askForUserInput(&x1, &x2, &y1, &y2);
    double distance = calculateDistance (x1, x2, y1, y2);
    calculatePerimeter (distance, x1, x2, y1, y2);
    calculateArea (distance, x1, x2, y1, y2);
    calculateWidth (x1, x2, y1, y2);
    calculateHeight (x1, x2, y1, y2);
    return 0;
}

double askForUserInput(int *x1, int *x2, int *y1, int *y2) {
    printf("Enter x1: ");
    scanf("%d", x1);
    printf("Enter y1: ");
    scanf("%d", y1);
    printf("Enter x2: ");
    scanf("%d", x2);
    printf("Enter y2: ");         
    scanf("%d", y2);   
}

double calculateDistance(int x1, int x2, int y1, int y2) {
    double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    printf("Point #1 entered: x1 = %d; y1 = %d \n", x1, y1);
    printf("Point #2 entered: x2 = %d; y2 = %d \n", x2, y2);
    printf ("The distance between the two points is: %.2f\n", distance);
    return distance;
}

double calculatePerimeter(double distance, int x1, int x2, int y1, int y2) {
    double perimeter = (PI * distance);
    printf("Point #1 entered: x1 = %d; y1 = %d \n", x1, y1);
    printf("Point #2 entered: x2 = %d; y2 = %d \n", x2, y2);
    printf("The perimeter of the city encompassed by your request is: %.2f\n", perimeter);
    return perimeter;
}

double calculateArea(double distance, int x1, int x2, int y1, int y2) {
    double radius = distance/2;
    double area = (distance/2) * radius;
    printf("Point #1 entered: x1 = %d; y1 = %d \n", x1, y1);
    printf("Point #2 entered: x2 = %d; y2 = %d \n", x2, y2);
    printf("The area of the city encompassed by your request is %.2f\n", area);
    return area;
}

double calculateWidth(int x1, int x2, int y1, int y2) {
    double width = fabs(x2 - x1);
    printf("Point #1 entered: x1 = %d; y1 = %d \n", x1, y1);
    printf("Point #2 entered: x2 = %d; y2 = %d \n", x2, y2);
    printf("The width of the city encompassed by your request is %.2f\n", width);
    return width;
}

double calculateHeight(int x1, int x2, int y1, int y2) {
    double height = fabs(y2-y1);
    printf("Point #1 entered: x1 = %d; y1 = %d \n", x1, y1);
    printf("Point #2 entered: x2 = %d; y2 = %d \n", x2, y2);
    printf("The height of the city encompassed by your request is %.2f\n", height);
    return height;
}