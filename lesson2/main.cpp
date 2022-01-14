//
// Created by uguru on 09.12.2021. 16 Вариант Шиве Георгий
//
#include "formules.h"
#include <iostream>
#include <cmath>
#include <clocale>
#include "conio.h"
using namespace std;

     
int main() {
    float a; float b ; float c; float x;
    setlocale(LC_ALL, "RUS");
    cout << "Введите значение x"<< endl;
    cin >> x;
    cout << "Введите значение a"<< endl;
    cin >> a;
    cout << "Введите значение b"<< endl;
    cin >> b;
    cout << "Введите значение c"<< endl;
    cin >> c;
    formules solution(x,a,b,c);

    if (( x*x+b == (sqrt(2)/2)) || ( x*x+b == -(sqrt(2)/2)) || (pow(c,3)-pow(a,3)) == 0)
        // условие неопределенности
    {
        cout << "Возникла неопределенность, вычисления невозможны" << endl;
    }
    else
    {
   cout << "y = \t "<< solution.y() << endl;
   cout << "z = \t " << solution.z() << endl;
   cout << "s = \t " << solution.s() << endl;
    }
    return 0;
}
