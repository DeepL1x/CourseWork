#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "DetPlusInverseMatrix.h"
#include <QString>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->comboBox, SIGNAL(activated(int)), this, SLOT(fieldsVisibility()));
    connect(ui->comboBox, SIGNAL(activated(int)), this, SLOT(hideRFields()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::clearFields(){
    ui->field0_0->clear();
    ui->field0_1->clear();
    ui->field0_2->clear();
    ui->field0_3->clear();
    ui->field0_4->clear();
    ui->field0_5->clear();
    ui->field0_6->clear();
    ui->field0_7->clear();
    ui->field0_8->clear();
    ui->field0_9->clear();
    ui->field1_0->clear();
    ui->field1_1->clear();
    ui->field1_2->clear();
    ui->field1_3->clear();
    ui->field1_4->clear();
    ui->field1_5->clear();
    ui->field1_6->clear();
    ui->field1_7->clear();
    ui->field1_8->clear();
    ui->field1_9->clear();
    ui->field2_0->clear();
    ui->field2_1->clear();
    ui->field2_2->clear();
    ui->field2_3->clear();
    ui->field2_4->clear();
    ui->field2_5->clear();
    ui->field2_6->clear();
    ui->field2_7->clear();
    ui->field2_8->clear();
    ui->field2_9->clear();
    ui->field3_0->clear();
    ui->field3_1->clear();
    ui->field3_2->clear();
    ui->field3_3->clear();
    ui->field3_4->clear();
    ui->field3_5->clear();
    ui->field3_6->clear();
    ui->field3_7->clear();
    ui->field3_8->clear();
    ui->field3_9->clear();
    ui->field4_0->clear();
    ui->field4_1->clear();
    ui->field4_2->clear();
    ui->field4_3->clear();
    ui->field4_4->clear();
    ui->field4_5->clear();
    ui->field4_6->clear();
    ui->field4_7->clear();
    ui->field4_8->clear();
    ui->field4_9->clear();
    ui->field5_0->clear();
    ui->field5_1->clear();
    ui->field5_2->clear();
    ui->field5_3->clear();
    ui->field5_4->clear();
    ui->field5_5->clear();
    ui->field5_6->clear();
    ui->field5_7->clear();
    ui->field5_8->clear();
    ui->field5_9->clear();
    ui->field6_0->clear();
    ui->field6_1->clear();
    ui->field6_2->clear();
    ui->field6_3->clear();
    ui->field6_4->clear();
    ui->field6_5->clear();
    ui->field6_6->clear();
    ui->field6_7->clear();
    ui->field6_8->clear();
    ui->field6_9->clear();
    ui->field7_0->clear();
    ui->field7_1->clear();
    ui->field7_2->clear();
    ui->field7_3->clear();
    ui->field7_4->clear();
    ui->field7_5->clear();
    ui->field7_6->clear();
    ui->field7_7->clear();
    ui->field7_8->clear();
    ui->field7_9->clear();
    ui->field8_0->clear();
    ui->field8_1->clear();
    ui->field8_2->clear();
    ui->field8_3->clear();
    ui->field8_4->clear();
    ui->field8_5->clear();
    ui->field8_6->clear();
    ui->field8_7->clear();
    ui->field8_8->clear();
    ui->field8_9->clear();
    ui->field9_0->clear();
    ui->field9_1->clear();
    ui->field9_2->clear();
    ui->field9_3->clear();
    ui->field9_4->clear();
    ui->field9_5->clear();
    ui->field9_6->clear();
    ui->field9_7->clear();
    ui->field9_8->clear();
    ui->field9_9->clear();
}

void MainWindow::clearRFields(){
    ui->rfield0_0->clear();
    ui->rfield0_1->clear();
    ui->rfield0_2->clear();
    ui->rfield0_3->clear();
    ui->rfield0_4->clear();
    ui->rfield0_5->clear();
    ui->rfield0_6->clear();
    ui->rfield0_7->clear();
    ui->rfield0_8->clear();
    ui->rfield0_9->clear();
    ui->rfield1_0->clear();
    ui->rfield1_1->clear();
    ui->rfield1_2->clear();
    ui->rfield1_3->clear();
    ui->rfield1_4->clear();
    ui->rfield1_5->clear();
    ui->rfield1_6->clear();
    ui->rfield1_7->clear();
    ui->rfield1_8->clear();
    ui->rfield1_9->clear();
    ui->rfield2_0->clear();
    ui->rfield2_1->clear();
    ui->rfield2_2->clear();
    ui->rfield2_3->clear();
    ui->rfield2_4->clear();
    ui->rfield2_5->clear();
    ui->rfield2_6->clear();
    ui->rfield2_7->clear();
    ui->rfield2_8->clear();
    ui->rfield2_9->clear();
    ui->rfield3_0->clear();
    ui->rfield3_1->clear();
    ui->rfield3_2->clear();
    ui->rfield3_3->clear();
    ui->rfield3_4->clear();
    ui->rfield3_5->clear();
    ui->rfield3_6->clear();
    ui->rfield3_7->clear();
    ui->rfield3_8->clear();
    ui->rfield3_9->clear();
    ui->rfield4_0->clear();
    ui->rfield4_1->clear();
    ui->rfield4_2->clear();
    ui->rfield4_3->clear();
    ui->rfield4_4->clear();
    ui->rfield4_5->clear();
    ui->rfield4_6->clear();
    ui->rfield4_7->clear();
    ui->rfield4_8->clear();
    ui->rfield4_9->clear();
    ui->rfield5_0->clear();
    ui->rfield5_1->clear();
    ui->rfield5_2->clear();
    ui->rfield5_3->clear();
    ui->rfield5_4->clear();
    ui->rfield5_5->clear();
    ui->rfield5_6->clear();
    ui->rfield5_7->clear();
    ui->rfield5_8->clear();
    ui->rfield5_9->clear();
    ui->rfield6_0->clear();
    ui->rfield6_1->clear();
    ui->rfield6_2->clear();
    ui->rfield6_3->clear();
    ui->rfield6_4->clear();
    ui->rfield6_5->clear();
    ui->rfield6_6->clear();
    ui->rfield6_7->clear();
    ui->rfield6_8->clear();
    ui->rfield6_9->clear();
    ui->rfield7_0->clear();
    ui->rfield7_1->clear();
    ui->rfield7_2->clear();
    ui->rfield7_3->clear();
    ui->rfield7_4->clear();
    ui->rfield7_5->clear();
    ui->rfield7_6->clear();
    ui->rfield7_7->clear();
    ui->rfield7_8->clear();
    ui->rfield7_9->clear();
    ui->rfield8_0->clear();
    ui->rfield8_1->clear();
    ui->rfield8_2->clear();
    ui->rfield8_3->clear();
    ui->rfield8_4->clear();
    ui->rfield8_5->clear();
    ui->rfield8_6->clear();
    ui->rfield8_7->clear();
    ui->rfield8_8->clear();
    ui->rfield8_9->clear();
    ui->rfield9_0->clear();
    ui->rfield9_1->clear();
    ui->rfield9_2->clear();
    ui->rfield9_3->clear();
    ui->rfield9_4->clear();
    ui->rfield9_5->clear();
    ui->rfield9_6->clear();
    ui->rfield9_7->clear();
    ui->rfield9_8->clear();
    ui->rfield9_9->clear();
}

void MainWindow::hideFields(){
    clearFields();
    ui->field0_0->setDisabled(1);
    ui->field0_1->setDisabled(1);
    ui->field0_2->setDisabled(1);
    ui->field0_3->setDisabled(1);
    ui->field0_4->setDisabled(1);
    ui->field0_5->setDisabled(1);
    ui->field0_6->setDisabled(1);
    ui->field0_7->setDisabled(1);
    ui->field0_8->setDisabled(1);
    ui->field0_9->setDisabled(1);
    ui->field1_0->setDisabled(1);
    ui->field1_1->setDisabled(1);
    ui->field1_2->setDisabled(1);
    ui->field1_3->setDisabled(1);
    ui->field1_4->setDisabled(1);
    ui->field1_5->setDisabled(1);
    ui->field1_6->setDisabled(1);
    ui->field1_7->setDisabled(1);
    ui->field1_8->setDisabled(1);
    ui->field1_9->setDisabled(1);
    ui->field2_0->setDisabled(1);
    ui->field2_1->setDisabled(1);
    ui->field2_2->setDisabled(1);
    ui->field2_3->setDisabled(1);
    ui->field2_4->setDisabled(1);
    ui->field2_5->setDisabled(1);
    ui->field2_6->setDisabled(1);
    ui->field2_7->setDisabled(1);
    ui->field2_8->setDisabled(1);
    ui->field2_9->setDisabled(1);
    ui->field3_0->setDisabled(1);
    ui->field3_1->setDisabled(1);
    ui->field3_2->setDisabled(1);
    ui->field3_3->setDisabled(1);
    ui->field3_4->setDisabled(1);
    ui->field3_5->setDisabled(1);
    ui->field3_6->setDisabled(1);
    ui->field3_7->setDisabled(1);
    ui->field3_8->setDisabled(1);
    ui->field3_9->setDisabled(1);
    ui->field4_0->setDisabled(1);
    ui->field4_1->setDisabled(1);
    ui->field4_2->setDisabled(1);
    ui->field4_3->setDisabled(1);
    ui->field4_4->setDisabled(1);
    ui->field4_5->setDisabled(1);
    ui->field4_6->setDisabled(1);
    ui->field4_7->setDisabled(1);
    ui->field4_8->setDisabled(1);
    ui->field4_9->setDisabled(1);
    ui->field5_0->setDisabled(1);
    ui->field5_1->setDisabled(1);
    ui->field5_2->setDisabled(1);
    ui->field5_3->setDisabled(1);
    ui->field5_4->setDisabled(1);
    ui->field5_5->setDisabled(1);
    ui->field5_6->setDisabled(1);
    ui->field5_7->setDisabled(1);
    ui->field5_8->setDisabled(1);
    ui->field5_9->setDisabled(1);
    ui->field6_0->setDisabled(1);
    ui->field6_1->setDisabled(1);
    ui->field6_2->setDisabled(1);
    ui->field6_3->setDisabled(1);
    ui->field6_4->setDisabled(1);
    ui->field6_5->setDisabled(1);
    ui->field6_6->setDisabled(1);
    ui->field6_7->setDisabled(1);
    ui->field6_8->setDisabled(1);
    ui->field6_9->setDisabled(1);
    ui->field7_0->setDisabled(1);
    ui->field7_1->setDisabled(1);
    ui->field7_2->setDisabled(1);
    ui->field7_3->setDisabled(1);
    ui->field7_4->setDisabled(1);
    ui->field7_5->setDisabled(1);
    ui->field7_6->setDisabled(1);
    ui->field7_7->setDisabled(1);
    ui->field7_8->setDisabled(1);
    ui->field7_9->setDisabled(1);
    ui->field8_0->setDisabled(1);
    ui->field8_1->setDisabled(1);
    ui->field8_2->setDisabled(1);
    ui->field8_3->setDisabled(1);
    ui->field8_4->setDisabled(1);
    ui->field8_5->setDisabled(1);
    ui->field8_6->setDisabled(1);
    ui->field8_7->setDisabled(1);
    ui->field8_8->setDisabled(1);
    ui->field8_9->setDisabled(1);
    ui->field9_0->setDisabled(1);
    ui->field9_1->setDisabled(1);
    ui->field9_2->setDisabled(1);
    ui->field9_3->setDisabled(1);
    ui->field9_4->setDisabled(1);
    ui->field9_5->setDisabled(1);
    ui->field9_6->setDisabled(1);
    ui->field9_7->setDisabled(1);
    ui->field9_8->setDisabled(1);
    ui->field9_9->setDisabled(1);
}

void MainWindow::hideRFields(){
    clearRFields();
    ui->rfield0_0->setDisabled(1);
    ui->rfield0_1->setDisabled(1);
    ui->rfield0_2->setDisabled(1);
    ui->rfield0_3->setDisabled(1);
    ui->rfield0_4->setDisabled(1);
    ui->rfield0_5->setDisabled(1);
    ui->rfield0_6->setDisabled(1);
    ui->rfield0_7->setDisabled(1);
    ui->rfield0_8->setDisabled(1);
    ui->rfield0_9->setDisabled(1);
    ui->rfield1_0->setDisabled(1);
    ui->rfield1_1->setDisabled(1);
    ui->rfield1_2->setDisabled(1);
    ui->rfield1_3->setDisabled(1);
    ui->rfield1_4->setDisabled(1);
    ui->rfield1_5->setDisabled(1);
    ui->rfield1_6->setDisabled(1);
    ui->rfield1_7->setDisabled(1);
    ui->rfield1_8->setDisabled(1);
    ui->rfield1_9->setDisabled(1);
    ui->rfield2_0->setDisabled(1);
    ui->rfield2_1->setDisabled(1);
    ui->rfield2_2->setDisabled(1);
    ui->rfield2_3->setDisabled(1);
    ui->rfield2_4->setDisabled(1);
    ui->rfield2_5->setDisabled(1);
    ui->rfield2_6->setDisabled(1);
    ui->rfield2_7->setDisabled(1);
    ui->rfield2_8->setDisabled(1);
    ui->rfield2_9->setDisabled(1);
    ui->rfield3_0->setDisabled(1);
    ui->rfield3_1->setDisabled(1);
    ui->rfield3_2->setDisabled(1);
    ui->rfield3_3->setDisabled(1);
    ui->rfield3_4->setDisabled(1);
    ui->rfield3_5->setDisabled(1);
    ui->rfield3_6->setDisabled(1);
    ui->rfield3_7->setDisabled(1);
    ui->rfield3_8->setDisabled(1);
    ui->rfield3_9->setDisabled(1);
    ui->rfield4_0->setDisabled(1);
    ui->rfield4_1->setDisabled(1);
    ui->rfield4_2->setDisabled(1);
    ui->rfield4_3->setDisabled(1);
    ui->rfield4_4->setDisabled(1);
    ui->rfield4_5->setDisabled(1);
    ui->rfield4_6->setDisabled(1);
    ui->rfield4_7->setDisabled(1);
    ui->rfield4_8->setDisabled(1);
    ui->rfield4_9->setDisabled(1);
    ui->rfield5_0->setDisabled(1);
    ui->rfield5_1->setDisabled(1);
    ui->rfield5_2->setDisabled(1);
    ui->rfield5_3->setDisabled(1);
    ui->rfield5_4->setDisabled(1);
    ui->rfield5_5->setDisabled(1);
    ui->rfield5_6->setDisabled(1);
    ui->rfield5_7->setDisabled(1);
    ui->rfield5_8->setDisabled(1);
    ui->rfield5_9->setDisabled(1);
    ui->rfield6_0->setDisabled(1);
    ui->rfield6_1->setDisabled(1);
    ui->rfield6_2->setDisabled(1);
    ui->rfield6_3->setDisabled(1);
    ui->rfield6_4->setDisabled(1);
    ui->rfield6_5->setDisabled(1);
    ui->rfield6_6->setDisabled(1);
    ui->rfield6_7->setDisabled(1);
    ui->rfield6_8->setDisabled(1);
    ui->rfield6_9->setDisabled(1);
    ui->rfield7_0->setDisabled(1);
    ui->rfield7_1->setDisabled(1);
    ui->rfield7_2->setDisabled(1);
    ui->rfield7_3->setDisabled(1);
    ui->rfield7_4->setDisabled(1);
    ui->rfield7_5->setDisabled(1);
    ui->rfield7_6->setDisabled(1);
    ui->rfield7_7->setDisabled(1);
    ui->rfield7_8->setDisabled(1);
    ui->rfield7_9->setDisabled(1);
    ui->rfield8_0->setDisabled(1);
    ui->rfield8_1->setDisabled(1);
    ui->rfield8_2->setDisabled(1);
    ui->rfield8_3->setDisabled(1);
    ui->rfield8_4->setDisabled(1);
    ui->rfield8_5->setDisabled(1);
    ui->rfield8_6->setDisabled(1);
    ui->rfield8_7->setDisabled(1);
    ui->rfield8_8->setDisabled(1);
    ui->rfield8_9->setDisabled(1);
    ui->rfield9_0->setDisabled(1);
    ui->rfield9_1->setDisabled(1);
    ui->rfield9_2->setDisabled(1);
    ui->rfield9_3->setDisabled(1);
    ui->rfield9_4->setDisabled(1);
    ui->rfield9_5->setDisabled(1);
    ui->rfield9_6->setDisabled(1);
    ui->rfield9_7->setDisabled(1);
    ui->rfield9_8->setDisabled(1);
    ui->rfield9_9->setDisabled(1);
}

void MainWindow::fieldsVisibility(){
    hideFields();
    for (int i = 0; i <= ui->comboBox->currentIndex(); i++){
        if (i == 1){
            ui->field0_0->setEnabled(1);
        }
        else if(i == 2){
            ui->field0_1->setEnabled(1);
            ui->field1_0->setEnabled(1);
            ui->field1_1->setEnabled(1);
        }
        else if(i == 3){
            ui->field0_2->setEnabled(1);
            ui->field1_2->setEnabled(1);
            ui->field2_0->setEnabled(1);
            ui->field2_1->setEnabled(1);
            ui->field2_2->setEnabled(1);
        }
        else if(i == 4){
            ui->field0_3->setEnabled(1);
            ui->field1_3->setEnabled(1);
            ui->field2_3->setEnabled(1);
            ui->field3_0->setEnabled(1);
            ui->field3_1->setEnabled(1);
            ui->field3_2->setEnabled(1);
            ui->field3_3->setEnabled(1);
        }
        else if(i == 5){
            ui->field0_4->setEnabled(1);
            ui->field1_4->setEnabled(1);
            ui->field2_4->setEnabled(1);
            ui->field3_4->setEnabled(1);
            ui->field4_0->setEnabled(1);
            ui->field4_1->setEnabled(1);
            ui->field4_2->setEnabled(1);
            ui->field4_3->setEnabled(1);
            ui->field4_4->setEnabled(1);
        }
        else if(i == 6){
            ui->field0_5->setEnabled(1);
            ui->field1_5->setEnabled(1);
            ui->field2_5->setEnabled(1);
            ui->field3_5->setEnabled(1);
            ui->field4_5->setEnabled(1);
            ui->field5_0->setEnabled(1);
            ui->field5_1->setEnabled(1);
            ui->field5_2->setEnabled(1);
            ui->field5_3->setEnabled(1);
            ui->field5_4->setEnabled(1);
            ui->field5_5->setEnabled(1);
        }
        else if(i == 7){
            ui->field0_6->setEnabled(1);
            ui->field1_6->setEnabled(1);
            ui->field2_6->setEnabled(1);
            ui->field3_6->setEnabled(1);
            ui->field4_6->setEnabled(1);
            ui->field5_6->setEnabled(1);
            ui->field6_0->setEnabled(1);
            ui->field6_1->setEnabled(1);
            ui->field6_2->setEnabled(1);
            ui->field6_3->setEnabled(1);
            ui->field6_4->setEnabled(1);
            ui->field6_5->setEnabled(1);
            ui->field6_6->setEnabled(1);
        }
        else if(i == 8){
            ui->field0_7->setEnabled(1);
            ui->field1_7->setEnabled(1);
            ui->field2_7->setEnabled(1);
            ui->field3_7->setEnabled(1);
            ui->field4_7->setEnabled(1);
            ui->field5_7->setEnabled(1);
            ui->field6_7->setEnabled(1);
            ui->field7_0->setEnabled(1);
            ui->field7_1->setEnabled(1);
            ui->field7_2->setEnabled(1);
            ui->field7_3->setEnabled(1);
            ui->field7_4->setEnabled(1);
            ui->field7_5->setEnabled(1);
            ui->field7_6->setEnabled(1);
            ui->field7_7->setEnabled(1);
           
        }
        else if(i == 9){
            ui->field0_8->setEnabled(1);
            ui->field1_8->setEnabled(1);
            ui->field2_8->setEnabled(1);
            ui->field3_8->setEnabled(1);
            ui->field4_8->setEnabled(1);
            ui->field5_8->setEnabled(1);
            ui->field6_8->setEnabled(1);
            ui->field7_8->setEnabled(1);
            ui->field8_0->setEnabled(1);
            ui->field8_1->setEnabled(1);
            ui->field8_2->setEnabled(1);
            ui->field8_3->setEnabled(1);
            ui->field8_4->setEnabled(1);
            ui->field8_5->setEnabled(1);
            ui->field8_6->setEnabled(1);
            ui->field8_7->setEnabled(1);
            ui->field8_8->setEnabled(1);
        }
        else if(i == 10){
            ui->field0_9->setEnabled(1);
            ui->field1_9->setEnabled(1);
            ui->field2_9->setEnabled(1);
            ui->field3_9->setEnabled(1);
            ui->field4_9->setEnabled(1);
            ui->field5_9->setEnabled(1);
            ui->field6_9->setEnabled(1);
            ui->field7_9->setEnabled(1);
            ui->field8_9->setEnabled(1);
            ui->field9_0->setEnabled(1);
            ui->field9_1->setEnabled(1);
            ui->field9_2->setEnabled(1);
            ui->field9_3->setEnabled(1);
            ui->field9_4->setEnabled(1);
            ui->field9_5->setEnabled(1);
            ui->field9_6->setEnabled(1);
            ui->field9_7->setEnabled(1);
            ui->field9_8->setEnabled(1);
            ui->field9_9->setEnabled(1);
        }
    }
}

void MainWindow::rFieldsVisibility(){
    hideRFields();
    for (int i = 0; i <= ui->comboBox->currentIndex(); i++){
        if (i == 1){
            ui->rfield0_0->setEnabled(1);
        }
        else if(i == 2){
            ui->rfield0_1->setEnabled(1);
            ui->rfield1_0->setEnabled(1);
            ui->rfield1_1->setEnabled(1);
        }
        else if(i == 3){
            ui->rfield0_2->setEnabled(1);
            ui->rfield1_2->setEnabled(1);
            ui->rfield2_0->setEnabled(1);
            ui->rfield2_1->setEnabled(1);
            ui->rfield2_2->setEnabled(1);
        }
        else if(i == 4){
            ui->rfield0_3->setEnabled(1);
            ui->rfield1_3->setEnabled(1);
            ui->rfield2_3->setEnabled(1);
            ui->rfield3_0->setEnabled(1);
            ui->rfield3_1->setEnabled(1);
            ui->rfield3_2->setEnabled(1);
            ui->rfield3_3->setEnabled(1);
        }
        else if(i == 5){
            ui->rfield0_4->setEnabled(1);
            ui->rfield1_4->setEnabled(1);
            ui->rfield2_4->setEnabled(1);
            ui->rfield3_4->setEnabled(1);
            ui->rfield4_0->setEnabled(1);
            ui->rfield4_1->setEnabled(1);
            ui->rfield4_2->setEnabled(1);
            ui->rfield4_3->setEnabled(1);
            ui->rfield4_4->setEnabled(1);
        }
        else if(i == 6){
            ui->rfield0_5->setEnabled(1);
            ui->rfield1_5->setEnabled(1);
            ui->rfield2_5->setEnabled(1);
            ui->rfield3_5->setEnabled(1);
            ui->rfield4_5->setEnabled(1);
            ui->rfield5_0->setEnabled(1);
            ui->rfield5_1->setEnabled(1);
            ui->rfield5_2->setEnabled(1);
            ui->rfield5_3->setEnabled(1);
            ui->rfield5_4->setEnabled(1);
            ui->rfield5_5->setEnabled(1);
        }
        else if(i == 7){
            ui->rfield0_6->setEnabled(1);
            ui->rfield1_6->setEnabled(1);
            ui->rfield2_6->setEnabled(1);
            ui->rfield3_6->setEnabled(1);
            ui->rfield4_6->setEnabled(1);
            ui->rfield5_6->setEnabled(1);
            ui->rfield6_0->setEnabled(1);
            ui->rfield6_1->setEnabled(1);
            ui->rfield6_2->setEnabled(1);
            ui->rfield6_3->setEnabled(1);
            ui->rfield6_4->setEnabled(1);
            ui->rfield6_5->setEnabled(1);
            ui->rfield6_6->setEnabled(1);
        }
        else if(i == 8){
            ui->rfield0_7->setEnabled(1);
            ui->rfield1_7->setEnabled(1);
            ui->rfield2_7->setEnabled(1);
            ui->rfield3_7->setEnabled(1);
            ui->rfield4_7->setEnabled(1);
            ui->rfield5_7->setEnabled(1);
            ui->rfield6_7->setEnabled(1);
            ui->rfield7_0->setEnabled(1);
            ui->rfield7_1->setEnabled(1);
            ui->rfield7_2->setEnabled(1);
            ui->rfield7_3->setEnabled(1);
            ui->rfield7_4->setEnabled(1);
            ui->rfield7_5->setEnabled(1);
            ui->rfield7_6->setEnabled(1);
            ui->rfield7_7->setEnabled(1);

        }
        else if(i == 9){
            ui->rfield0_8->setEnabled(1);
            ui->rfield1_8->setEnabled(1);
            ui->rfield2_8->setEnabled(1);
            ui->rfield3_8->setEnabled(1);
            ui->rfield4_8->setEnabled(1);
            ui->rfield5_8->setEnabled(1);
            ui->rfield6_8->setEnabled(1);
            ui->rfield7_8->setEnabled(1);
            ui->rfield8_0->setEnabled(1);
            ui->rfield8_1->setEnabled(1);
            ui->rfield8_2->setEnabled(1);
            ui->rfield8_3->setEnabled(1);
            ui->rfield8_4->setEnabled(1);
            ui->rfield8_5->setEnabled(1);
            ui->rfield8_6->setEnabled(1);
            ui->rfield8_7->setEnabled(1);
            ui->rfield8_8->setEnabled(1);
        }
        else if(i == 10){
            ui->rfield0_9->setEnabled(1);
            ui->rfield1_9->setEnabled(1);
            ui->rfield2_9->setEnabled(1);
            ui->rfield3_9->setEnabled(1);
            ui->rfield4_9->setEnabled(1);
            ui->rfield5_9->setEnabled(1);
            ui->rfield6_9->setEnabled(1);
            ui->rfield7_9->setEnabled(1);
            ui->rfield8_9->setEnabled(1);
            ui->rfield9_0->setEnabled(1);
            ui->rfield9_1->setEnabled(1);
            ui->rfield9_2->setEnabled(1);
            ui->rfield9_3->setEnabled(1);
            ui->rfield9_4->setEnabled(1);
            ui->rfield9_5->setEnabled(1);
            ui->rfield9_6->setEnabled(1);
            ui->rfield9_7->setEnabled(1);
            ui->rfield9_8->setEnabled(1);
            ui->rfield9_9->setEnabled(1);
        }
    }
}



void MainWindow::on_closeButton_clicked()
{
   close();
}

void MainWindow::assignMtrx(double **matr){
    for (int i = 0; i <= ui->comboBox->currentIndex(); i++){
            if(i == 1){
                matr[0][0] = ui->field0_0->text().toDouble();
            }
            else if (i == 2){
                matr[0][1] = ui->field0_1->text().toDouble();
                matr[1][0] = ui->field1_0->text().toDouble();
                matr[1][1] = ui->field1_1->text().toDouble();

            }
            else if (i == 3){
                matr[0][2] = ui->field0_2->text().toDouble();
                matr[1][2] = ui->field1_2->text().toDouble();
                matr[2][0] = ui->field2_0->text().toDouble();
                matr[2][1] = ui->field2_1->text().toDouble();
                matr[2][2] = ui->field2_2->text().toDouble();
            }
            else if (i == 4){
                matr[0][3] = ui->field0_3->text().toDouble();
                matr[1][3] = ui->field1_3->text().toDouble();
                matr[2][3] = ui->field2_3->text().toDouble();
                matr[3][0] = ui->field3_0->text().toDouble();
                matr[3][1] = ui->field3_1->text().toDouble();
                matr[3][2] = ui->field3_2->text().toDouble();
                matr[3][3] = ui->field3_3->text().toDouble();
            }
            else if (i == 5){
                matr[0][4] = ui->field0_4->text().toDouble();
                matr[1][4] = ui->field1_4->text().toDouble();
                matr[2][4] = ui->field2_4->text().toDouble();
                matr[3][4] = ui->field3_4->text().toDouble();
                matr[4][0] = ui->field4_0->text().toDouble();
                matr[4][1] = ui->field4_1->text().toDouble();
                matr[4][2] = ui->field4_2->text().toDouble();
                matr[4][3] = ui->field4_3->text().toDouble();
                matr[4][4] = ui->field4_4->text().toDouble();
            }
            else if (i == 6){
                matr[0][5] = ui->field0_5->text().toDouble();
                matr[1][5] = ui->field1_5->text().toDouble();
                matr[2][5] = ui->field2_5->text().toDouble();
                matr[3][5] = ui->field3_5->text().toDouble();
                matr[4][5] = ui->field4_5->text().toDouble();
                matr[5][0] = ui->field5_0->text().toDouble();
                matr[5][1] = ui->field5_1->text().toDouble();
                matr[5][2] = ui->field5_2->text().toDouble();
                matr[5][3] = ui->field5_3->text().toDouble();
                matr[5][4] = ui->field5_4->text().toDouble();
                matr[5][5] = ui->field5_5->text().toDouble();
            }
            else if (i == 7){
                matr[0][6] = ui->field0_6->text().toDouble();
                matr[1][6] = ui->field1_6->text().toDouble();
                matr[2][6] = ui->field2_6->text().toDouble();
                matr[3][6] = ui->field3_6->text().toDouble();
                matr[4][6] = ui->field4_6->text().toDouble();
                matr[5][6] = ui->field5_6->text().toDouble();
                matr[6][0] = ui->field6_0->text().toDouble();
                matr[6][1] = ui->field6_1->text().toDouble();
                matr[6][2] = ui->field6_2->text().toDouble();
                matr[6][3] = ui->field6_3->text().toDouble();
                matr[6][4] = ui->field6_4->text().toDouble();
                matr[6][5] = ui->field6_5->text().toDouble();
                matr[6][6] = ui->field6_6->text().toDouble();
            }
            else if (i == 8){
                matr[0][7] = ui->field0_7->text().toDouble();
                matr[1][7] = ui->field1_7->text().toDouble();
                matr[2][7] = ui->field2_7->text().toDouble();
                matr[3][7] = ui->field3_7->text().toDouble();
                matr[4][7] = ui->field4_7->text().toDouble();
                matr[5][7] = ui->field5_7->text().toDouble();
                matr[6][7] = ui->field6_7->text().toDouble();
                matr[7][0] = ui->field7_0->text().toDouble();
                matr[7][1] = ui->field7_1->text().toDouble();
                matr[7][2] = ui->field7_2->text().toDouble();
                matr[7][3] = ui->field7_3->text().toDouble();
                matr[7][4] = ui->field7_4->text().toDouble();
                matr[7][5] = ui->field7_5->text().toDouble();
                matr[7][6] = ui->field7_6->text().toDouble();
                matr[7][7] = ui->field7_7->text().toDouble();
            }
            else if (i == 9){
                matr[0][8] = ui->field0_8->text().toDouble();
                matr[1][8] = ui->field1_8->text().toDouble();
                matr[2][8] = ui->field2_8->text().toDouble();
                matr[3][8] = ui->field3_8->text().toDouble();
                matr[4][8] = ui->field4_8->text().toDouble();
                matr[5][8] = ui->field5_8->text().toDouble();
                matr[6][8] = ui->field6_8->text().toDouble();
                matr[7][8] = ui->field7_8->text().toDouble();
                matr[8][0] = ui->field8_0->text().toDouble();
                matr[8][1] = ui->field8_1->text().toDouble();
                matr[8][2] = ui->field8_2->text().toDouble();
                matr[8][3] = ui->field8_3->text().toDouble();
                matr[8][4] = ui->field8_4->text().toDouble();
                matr[8][5] = ui->field8_5->text().toDouble();
                matr[8][6] = ui->field8_6->text().toDouble();
                matr[8][7] = ui->field8_7->text().toDouble();
                matr[8][8] = ui->field8_8->text().toDouble();
            }
            else if (i == 10){
                matr[0][9] = ui->field0_9->text().toDouble();
                matr[1][9] = ui->field1_9->text().toDouble();
                matr[2][9] = ui->field2_9->text().toDouble();
                matr[3][9] = ui->field3_9->text().toDouble();
                matr[4][9] = ui->field4_9->text().toDouble();
                matr[5][9] = ui->field5_9->text().toDouble();
                matr[6][9] = ui->field6_9->text().toDouble();
                matr[7][9] = ui->field7_9->text().toDouble();
                matr[8][9] = ui->field8_9->text().toDouble();
                matr[9][0] = ui->field9_0->text().toDouble();
                matr[9][1] = ui->field9_1->text().toDouble();
                matr[9][2] = ui->field9_2->text().toDouble();
                matr[9][3] = ui->field9_3->text().toDouble();
                matr[9][4] = ui->field9_4->text().toDouble();
                matr[9][5] = ui->field9_5->text().toDouble();
                matr[9][6] = ui->field9_6->text().toDouble();
                matr[9][7] = ui->field9_7->text().toDouble();
                matr[9][8] = ui->field9_8->text().toDouble();
                matr[9][9] = ui->field9_9->text().toDouble();
            }
    }
}

void MainWindow::assignInvMtrx(double **t_inv_matr){
    for (int i = 0; i <= ui->comboBox->currentIndex(); i++){
            if(i == 1){
                ui->rfield0_0->setText(QString::number(t_inv_matr[0][0]));
            }
            else if (i == 2){
                ui->rfield0_1->setText(QString::number(t_inv_matr[0][1]));
                ui->rfield1_0->setText(QString::number(t_inv_matr[1][0]));
                ui->rfield1_1->setText(QString::number(t_inv_matr[1][1]));

            }
            else if (i == 3){
                ui->rfield0_2->setText(QString::number(t_inv_matr[0][2]));
                ui->rfield1_2->setText(QString::number(t_inv_matr[1][2]));
                ui->rfield2_0->setText(QString::number(t_inv_matr[2][0]));
                ui->rfield2_1->setText(QString::number(t_inv_matr[2][1]));
                ui->rfield2_2->setText(QString::number(t_inv_matr[2][2]));
            }
            else if (i == 4){
                ui->rfield0_3->setText(QString::number(t_inv_matr[0][3]));
                ui->rfield1_3->setText(QString::number(t_inv_matr[1][3]));
                ui->rfield2_3->setText(QString::number(t_inv_matr[2][3]));
                ui->rfield3_0->setText(QString::number(t_inv_matr[3][0]));
                ui->rfield3_1->setText(QString::number(t_inv_matr[3][1]));
                ui->rfield3_2->setText(QString::number(t_inv_matr[3][2]));
                ui->rfield3_3->setText(QString::number(t_inv_matr[3][3]));
            }
            else if (i == 5){
                ui->rfield0_4->setText(QString::number(t_inv_matr[0][4]));
                ui->rfield1_4->setText(QString::number(t_inv_matr[1][4]));
                ui->rfield2_4->setText(QString::number(t_inv_matr[2][4]));
                ui->rfield3_4->setText(QString::number(t_inv_matr[3][4]));
                ui->rfield4_0->setText(QString::number(t_inv_matr[4][0]));
                ui->rfield4_1->setText(QString::number(t_inv_matr[4][1]));
                ui->rfield4_2->setText(QString::number(t_inv_matr[4][2]));
                ui->rfield4_3->setText(QString::number(t_inv_matr[4][3]));
                ui->rfield4_4->setText(QString::number(t_inv_matr[4][4]));
            }
            else if (i == 6){
                ui->rfield0_5->setText(QString::number(t_inv_matr[0][5]));
                ui->rfield1_5->setText(QString::number(t_inv_matr[1][5]));
                ui->rfield2_5->setText(QString::number(t_inv_matr[2][5]));
                ui->rfield3_5->setText(QString::number(t_inv_matr[3][5]));
                ui->rfield4_5->setText(QString::number(t_inv_matr[4][5]));
                ui->rfield5_0->setText(QString::number(t_inv_matr[5][0]));
                ui->rfield5_1->setText(QString::number(t_inv_matr[5][1]));
                ui->rfield5_2->setText(QString::number(t_inv_matr[5][2]));
                ui->rfield5_3->setText(QString::number(t_inv_matr[5][3]));
                ui->rfield5_4->setText(QString::number(t_inv_matr[5][4]));
                ui->rfield5_5->setText(QString::number(t_inv_matr[5][5]));
            }
            else if (i == 7){
                ui->rfield0_6->setText(QString::number(t_inv_matr[0][6]));
                ui->rfield1_6->setText(QString::number(t_inv_matr[1][6]));
                ui->rfield2_6->setText(QString::number(t_inv_matr[2][6]));
                ui->rfield3_6->setText(QString::number(t_inv_matr[3][6]));
                ui->rfield4_6->setText(QString::number(t_inv_matr[4][6]));
                ui->rfield5_6->setText(QString::number(t_inv_matr[5][6]));
                ui->rfield6_0->setText(QString::number(t_inv_matr[6][0]));
                ui->rfield6_1->setText(QString::number(t_inv_matr[6][1]));
                ui->rfield6_2->setText(QString::number(t_inv_matr[6][2]));
                ui->rfield6_3->setText(QString::number(t_inv_matr[6][3]));
                ui->rfield6_4->setText(QString::number(t_inv_matr[6][4]));
                ui->rfield6_5->setText(QString::number(t_inv_matr[6][5]));
                ui->rfield6_6->setText(QString::number(t_inv_matr[6][6]));
            }
            else if (i == 8){
                ui->rfield0_7->setText(QString::number(t_inv_matr[0][7]));
                ui->rfield1_7->setText(QString::number(t_inv_matr[0][7]));
                ui->rfield2_7->setText(QString::number(t_inv_matr[0][7]));
                ui->rfield3_7->setText(QString::number(t_inv_matr[0][7]));
                ui->rfield4_7->setText(QString::number(t_inv_matr[0][7]));
                ui->rfield5_7->setText(QString::number(t_inv_matr[0][7]));
                ui->rfield6_7->setText(QString::number(t_inv_matr[0][7]));
                ui->rfield7_0->setText(QString::number(t_inv_matr[7][0]));
                ui->rfield7_1->setText(QString::number(t_inv_matr[7][1]));
                ui->rfield7_2->setText(QString::number(t_inv_matr[7][2]));
                ui->rfield7_3->setText(QString::number(t_inv_matr[7][3]));
                ui->rfield7_4->setText(QString::number(t_inv_matr[7][4]));
                ui->rfield7_5->setText(QString::number(t_inv_matr[7][5]));
                ui->rfield7_6->setText(QString::number(t_inv_matr[7][6]));
                ui->rfield7_7->setText(QString::number(t_inv_matr[7][7]));
            }
            else if (i == 9){
                ui->rfield0_8->setText(QString::number(t_inv_matr[0][8]));
                ui->rfield1_8->setText(QString::number(t_inv_matr[1][8]));
                ui->rfield2_8->setText(QString::number(t_inv_matr[2][8]));
                ui->rfield3_8->setText(QString::number(t_inv_matr[3][8]));
                ui->rfield4_8->setText(QString::number(t_inv_matr[4][8]));
                ui->rfield5_8->setText(QString::number(t_inv_matr[5][8]));
                ui->rfield6_8->setText(QString::number(t_inv_matr[6][8]));
                ui->rfield7_8->setText(QString::number(t_inv_matr[7][8]));
                ui->rfield8_0->setText(QString::number(t_inv_matr[8][0]));
                ui->rfield8_1->setText(QString::number(t_inv_matr[8][1]));
                ui->rfield8_2->setText(QString::number(t_inv_matr[8][2]));
                ui->rfield8_3->setText(QString::number(t_inv_matr[8][3]));
                ui->rfield8_4->setText(QString::number(t_inv_matr[8][4]));
                ui->rfield8_5->setText(QString::number(t_inv_matr[8][5]));
                ui->rfield8_6->setText(QString::number(t_inv_matr[8][6]));
                ui->rfield8_7->setText(QString::number(t_inv_matr[8][7]));
                ui->rfield8_8->setText(QString::number(t_inv_matr[8][8]));
            }
            else if (i == 10){
                ui->rfield0_9->setText(QString::number(t_inv_matr[0][9]));
                ui->rfield1_9->setText(QString::number(t_inv_matr[1][9]));
                ui->rfield2_9->setText(QString::number(t_inv_matr[2][9]));
                ui->rfield3_9->setText(QString::number(t_inv_matr[3][9]));
                ui->rfield4_9->setText(QString::number(t_inv_matr[4][9]));
                ui->rfield5_9->setText(QString::number(t_inv_matr[5][9]));
                ui->rfield6_9->setText(QString::number(t_inv_matr[6][9]));
                ui->rfield7_9->setText(QString::number(t_inv_matr[7][9]));
                ui->rfield8_9->setText(QString::number(t_inv_matr[8][9]));
                ui->rfield9_0->setText(QString::number(t_inv_matr[9][0]));
                ui->rfield9_1->setText(QString::number(t_inv_matr[9][1]));
                ui->rfield9_2->setText(QString::number(t_inv_matr[9][2]));
                ui->rfield9_3->setText(QString::number(t_inv_matr[9][3]));
                ui->rfield9_4->setText(QString::number(t_inv_matr[9][4]));
                ui->rfield9_5->setText(QString::number(t_inv_matr[9][5]));
                ui->rfield9_6->setText(QString::number(t_inv_matr[9][6]));
                ui->rfield9_7->setText(QString::number(t_inv_matr[9][7]));
                ui->rfield9_8->setText(QString::number(t_inv_matr[9][8]));
                ui->rfield9_9->setText(QString::number(t_inv_matr[9][9]));
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
        ui->DeterminantField->setText("Invalid matrix size");
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

