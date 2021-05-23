#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "DetPlusInverseMatrix.h"
#include <QString>
#define N 10
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFields();
    setRFields();
    connect(ui->comboBox, SIGNAL(activated(int)), this, SLOT(fieldsVisibility()));
    connect(ui->comboBox, SIGNAL(activated(int)), this, SLOT(hideRFields()));

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::setFields(){
      mtx = new QLineEdit**[N];
      for (int i = 0; i < N; ++i){
          mtx[i] = new QLineEdit*[N];
          for (int j = 0; j < N; ++j){
              mtx[i][j] = new QLineEdit(this);
              ui->grid->addWidget(mtx[i][j], i, j);
              mtx[i][j]->setHidden(1);
              mtx[i][j]->setMaximumWidth(50);
              mtx[i][j]->setMaximumHeight(20);
          }
      }
      ui->grid->setSpacing(5);

}

void MainWindow::setRFields(){
      rmtx = new QLineEdit**[N];
      for (int i = 0; i < N; ++i){
          rmtx[i] = new QLineEdit*[N];
          for (int j = 0; j < N; ++j){
              rmtx[i][j] = new QLineEdit(this);
              ui->rgrid->addWidget(rmtx[i][j], i, j);
              rmtx[i][j]->setHidden(1);
              rmtx[i][j]->setMaximumWidth(50);
              rmtx[i][j]->setMaximumHeight(20);
          }
      }
      ui->rgrid->setSpacing(5);
}

void MainWindow::clearFields(){
    int n = ui->comboBox->currentIndex();
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            mtx[i][j]->clear();
        }
    }
}

void MainWindow::clearRFields(){
    int n = ui->comboBox->currentIndex();
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            rmtx[i][j]->clear();
        }
    }

}

void MainWindow::hideFields(){
    clearFields();
    for (int i = 0; i < 10; ++i){
        for (int j = 0; j < 10; ++j){
            mtx[i][j]->setHidden(1);
        }
    }

}

void MainWindow::hideRFields(){
    clearRFields();
    for (int i = 0; i < 10; ++i){
        for (int j = 0; j < 10; ++j){
            rmtx[i][j]->setHidden(1);
        }
    }

}

void MainWindow::fieldsVisibility(){
    hideFields();
    int n = ui->comboBox->currentIndex();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++){
            mtx[i][j]->show();
        }
    }
}

void MainWindow::rFieldsVisibility(){
    hideRFields();
    int n = ui->comboBox->currentIndex();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++){
            rmtx[i][j]->show();
        }
    }
}



void MainWindow::on_closeButton_clicked()
{
   close();
}

void MainWindow::assignMtrx(double **matr){
    int n = ui->comboBox->currentIndex();
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; ++j){
            matr[i][j] = mtx[i][j]->text().toDouble();
        }
    }
}

void MainWindow::assignInvMtrx(double **t_inv_matr){
    int n = ui->comboBox->currentIndex();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; ++j){
             rmtx[i][j]->setText(QString::number(t_inv_matr[i][j]));
        }
    }
}

void MainWindow::on_detButton_clicked()
{
    int n = ui->comboBox->currentIndex();
    if (n > 0){
        double **matr = new double* [n];
        for(int i = 0; i < n; i++)
            matr[i] = new double[n];
        for (int i = 0; i < n; ++i){
            for (int j = 0; j < n; ++j){
                matr[i][j] = 0;
            }
        }
        assignMtrx(matr);
        double det = Det(matr, n);
        ui->DeterminantField->setText(QString::number(det));
        FreeMem(matr, n);
    }
    else
        ui->errorLabel->setText("Invalid matrix size");
}

void MainWindow::on_inverseMtrxButton_clicked()
{
    int n = ui->comboBox->currentIndex();
    if (n > 0){
        double **matr = new double* [n];
        double **inv_matr = new double* [n];
        double **t_inv_matr = new double* [n];
        for(int i = 0; i < n; i++){
            matr[i] = new double[n];
            inv_matr[i] = new double[n];
            t_inv_matr[i] = new double[n];
        }
        for (int i = 0; i < n; ++i){
            for (int j = 0; j< n; ++j){
                matr[i][j] = 0;
                t_inv_matr[i][j] = 0;
            }
        }
        assignMtrx(matr);
        double det = Det(matr, n);
        if(det){
            inverseMtrx(matr, inv_matr, t_inv_matr, det, n);
            rFieldsVisibility();
            assignInvMtrx(t_inv_matr);
        }
        else {
            ui->errorLabel->setText("Determinant is 0, so there is no invesed matrix!");
        }
        FreeMem(matr, n);
        FreeMem(inv_matr, n);
        FreeMem(t_inv_matr, n);
    }
    else
        ui->errorLabel->setText("Invalid matrix size");
}

