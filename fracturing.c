//********************************************************
// fracturing.c
// Author: Fez Sorathia
//UCF Email: fe584746@ucf.edu
// Date: 9/8/2024
// Class: COP 3223, Professor Parra
// Purpose: This program makes code more organized
// and less repetitive. It also teaches us how to 
//isolate problems in an efficient manner.
// Input: None
//
// Output: (to the command line) A series of outputs
//relating to the calculation methods created by me.
// //********************************************************

// Header file for input output functions
#include <stdio.h>
#include <math.h>

#define PI  3.14159


double diameterToRadius(double diameter)
{

return diameter / 2;

}

double calculateDistanceFormula(double x1, double y1, double x2, double y2)
{

    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

}

void askForUserInput(double* x1, double* y1, double* x2, double* y2) {
    
    printf("Enter Point #%d (x y): ", 1);
    scanf("%lf %lf", x1, y1);

    printf("Enter Point #%d (x y): ", 2);
    scanf("%lf %lf", x2, y2);

}

void printPoint(double x1, double y1, double x2, double y2)
{

    printf("Point #%d entered: x%d = %.2lf; y%d = %.2lf\n", 1,1, x1, 1,y1);

    printf("Point #%d entered: x%d = %.2lf; y%d = %.2lf\n", 2,2, x2, 2,y2);
}

double calculateDistance()
{

    double x1, y1, x2, y2, distance;
    
    //gets Points from the User

    askForUserInput(&x1, &y1, &x2, &y2);
    
    //calculates distance between the two points
                
    distance = calculateDistanceFormula(x1, y1, x2, y2);

    //Prints the user's points and the distance between them.
    printPoint(x1, y1, x2, y2);

    printf("The distance between the two points is %.2lf\n", distance);

    return distance;
    
}

double calculatePerimeter()
{
    
    double x1, y1, x2,y2, perimeter;

    //gets Points from the User

    askForUserInput(&x1, &y1, &x2, &y2);
    
    //calculates perimeter between the two points
    
    perimeter = PI * calculateDistanceFormula(x1, y1, x2,y2);
    
    //Prints the user's points and the perimeter between them.

    printPoint(x1, y1, x2, y2);

    printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);;

    return 3;

}

double calculateArea()
{

    double x1, y1, x2, y2, area;
    
    //gets Points from the User

    askForUserInput(&x1, &y1, &x2, &y2);

    //calculates area from given points; pi*r^2

    area = PI * pow(diameterToRadius(calculateDistanceFormula(x1, y1, x2, y2)), 2);
    
    printPoint(x1, y1, x2, y2);

    printf("The area of the city encompassed by your request is %.2lf\n", area);

    return 1;

}

double calculateWidth()
{

    double x1, y1, x2, y2, width;

    //gets Points from the User

    askForUserInput(&x1, &y1, &x2, &y2);

    //calculates width from user's points

    width =  fabs(x2-x1);
    
    printPoint(x1, y1, x2, y2);

    printf("The width of the city encompassed by your request is %.2lf\n", width);

    return 0.5;

}

double calculateHeight()
{
    
    double x1, y1, x2, y2, height;

   //gets Points from the User

    askForUserInput(&x1, &y1, &x2, &y2);

    //calculates height from user's points

    height =  fabs(y2-y1);
    
    printPoint(x1, y1, x2, y2);

    printf("The height of the city encompassed by your request is %.2lf\n", height);

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