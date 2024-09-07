#include <stdio.h>
#include <math.h>
#define PI 3.14159

double calculateDistance(int x1, int x2, int y1, int y2);
double calculatePerimeter(int x1, int x2, int y1, int y2);
double calculateArea(int x1, int x2, int y1, int y2);
double calculateWidth(int x1, int x2, int y1, int y2);
double calculateHeight(int x1, int x2, int y1, int y2);

int main(int argc, char **argv) {

    int x1, x2, y1, y2;


    printf("Enter x1: ");
    scanf("%d", &x1);
    printf("Enter y1: ");
    scanf("%d", &y1);
    printf("Enter x2: ");
    scanf("%d", &x2);
    printf("Enter y2: ");         
    scanf("%d", &y2);   
    printf("Point one is (%d, %d)\n", x1, y1);
    printf("Point two is (%d, %d)\n", x2, y2);

    calculateDistance (x1, x2, y1, y2);
    calculatePerimeter (x1, x2, y1, y2);
    calculateArea (x1, x2, y1, y2);
    calculateWidth (x1, x2, y1, y2);
    calculateHeight (x1, x2, y1, y2);
    return 0;
}

double calculateDistance(int x1, int x2, int y1, int y2) {
    double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    printf ("The distance between the two points is: %.2f\n", distance);
    return distance;
}

double calculatePerimeter(int x1, int x2, int y1, int y2) {
    double perimeter = (PI * calculateDistance(x1, x2, y1, y2));
    printf("The perimeter of the city encompassed by your request is: %.2f\n", perimeter);
    return perimeter;
}

double calculateArea(int x1, int x2, int y1, int y2) {
    double distance = calculateDistance(x1, x2, y1, y2);
    double radius = distance/2;
    double area = (distance/2) * radius;
    printf("The area of the city encompassed by your request is %.2f\n", area);
    return area;
}

double calculateWidth(int x1, int x2, int y1, int y2) {
    double width = fabs(x2 - x1);
    printf("The width of the city encompassed by your request is %.2f\n", width);
    return width;
}

double calculateHeight(int x1, int x2, int y1, int y2) {
    double height = fabs(y2-y1);
    printf("The height of the city encompassed by your request is %.2f\n", height);
    return height;
}