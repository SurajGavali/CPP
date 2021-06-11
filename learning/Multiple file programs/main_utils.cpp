#include"main_utils.h"

double rectangle_area(double a, double b){

    return a*b;
}

double rectangle_area(Rectangle rec){

    return rec.length * rec.width;
}
//function overloading
double rectangle_area(double a){

    return a*a;
}