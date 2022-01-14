//
// Created by uguru on 09.12.2021.
//
#include "cycles.h"
#include <conio.h>
#include <iostream>
#include <clocale>
using namespace std;



int main() {
    float x,b,c;
    setlocale(LC_ALL, "RUS");
    cout << "Введите значение x"<< endl;
    cin >> x;
    cout << "Введите конечное значение"<< endl;
    cin >> b;
    cout << "Введите значение шага"<< endl;
    cin >> c;
  cycles cycle(x,b,c);
    int key;
    cout << "Введите ключ(1- for , 2- while, 3- do while): ";
    cin >> key;
    switch(key) {
        case 1: { cycle.firstSolution();
        break;}
        case 2: {cycle.secondSolution();
        break;}
        case 3: {cycle.thirdSolution();
        break;}
        default: {
    cycle.firstSolution();
    cycle.secondSolution();
    cycle.thirdSolution();}
    }
    system("pause");
    return 0;
}
