
/* студбилет 20516 - вариант 16 *\
 \********************************/
#include "lesson1_classes.h"
#include "conio.h"
#include <iostream>
#include <clocale>
 using namespace std;

int main() {
    double x;
    setlocale(LC_ALL, "RUS");
    cout << "Введите значение x для расчета Z1 и Z2: ";
    cin >> x;
    Z1 z1(x);
    Z2 z2(x);
   // z1.firstVariable = x; слишком сложно
    //z2.secondVariable = x;
    cout << "Z1 = " << z1.Solution() << endl;
    cout << "Z2 = " << z2.Solution() << endl;
    cout << "S = " << z1.Solution()+z2.Solution() << endl;
    system("pause");
    return 0;
}