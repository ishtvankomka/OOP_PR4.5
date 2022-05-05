#pragma once
#include <iostream>
#include <stdio.h>
using namespace std;

class Function{
public:
    virtual double f_x() = 0;
    virtual void Display() = 0;
};
