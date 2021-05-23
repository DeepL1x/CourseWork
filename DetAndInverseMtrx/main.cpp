#include "mainwindow.h"
#include "DetPlusInverseMatrix.h"
#include <QApplication>
#include <QLabel>
#include <QLineEdit>
#include <QComboBox>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
//    QComboBox *comboBox = new QComboBox();
//    comboBox->addItem("0");
//    comboBox->addItem("1");
//    comboBox->addItem("2");
//    comboBox->addItem("3");
//    comboBox->addItem("4");
//    comboBox->addItem("5");
//    comboBox->addItem("6");
//    comboBox->addItem("7");
//    comboBox->addItem("8");
//    comboBox->addItem("9");
//    comboBox->addItem("10");
//    QLineEdit *field0_0= new QLineEdit();
//    QLineEdit *field0_1= new QLineEdit();
//    QLineEdit *field0_2= new QLineEdit();
//    QLineEdit *field0_3= new QLineEdit();
//    QLineEdit *field0_4= new QLineEdit();
//    QLineEdit *field0_5= new QLineEdit();
//    QLineEdit *field0_6= new QLineEdit();
//    QLineEdit *field0_7= new QLineEdit();
//    QLineEdit *field0_8= new QLineEdit();
//    QLineEdit *field0_9= new QLineEdit();
//    QLineEdit *field1_0= new QLineEdit();
//    QLineEdit *field1_1= new QLineEdit();
//    QLineEdit *field1_2= new QLineEdit();
//    QLineEdit *field1_3= new QLineEdit();
//    QLineEdit *field1_4= new QLineEdit();
//    QLineEdit *field1_5= new QLineEdit();
//    QLineEdit *field1_6= new QLineEdit();
//    QLineEdit *field1_7= new QLineEdit();
//    QLineEdit *field1_8= new QLineEdit();
//    QLineEdit *field1_9= new QLineEdit();
//    QLineEdit *field2_0= new QLineEdit();
//    QLineEdit *field2_1= new QLineEdit();
//    QLineEdit *field2_2= new QLineEdit();
//    QLineEdit *field2_3= new QLineEdit();
//    QLineEdit *field2_4= new QLineEdit();
//    QLineEdit *field2_5= new QLineEdit();
//    QLineEdit *field2_6= new QLineEdit();
//    QLineEdit *field2_7= new QLineEdit();
//    QLineEdit *field2_8= new QLineEdit();
//    QLineEdit *field2_9= new QLineEdit();
//    QLineEdit *field3_0= new QLineEdit();
//    QLineEdit *field3_1= new QLineEdit();
//    QLineEdit *field3_2= new QLineEdit();
//    QLineEdit *field3_3= new QLineEdit();
//    QLineEdit *field3_4= new QLineEdit();
//    QLineEdit *field3_5= new QLineEdit();
//    QLineEdit *field3_6= new QLineEdit();
//    QLineEdit *field3_7= new QLineEdit();
//    QLineEdit *field3_8= new QLineEdit();
//    QLineEdit *field3_9= new QLineEdit();
//    QLineEdit *field4_0= new QLineEdit();
//    QLineEdit *field4_1= new QLineEdit();
//    QLineEdit *field4_2= new QLineEdit();
//    QLineEdit *field4_3= new QLineEdit();
//    QLineEdit *field4_4= new QLineEdit();
//    QLineEdit *field4_5= new QLineEdit();
//    QLineEdit *field4_6= new QLineEdit();
//    QLineEdit *field4_7= new QLineEdit();
//    QLineEdit *field4_8= new QLineEdit();
//    QLineEdit *field4_9= new QLineEdit();
//    QLineEdit *field5_0= new QLineEdit();
//    QLineEdit *field5_1= new QLineEdit();
//    QLineEdit *field5_2= new QLineEdit();
//    QLineEdit *field5_3= new QLineEdit();
//    QLineEdit *field5_4= new QLineEdit();
//    QLineEdit *field5_5= new QLineEdit();
//    QLineEdit *field5_6= new QLineEdit();
//    QLineEdit *field5_7= new QLineEdit();
//    QLineEdit *field5_8= new QLineEdit();
//    QLineEdit *field5_9= new QLineEdit();
//    QLineEdit *field6_0= new QLineEdit();
//    QLineEdit *field6_1= new QLineEdit();
//    QLineEdit *field6_2= new QLineEdit();
//    QLineEdit *field6_3= new QLineEdit();
//    QLineEdit *field6_4= new QLineEdit();
//    QLineEdit *field6_5= new QLineEdit();
//    QLineEdit *field6_6= new QLineEdit();
//    QLineEdit *field6_7= new QLineEdit();
//    QLineEdit *field6_8= new QLineEdit();
//    QLineEdit *field6_9= new QLineEdit();
//    QLineEdit *field7_0= new QLineEdit();
//    QLineEdit *field7_1= new QLineEdit();
//    QLineEdit *field7_2= new QLineEdit();
//    QLineEdit *field7_3= new QLineEdit();
//    QLineEdit *field7_4= new QLineEdit();
//    QLineEdit *field7_5= new QLineEdit();
//    QLineEdit *field7_6= new QLineEdit();
//    QLineEdit *field7_7= new QLineEdit();
//    QLineEdit *field7_8= new QLineEdit();
//    QLineEdit *field7_9= new QLineEdit();
//    QLineEdit *field8_0= new QLineEdit();
//    QLineEdit *field8_1= new QLineEdit();
//    QLineEdit *field8_2= new QLineEdit();
//    QLineEdit *field8_3= new QLineEdit();
//    QLineEdit *field8_4= new QLineEdit();
//    QLineEdit *field8_5= new QLineEdit();
//    QLineEdit *field8_6= new QLineEdit();
//    QLineEdit *field8_7= new QLineEdit();
//    QLineEdit *field8_8= new QLineEdit();
//    QLineEdit *field8_9= new QLineEdit();
//    QLineEdit *field9_0= new QLineEdit();
//    QLineEdit *field9_1= new QLineEdit();
//    QLineEdit *field9_2= new QLineEdit();
//    QLineEdit *field9_3= new QLineEdit();
//    QLineEdit *field9_4= new QLineEdit();
//    QLineEdit *field9_5= new QLineEdit();
//    QLineEdit *field9_6= new QLineEdit();
//    QLineEdit *field9_7= new QLineEdit();
//    QLineEdit *field9_8= new QLineEdit();
//    QLineEdit *field9_9= new QLineEdit();
//    srand(time(NULL));
      /*  setlocale(0, "");
        int n;
//        cout << "Enter the size of the matrix:";
//        cin >> n;
        double **matr = new double* [n];
        double **obr_matr = new double * [n];
        double **tobr_matr = new double * [n];
        for(int i = 0; i < n; i++){
            matr[i] = new double[n];
            obr_matr[i] = new double[n];
            tobr_matr[i] = new double[n];
        }

    //    SetMtx(matr, n);
//        getMatr(matr, n);
//        PrintMtx(matr, n);
        auto det = Det(matr, n);
        string value;
//        cout << "Determinant of matrix = " << det << endl;
        if(det){
//            InverseMtrx(matr, obr_matr, tobr_matr, det, n);
//            PrintMtx(tobr_matr, n);
        }
        else {
//            cout << "Determinant is 0 so there is no inverse matrix" << endl;
        }
        FreeMem(tobr_matr, n);
        FreeMem(matr, n);
        FreeMem(obr_matr, n)*/;

    return a.exec();
}
