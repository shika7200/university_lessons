
/* студбилет 20516 - вариант 16 *\
 \********************************/
#include <clocale>
#include <iostream>
#include "lesson1_classes.h"
#include "math.h"

using namespace  std;



Z1::Z1(double x)
         {
    // public: нет смысла дублировать .h
        firstVariable = x;
        std::cout << "Обьект класса Z1 был создан" << std::endl;
         }
     Z1::~Z1()
     {
        std::cout << "Обьект класса Z1 был уничтожен " << std::endl;
     }

     double Z1::Solution()
        {
    return ( (pow(firstVariable)+ 2*firstVariable - 3*firstVariable + (firstVariable+1) * (sqrt(pow(firstVariable) - 9)))/
            (pow(firstVariable)- 2*firstVariable -3 + (firstVariable+1) * (sqrt(pow(firstVariable) - 9 ))))
        }

 Z2::Z2(double x)
        {// public: можно и здесь конечно но как понял лучше в .h?
    secondVariable = x;
    std::cout << "Обьект класса Z2 был создан" << std::endl;
        }
    Z2::~Z2()
        {
        std::cout << "Обьект класса Z2 был уничтожен " << std::endl;
        }

    double Z2::Solution()
            {
             return ( sqrt((secondVariable+3)/(secondVariable-3)))
             }














