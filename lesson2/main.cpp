//
// Created by uguru on 09.12.2021. 6 Вариант Шиве Георгий
//
#include <iostream>
#include <cmath>
#include <clocale>


using namespace std;

float Y(float a, float b, float c, float x) // определение функции
{
    return ((4,1*pow(a,3)*x - abs(b))*c )/pow((a+b),2);
};
float Z(float a, float b, float c) {
    return (pow(10, -2)* (a + b )/(pow(a,3)* b))  - exp(a+b);

};

int main() 	// основная программа

{
    setlocale(LC_ALL, “RUS”);
    float a, b, c, x, y, z, S;
    cout<<"Введите значения a, b, c, x: ";
    cin >> a >> b >> c >> x;
    if (( a+b == 0) || (pow(a,3)* b))
        // условие неопределенности
    {
        cout << "Возникла неопределенность, вычисления невозможны" << endl;
    }
    else
    {
        y = Y(a,b,c,x);		// вызов функций
        z = Z(a,b,c);
        cout << "Y = "<< y << endl;
        cout << "Z = "<< z << endl;
        S = y + z;
        cout << "S = " << S << endl;
    }
    return 0;
}
