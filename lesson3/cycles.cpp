//
// Created by uguru on 22.12.2021.
//

#include "cycles.h"
#include <clocale>
#include <iostream>
#include "math.h"

using namespace  std;


cycles::cycles(double x,double b,c)
{
    // public: нет смысла дублировать .h
    variable = x;
    end = b;
    step = c;
    double i = 0;
    cout << "Обьект класса cycles был создан" << endl;
}
cycles::~cycles()
{
    cout << "Обьект класса cycles был уничтожен " << endl;
}

double cycles::firstSolution()

        {  for (i = variable; i<= end; i+= step)
    {
    cout << i << variable + cos(variable - 5) << endl;
        }
          return 0  }

double cycles::secondSolution() {
    while (variable < end ){
        cout << i << variable + cos(variable - 5) << endl;
    }
    return 0
}

double cycles::thirdSolution() {
    do
    {
        cout << i << variable + cos(variable - 5) << endl
        variable += step;
    }
    while (variable <= end);
    return 0
}

