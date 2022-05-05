#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
#include <cmath>
#include "Hyperbola.hpp"
using namespace std;

Hyperbola::Hyperbola(void)
{
    x = 0;
    a = 0;
    b = 0;
}

Hyperbola::Hyperbola(double n1, double n2, double n3)
{
    x = n1;
    a = n2;
    b = n3;
}

Hyperbola::~Hyperbola(void)
{}

double Hyperbola::f_x()
{
    double y = b / a * x;
    return y;
}

void Hyperbola::Display()
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

