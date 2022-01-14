/*  Массив - упорядоченный набор значений одного и того же типа, 
обьединенных под одним общим именем.
    <тип>  < ИмяПеременной> [ <колличество элементов > ];
    int A[10]
    char B[23]  float X[15]*/
    #include <clocale>
    #include <iostream>
    #include <cmath>
    using namespace std;


    int main() {

        int A[100]; 
        int n ;// колличество элементов в  массиве А
        cout << "Введите n ";
        cin >> n ;
        for  ( int i = 0 ; i < n; i++ )
        {
            cout << " Введите элемент массива А["<< i << "]= ";
            cin >> A[i];
        };
        // цикл по выводу элементов массива на экран:
        for ( int i =0; i < n ; i++){
            cout <<  "A[" << i << "]" << A[i] << endl;
        }
       return 0; 
    }

rand()