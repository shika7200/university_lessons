 #include <clocale>
    #include <iostream>
    #include <cmath>
    using namespace std;


    int main() {

        int A[100]; 
        int n ;// колличество элементов в  массиве А
        cout << "Введите длину массива ";
        cin >> n ;
        for  ( int i = 0 ; i < n; i++ )
        {
            cout << " Введите элемент массива А["<< i << "]= ";
            cin >> A[i];
             if (A[i] > 0) {
                 A[i] = 0 ; 
             }
             
        };
        // цикл по выводу элементов массива на экран:
        for ( int i =0; i < n ; i++){
            cout <<  "A[" << i << "]" << A[i] << endl;
        }
       return 0; 
    }