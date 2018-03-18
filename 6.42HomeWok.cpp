#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>
using namespace std
double distanceCalc(double x1, double y1, double x2, double y2)
{
    double a;
    double b;
    double c;
    b = x1-x2;
    c = y1-y2 ;
    a = pow(((pow((b),2)+ pow((c),2))),.5);

    return a;
}


int main()
{
    cout << "(1,-4) and (0,-1) = "<< endl;

    cout<<distanceCalc(1,-4,0,-1);

    return 0;
}
