//
// Created by uguru on 22.12.2021.
//

#include "cycles.h"
#include <clocale>
#include <iostream>
#include "math.h"

using namespace  std;


cycles::cycles(double x,double b, double c)
{
    // public: нет смысла дублировать .h
    variable = x;
    DeadEnd = b;
    step = c;
    N = abs(DeadEnd -variable) / step;
    cout << "Обьект класса cycles был создан" << endl;
}
cycles::~cycles()
{
    cout << "Обьект класса cycles был уничтожен " << endl;
}

double cycles::firstSolution()

        {   double x = variable ;
             for (int i = 0; i<= N; i++)
    {
    cout << i  <<"\t первый метод \t"<< x + cos(x - 5) << endl;
        x += step;
        }
          return 0 ; } 

double cycles::secondSolution() {
    double x = variable;
    int i =0;
    while ( i <= N ){
        
        cout << i <<"\t второй метод \t" << x + cos(x - 5) << endl;
        i++;
    }
    return 0;
}

double cycles::thirdSolution() {
    int i;
    double x = variable;
    do
    {  
        cout << i << "\t третий метод \t"<< x + cos(x - 5) << endl;
        i++;
    }
    while (i <= N);
    return 0 ;
}

