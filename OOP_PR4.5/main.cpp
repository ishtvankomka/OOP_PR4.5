#include <iostream>
#include <stdio.h>
#include "Function.hpp"
#include "Ellipse.hpp"
#include "Hyperbola.hpp"
#include <typeinfo>
#include <complex.h>

using namespace std;

int main()
{
    Function **ptr = new Function*[2];
    double x, a, b;
    
    cout << "set ellipse" << endl;
    cout << "x = "; cin >> x;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    ptr[0] = new Ellipse (x, a, b);
    dynamic_cast<Ellipse*>(ptr[0])->Display();
    cout << "Базовий клас: " << typeid(ptr[0]).name() <<endl;
    cout << "Похідний клас: " << typeid(*ptr[0]).name() <<endl <<endl;
    
    cout << "set hyperbola" << endl;
    cout << "x = "; cin >> x;
    cout << "a = "; cin >> a;
    while(a == 0)
    {
        cout << "a can't be 0!" << endl;
        cout << "a = "; cin >> a;
    }
    cout << "b = "; cin >> b;
    while(b == 0)
    {
        cout << "b can't be 0!" << endl;
        cout << "b = "; cin >> b;
    }
    ptr[1] = new Hyperbola (x, a, b);
    dynamic_cast<Hyperbola*>(ptr[1])->Display();
    cout << "Базовий клас: " << typeid(ptr[1]).name() <<endl;
    cout << "Похідний клас: " << typeid(*ptr[1]).name() <<endl <<endl;
    return 0;
}
