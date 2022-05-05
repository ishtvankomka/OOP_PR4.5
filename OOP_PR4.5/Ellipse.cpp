#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
#include <cmath>
#include "Ellipse.hpp"
using namespace std;

Ellipse::Ellipse(void)
{
    x = 0;
    a = 0;
    b = 0;
}

Ellipse::Ellipse(double n1, double n2, double n3)
{
    x = n1;
    a = n2;
    b = n3;
}

Ellipse::~Ellipse(void)
{}

double Ellipse::f_x()
{
    double y = b / a * sqrt(a * a - x * x);
    return y;
}

void Ellipse::Display()
{
    double y = f_x();
    if (isnan(y))
    {
        cout << "The point is not belong the function" << endl;
    }
    else
    {
        string str = to_string(y);
        cout << "y = " << str << endl;
    }
}

