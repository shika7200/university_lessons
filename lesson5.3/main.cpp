 #include <clocale>
    #include <iostream>
    #include <cmath>
    using namespace std;


    int main() {

        int A[100]; 
        int B[100];
        int n ;// колличество элементов в  массиве А
        cout << "Введите длину массива ";
        cin >> n ;
        for  ( int i = 0 ; i < n; i++ )
        {
            cout << " Введите элемент массива А["<< i << "]= ";
            cin >> A[i];
             if (abs(A[i]) > 3) {
                 B[i] = 1 ; 
             }
             else {
                 B[i] = A[i];
             }
             
        };
        // цикл по выводу элементов массива на экран:
        for ( int i =0; i < n ; i++){
            cout <<  "A[" << i << "]" << A[i] << endl;
        }
        for ( int i =0 ; i < n; i++ ){
         cout << "B[" << i << "]" << B[i]<< endl;
        }
       return 0; 
    }