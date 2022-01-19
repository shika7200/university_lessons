 #include <clocale>
    #include <iostream>
    #include <cmath>
    using namespace std;


    int main() {

        int A[100]; 
        int n ;// колличество элементов в  массиве А
        cout << "Введите длину массива ";
        cin >> n ;
        int P;
        cout << "Чтобы найти сумму чисел больше указанно, введите это число: ";
        cin >> P;
        int S = 0;
        for  ( int i = 0 ; i < n; i++ )
        {
            cout << " Введите элемент массива А["<< i << "]= ";
            cin >> A[i];
             if (A[i] > P) {
                 S += A[i]; 
             }
        };
    




        // цикл по выводу элементов массива на экран:
        for ( int i =0; i < n ; i++){
            cout <<  "A[" << i << "]" << A[i] << endl;
        }
        cout << "сумма числен больше указанно:  " << S << endl;
       return 0; 
    }