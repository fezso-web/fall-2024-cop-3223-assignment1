#include <stdio.h>
#include <math.h>
#define PI  3.14159;

double calculateDistanceFormula(double x1, double y1, double x2, double y2)
{

    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

}
void askForUserInput(double* x, double* y, int pointNumber) {
    printf("Enter Point #%d (x y): ", pointNumber);
    scanf("%lf %lf", x, y);
}
void printPoint(double x, double y, int pointNumber)
{
    printf("Point #%d entered: x%d = %.2lf; y%d = %.2lf\n", pointNumber,pointNumber, x, pointNumber,y);

}

double calculateDistance()
{
    double x1, y1, x2, y2, distance;
    
    //gets Point 1 from the User

    askForUserInput(&x1, &y1, 1);
    
    //gets Point 2 from the User

    askForUserInput(&x2, &y2, 2);
    
    
    //calculates distance between the two points
                
    distance = calculateDistanceFormula(x1, y1, x2, y2);

    //Prints the user's points and the distance between them.
    printPoint(x1, y1, 1);
    printPoint(x2, y2, 2);
    printf("The distance between the two points is %.2lf\n", distance);

    return distance;
    

}

double calculatePerimeter()
{
    
    double x1, y1, x2,y2, perimeter;

    //gets Point 1 from the User

    askForUserInput(&x1, &y1, 1);
    
    //gets Point 2 from the User

    askForUserInput(&x2, &y2, 2);
    
    //calculates perimeter between the two points
    perimeter = calculateDistanceFormula(x1, y1, x2,y2);
    
    //Prints the user's points and the perimeter between them.

    printPoint(1, x1, y1);
    printPoint(1, x2, y2);
    printf("The perimeter of the city encompassed by your request is %lf\n", perimeter);;

    return 3;
}

double calculateArea()
{
    double x1, y1, x2, y2, area;
    //gets Point 1 from the User

    askForUserInput(&x1, &y1, 1);
    
    //gets Point 2 from the User

    askForUserInput(&x2, &y2, 2);

    area =  calculateDistanceFormula(x1, y1, x2, y2);
    
    printPoint(1, x1, y1);
    printPoint(1, x2, y2);

    printf("The area of the city encompassed by your request is %.2lf\n", area);

    return 1;

}

double calculateWidth()
{

    double x1, y1, x2, y2, width;
    //gets Point 1 from the User

    askForUserInput(&x1, &y1, 1);
    
    //gets Point 2 from the User

    askForUserInput(&x2, &y2, 2);

    width =  fabs(x2-x1);
    
    printPoint(1, x1, y1);
    printPoint(1, x2, y2);

    printf("The width of the city encompassed by your request is %.2lf", width);

    return 0.5;



}

double calculateHeight()
{
    double x1, y1, x2, y2, height;
    //gets Point 1 from the User

    askForUserInput(&x1, &y1, 1);
    
    //gets Point 2 from the User

    askForUserInput(&x2, &y2, 2);

    height =  fabs(y2-y1);
    
    printPoint(1, x1, y1);
    printPoint(1, x2, y2);

    printf("The height of the city encompassed by your request is %.2lf", height);

    return 0.5;

}



int main(int argc, char** argv) 
{
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    
    return 0;
}