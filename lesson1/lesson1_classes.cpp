
/* студбилет 20516 - вариант 16 *\
 \********************************/
#include <clocale>
#include "lesson1_classes.h"
#include "math.h"

using namespace  std;

class Func
{
public: double x;
public: first();
public: second();
};

class Z1 : public Func
{

    double Z1::first() {
    return ( (pow(x)+ 2*x - 3*x + (x+1) * (sqrt(pow(x) - 9)))/
            (pow(x)- 2*x -3 + (x+1) * (sqrt(pow(x) - 9 ))))
                }
};
class Z2 : public Func
        {

            double Z2::second() {
    return ( sqrt((x+3)/(x-3)))
// мы же не обязаны реализовывать все методы ? это же не интерфейс я правильно понимаю ?
    }
};














