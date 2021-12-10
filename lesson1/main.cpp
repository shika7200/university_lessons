
/* студ.билет 20516 - вариант 16 *\
 \********************************/
#include "lesson1_classes.h"
//#include <conio.h>
#include <iostream>
#include <clocale>
 using namespace std;

int main() {
    setlocale(LC_ALL, "russian");
    cout << "Введите значение x для расчета: ";
public: double x;
    cin >> x >> endl();
    cout << " ** Нажмите любую клавишу чтобы расчитать Z1 **" << endl;
    //_getch();// команда задержки  - deprecated in msdos
    //Z1 obj_z1(); //-- как обьявлять конструктор и деструктор ?компилятор жалуеются на отсутствие скобок, вообще без понятия почему
    cout << "Z1 = " << Z1.first(x) << endl; // Так ведь можно вызывать конструктор на вывод ?
    cout << "** Нажмите любую клавишу чтобы расчитать Z2 **" << endl;
    cout << "Z1 = " << obj_z2.second(x) << endl;
    cout << "Нажмите любую клавишу чтобы выйти" << endl;

    return 0;
}