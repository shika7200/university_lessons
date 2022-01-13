#include "formules.h"
#include <clocale>
#include <iostream>
#include "math.h" 
using namespace std;

formules::formules(float x, float a , float b, float c)
{
    
    X = x;
    A= a;
    B = b;
    C = c;
    cout << "Обьект класса formules был создан" << endl;
} 

formules::~formules()
{
    cout << "Обьект класса formules был уничтожен " << endl;
}


 float formules::y() // определение функции
{
    return 1.2* abs((X*X+B)/(pow(C,3)-pow(A,3))) + pow(pow(C,3)-(pow(A,3)),2);
};




float formules::z() {
    return atan(X*X+B);
};


