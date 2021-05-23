#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void clearFields();

    void clearRFields();

    void hideFields();

    void hideRFields();

    void fieldsVisibility();

    void rFieldsVisibility();

    void assignMtrx(double **matr);

    void assignInvMtrx(double **t_inv_matr);

    void on_closeButton_clicked();

    void on_detButton_clicked();

    void on_inverseMtrxButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
