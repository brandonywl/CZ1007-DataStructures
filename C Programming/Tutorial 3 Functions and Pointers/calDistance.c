/*
#include <stdio.h>
#include <math.h>

void inputXY(double *x1, double *y1, double *x2, double *y2);
void outputResult(double dist);
double calDistance1(double x1, double y1, double x2, double y2);
void calDistance2(double x1, double y1, double x2, double y2, double *dist);

// Accept 4 decimal values representing x1, x2, y1, y2. Calculate distance between the two points.
int main()
{
    double x1, y1, x2, y2, distance=-1;
    inputXY(&x1, &y1, &x2, &y2); // call by reference
    distance = calDistance1(x1, y1, x2, y2); // call by value
    printf("calDistance1(): ");
    outputResult(distance);
    calDistance2(x1, y1, x2, y2, &distance); // call by reference
    printf("calDistance2(): ");
    outputResult(distance); // call by value
    return 0;
}

// Just obtain and store. Call by reference
void inputXY(double *x1, double *y1, double *x2, double *y2)
{
    printf("Input x1 y1 x2 y2:\n");
    scanf("%lf %lf %lf %lf", x1, y1, x2, y2);
    return;
}

// Should be just print
void outputResult(double dist)
{
    printf("%.2lf\n", dist);
}

// Done by call by value
double calDistance1(double x1, double y1, double x2, double y2)
{
    // Doesn't matter what sign it is as it will be squared.
    double x = x1 - x2;
    double y = y1 - y2;
    return sqrt(x*x + y*y);
}

// Same as above, but by call by reference.
void calDistance2(double x1, double y1, double x2, double y2, double
*dist)
{
    double x = x1 - x2;
    double y = y1 - y2;
    *dist = sqrt(x*x + y*y);
}
*/
