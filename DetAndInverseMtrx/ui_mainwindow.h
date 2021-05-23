/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *yourMtrxLabel;
    QLabel *inverseMtrxLabel;
    QWidget *layoutWidget;
    QHBoxLayout *DeterminantLayout;
    QLabel *detLabel;
    QLineEdit *DeterminantField;
    QLabel *errorLabel;
    QWidget *layoutWidget1;
    QHBoxLayout *TopPanel;
    QHBoxLayout *SizeMenu;
    QLabel *sizeOfMtrxLabel;
    QComboBox *comboBox;
    QHBoxLayout *Buttons;
    QSpacerItem *SpacerBetweenMenuAndButtons;
    QPushButton *detButton;
    QPushButton *inverseMtrxButton;
    QPushButton *closeButton;
    QWidget *gridLayoutWidget;
    QGridLayout *grid;
    QWidget *gridLayoutWidget_2;
    QGridLayout *rgrid;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1500, 750);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1500, 750));
        MainWindow->setMaximumSize(QSize(1500, 750));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        yourMtrxLabel = new QLabel(centralwidget);
        yourMtrxLabel->setObjectName(QString::fromUtf8("yourMtrxLabel"));
        yourMtrxLabel->setGeometry(QRect(310, 260, 91, 31));
        inverseMtrxLabel = new QLabel(centralwidget);
        inverseMtrxLabel->setObjectName(QString::fromUtf8("inverseMtrxLabel"));
        inverseMtrxLabel->setGeometry(QRect(1070, 260, 101, 41));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(510, 100, 421, 41));
        DeterminantLayout = new QHBoxLayout(layoutWidget);
        DeterminantLayout->setObjectName(QString::fromUtf8("DeterminantLayout"));
        DeterminantLayout->setContentsMargins(0, 0, 0, 0);
        detLabel = new QLabel(layoutWidget);
        detLabel->setObjectName(QString::fromUtf8("detLabel"));

        DeterminantLayout->addWidget(detLabel);

        DeterminantField = new QLineEdit(layoutWidget);
        DeterminantField->setObjectName(QString::fromUtf8("DeterminantField"));
        DeterminantField->setReadOnly(true);

        DeterminantLayout->addWidget(DeterminantField);

        errorLabel = new QLabel(centralwidget);
        errorLabel->setObjectName(QString::fromUtf8("errorLabel"));
        errorLabel->setGeometry(QRect(510, 170, 421, 21));
        errorLabel->setAlignment(Qt::AlignCenter);
        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(80, 20, 1305, 29));
        TopPanel = new QHBoxLayout(layoutWidget1);
        TopPanel->setObjectName(QString::fromUtf8("TopPanel"));
        TopPanel->setContentsMargins(0, 0, 0, 0);
        SizeMenu = new QHBoxLayout();
        SizeMenu->setObjectName(QString::fromUtf8("SizeMenu"));
        sizeOfMtrxLabel = new QLabel(layoutWidget1);
        sizeOfMtrxLabel->setObjectName(QString::fromUtf8("sizeOfMtrxLabel"));

        SizeMenu->addWidget(sizeOfMtrxLabel);

        comboBox = new QComboBox(layoutWidget1);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        SizeMenu->addWidget(comboBox);


        TopPanel->addLayout(SizeMenu);

        Buttons = new QHBoxLayout();
        Buttons->setObjectName(QString::fromUtf8("Buttons"));
        SpacerBetweenMenuAndButtons = new QSpacerItem(750, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        Buttons->addItem(SpacerBetweenMenuAndButtons);

        detButton = new QPushButton(layoutWidget1);
        detButton->setObjectName(QString::fromUtf8("detButton"));

        Buttons->addWidget(detButton);

        inverseMtrxButton = new QPushButton(layoutWidget1);
        inverseMtrxButton->setObjectName(QString::fromUtf8("inverseMtrxButton"));

        Buttons->addWidget(inverseMtrxButton);

        closeButton = new QPushButton(layoutWidget1);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        Buttons->addWidget(closeButton);


        TopPanel->addLayout(Buttons);

        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(47, 320, 661, 381));
        grid = new QGridLayout(gridLayoutWidget);
        grid->setSpacing(0);
        grid->setObjectName(QString::fromUtf8("grid"));
        grid->setSizeConstraint(QLayout::SetFixedSize);
        grid->setContentsMargins(0, 0, 0, 0);
        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(790, 320, 661, 381));
        rgrid = new QGridLayout(gridLayoutWidget_2);
        rgrid->setObjectName(QString::fromUtf8("rgrid"));
        rgrid->setHorizontalSpacing(1);
        rgrid->setVerticalSpacing(0);
        rgrid->setContentsMargins(0, 0, 0, 0);
        MainWindow->setCentralWidget(centralwidget);
#if QT_CONFIG(shortcut)
        detLabel->setBuddy(DeterminantField);
        sizeOfMtrxLabel->setBuddy(comboBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(comboBox, detButton);
        QWidget::setTabOrder(detButton, DeterminantField);
        QWidget::setTabOrder(DeterminantField, inverseMtrxButton);
        QWidget::setTabOrder(inverseMtrxButton, closeButton);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        yourMtrxLabel->setText(QCoreApplication::translate("MainWindow", "Your matrix:", nullptr));
        inverseMtrxLabel->setText(QCoreApplication::translate("MainWindow", "Inversed matrix:", nullptr));
        detLabel->setText(QCoreApplication::translate("MainWindow", "Determinant of the matrix:", nullptr));
        errorLabel->setText(QString());
        sizeOfMtrxLabel->setText(QCoreApplication::translate("MainWindow", "Size of the matrix", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "0", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "1", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "2", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "3", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "4", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("MainWindow", "5", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("MainWindow", "6", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("MainWindow", "7", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("MainWindow", "8", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("MainWindow", "9", nullptr));
        comboBox->setItemText(10, QCoreApplication::translate("MainWindow", "10", nullptr));

        detButton->setText(QCoreApplication::translate("MainWindow", "Calculate determinant", nullptr));
        inverseMtrxButton->setText(QCoreApplication::translate("MainWindow", "Calculate inversed matrix", nullptr));
        closeButton->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
