//
// Created by Victor on 21.05.2021.
//

//#include "DetPlusInverseMatrix.h"
//Функция транспонирования матрицы
//template <typename T> void TransponMtx(T **matr, T **tMatr, int n){//
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < n; j++)
//            tMatr[j][i] = matr[i][j];
//}
////Функция освобождения памяти
//template <typename T> void FreeMem(T **matr, int n)
//{
//    for(int i = 0; i < n; i++)
//        delete [] matr[i];
//    delete [] matr;
//}
//
////функция заполнения матрицы
//template <typename T> void SetMtx(T **matr, int n)
//{
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < n; j++)
//            matr[i][j] = rand()%9 + 1;
//}
//
////функция печати матрицы
//template <typename T> void PrintMtx(T **matr, int n)
//{
//    for (int i = 0; i < n; i++){
//        for (int j = 0; j < n; j++)
//            cout << matr[i][j] << " ";
//        cout << endl;
//    }
//}
////функция вычеркивания строки и столбца
//void EraseRowClmn(int **matr, int n, int **temp_matr, int indRow, int indCol)
//{
//    int ki = 0;
//    for (int i = 0; i < n; i++){
//        if(i != indRow){
//            for (int j = 0, kj = 0; j < n; j++){
//                if (j != indCol){
//                    temp_matr[ki][kj] = matr[i][j];
//                    kj++;
//                }
//            }
//            ki++;
//        }
//    }
//}
//
//template <typename T> T Det(T **matr, int n) /*функція обчислення визначника матриці*/
//{
//    T temp = 0;   //тимчасова зміння для зберігання визначника
//    int k = 1;      //степень
//    if(n < 1){
//        cout<<"Не верный размер матрицы!!!" << endl;
//        return 0;
//    }
//    else if (n == 1)
//        temp = matr[0][0];
//    else if (n == 2)
//        temp = matr[0][0] * matr[1][1] - matr[1][0] * matr[0][1];
//    else{
//        for(int i = 0; i < n; i++){
//            int m = n - 1;
//            T **temp_matr = new T* [m];
//            for(int j = 0; j < m; j++)
//                temp_matr[j] = new T [m];
//            EraseRowClmn(matr, n, temp_matr, 0, i);
//            temp = temp + k * matr[0][i] * Det(temp_matr, m);
//            k = -k;
//            FreeMem(temp_matr, m);
//        }
//    }
//    return temp;
//}
//
//template <typename T> void getMatr(T **matr, const int &n) {
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < n; ++j) {
//           cout << "matrix[" << i << ']' << '[' << j<< ']' ; cin >> matr[i][j];
//        }
//       cout << endl;
//    }
//}
