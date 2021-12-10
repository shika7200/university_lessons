
/* студбилет 20516 - вариант 16 *\
 \********************************/
#include "lesson1_classes.h"
//#include <conio.h>
#include <iostream>
#include <clocale>
 using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");
    cout << "Введите значение x для расчета: ";
    protected : double x;
    cin >> x;
    cout << " ** Нажмите любую клавишу чтобы расчитать Z1 **" << endl;
    //_getch();// команда задержки  - deprecated in msdos

    cout << "Z1 = " << Z1.first(x) << endl;
    cout << "** Нажмите любую клавишу чтобы расчитать Z2 **" << endl;
    cout << "Z1 = " << Z2.second(x) << endl;
    cout << "Нажмите любую клавишу чтобы выйти" << endl;

    return 0;
}