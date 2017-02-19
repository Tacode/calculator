/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *b_4;
    QPushButton *b_1;
    QPushButton *b_9;
    QPushButton *b_8;
    QPushButton *b_multi;
    QPushButton *b_mod;
    QPushButton *b_div;
    QPushButton *b_3;
    QPushButton *b_sub;
    QPushButton *b_6;
    QPushButton *b_plus;
    QPushButton *b_dot;
    QPushButton *b_2;
    QPushButton *b_signed;
    QPushButton *b_0;
    QPushButton *b_7;
    QPushButton *b_5;
    QPushButton *b_equ;
    QPushButton *b_clear;
    QLabel *l_result;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(327, 428);
        MainWindow->setMaximumSize(QSize(328, 428));
        QIcon icon;
        icon.addFile(QStringLiteral("calculate.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(0);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        b_4 = new QPushButton(centralWidget);
        b_4->setObjectName(QStringLiteral("b_4"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(b_4->sizePolicy().hasHeightForWidth());
        b_4->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(15);
        b_4->setFont(font);
        b_4->setFlat(false);

        gridLayout->addWidget(b_4, 3, 0, 1, 1);

        b_1 = new QPushButton(centralWidget);
        b_1->setObjectName(QStringLiteral("b_1"));
        sizePolicy.setHeightForWidth(b_1->sizePolicy().hasHeightForWidth());
        b_1->setSizePolicy(sizePolicy);
        b_1->setFont(font);
        b_1->setFlat(false);

        gridLayout->addWidget(b_1, 4, 0, 1, 1);

        b_9 = new QPushButton(centralWidget);
        b_9->setObjectName(QStringLiteral("b_9"));
        sizePolicy.setHeightForWidth(b_9->sizePolicy().hasHeightForWidth());
        b_9->setSizePolicy(sizePolicy);
        b_9->setFont(font);
        b_9->setFlat(false);

        gridLayout->addWidget(b_9, 2, 2, 1, 1);

        b_8 = new QPushButton(centralWidget);
        b_8->setObjectName(QStringLiteral("b_8"));
        sizePolicy.setHeightForWidth(b_8->sizePolicy().hasHeightForWidth());
        b_8->setSizePolicy(sizePolicy);
        b_8->setFont(font);
        b_8->setFlat(false);

        gridLayout->addWidget(b_8, 2, 1, 1, 1);

        b_multi = new QPushButton(centralWidget);
        b_multi->setObjectName(QStringLiteral("b_multi"));
        sizePolicy.setHeightForWidth(b_multi->sizePolicy().hasHeightForWidth());
        b_multi->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        font1.setWeight(75);
        b_multi->setFont(font1);
        b_multi->setStyleSheet(QLatin1String("QPushButton{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(255, 170, 0);\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(255, 255, 255);\n"
"    \n"
"	background-color: rgb(255, 255, 0);\n"
"}"));
        b_multi->setFlat(false);

        gridLayout->addWidget(b_multi, 2, 3, 1, 1);

        b_mod = new QPushButton(centralWidget);
        b_mod->setObjectName(QStringLiteral("b_mod"));
        sizePolicy.setHeightForWidth(b_mod->sizePolicy().hasHeightForWidth());
        b_mod->setSizePolicy(sizePolicy);
        b_mod->setFont(font);
        b_mod->setFlat(false);

        gridLayout->addWidget(b_mod, 1, 2, 1, 1);

        b_div = new QPushButton(centralWidget);
        b_div->setObjectName(QStringLiteral("b_div"));
        sizePolicy.setHeightForWidth(b_div->sizePolicy().hasHeightForWidth());
        b_div->setSizePolicy(sizePolicy);
        b_div->setFont(font1);
        b_div->setStyleSheet(QLatin1String("QPushButton{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(255, 170, 0);\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(255, 255, 255);\n"
"    \n"
"	background-color: rgb(255, 255, 0);\n"
"}"));
        b_div->setFlat(false);

        gridLayout->addWidget(b_div, 1, 3, 1, 1);

        b_3 = new QPushButton(centralWidget);
        b_3->setObjectName(QStringLiteral("b_3"));
        sizePolicy.setHeightForWidth(b_3->sizePolicy().hasHeightForWidth());
        b_3->setSizePolicy(sizePolicy);
        b_3->setFont(font);
        b_3->setFlat(false);

        gridLayout->addWidget(b_3, 4, 2, 1, 1);

        b_sub = new QPushButton(centralWidget);
        b_sub->setObjectName(QStringLiteral("b_sub"));
        sizePolicy.setHeightForWidth(b_sub->sizePolicy().hasHeightForWidth());
        b_sub->setSizePolicy(sizePolicy);
        b_sub->setFont(font1);
        b_sub->setStyleSheet(QLatin1String("QPushButton{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(255, 170, 0);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(255, 255, 255);\n"
"    \n"
"	background-color: rgb(255, 255, 0);\n"
"}"));
        b_sub->setFlat(false);

        gridLayout->addWidget(b_sub, 3, 3, 1, 1);

        b_6 = new QPushButton(centralWidget);
        b_6->setObjectName(QStringLiteral("b_6"));
        sizePolicy.setHeightForWidth(b_6->sizePolicy().hasHeightForWidth());
        b_6->setSizePolicy(sizePolicy);
        b_6->setFont(font);
        b_6->setFlat(false);

        gridLayout->addWidget(b_6, 3, 2, 1, 1);

        b_plus = new QPushButton(centralWidget);
        b_plus->setObjectName(QStringLiteral("b_plus"));
        sizePolicy.setHeightForWidth(b_plus->sizePolicy().hasHeightForWidth());
        b_plus->setSizePolicy(sizePolicy);
        b_plus->setFont(font1);
        b_plus->setStyleSheet(QLatin1String("QPushButton{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(255, 170, 0);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(255, 255, 255);\n"
"    \n"
"	background-color: rgb(255, 255, 0);\n"
"}"));
        b_plus->setFlat(false);

        gridLayout->addWidget(b_plus, 4, 3, 1, 1);

        b_dot = new QPushButton(centralWidget);
        b_dot->setObjectName(QStringLiteral("b_dot"));
        sizePolicy.setHeightForWidth(b_dot->sizePolicy().hasHeightForWidth());
        b_dot->setSizePolicy(sizePolicy);
        b_dot->setFont(font);
        b_dot->setFlat(false);

        gridLayout->addWidget(b_dot, 5, 2, 1, 1);

        b_2 = new QPushButton(centralWidget);
        b_2->setObjectName(QStringLiteral("b_2"));
        sizePolicy.setHeightForWidth(b_2->sizePolicy().hasHeightForWidth());
        b_2->setSizePolicy(sizePolicy);
        b_2->setFont(font);
        b_2->setFlat(false);

        gridLayout->addWidget(b_2, 4, 1, 1, 1);

        b_signed = new QPushButton(centralWidget);
        b_signed->setObjectName(QStringLiteral("b_signed"));
        sizePolicy.setHeightForWidth(b_signed->sizePolicy().hasHeightForWidth());
        b_signed->setSizePolicy(sizePolicy);
        b_signed->setFont(font);
        b_signed->setFlat(false);

        gridLayout->addWidget(b_signed, 1, 1, 1, 1);

        b_0 = new QPushButton(centralWidget);
        b_0->setObjectName(QStringLiteral("b_0"));
        sizePolicy.setHeightForWidth(b_0->sizePolicy().hasHeightForWidth());
        b_0->setSizePolicy(sizePolicy);
        b_0->setFont(font);
        b_0->setFlat(false);

        gridLayout->addWidget(b_0, 5, 0, 1, 2);

        b_7 = new QPushButton(centralWidget);
        b_7->setObjectName(QStringLiteral("b_7"));
        sizePolicy.setHeightForWidth(b_7->sizePolicy().hasHeightForWidth());
        b_7->setSizePolicy(sizePolicy);
        b_7->setFont(font);
        b_7->setFlat(false);

        gridLayout->addWidget(b_7, 2, 0, 1, 1);

        b_5 = new QPushButton(centralWidget);
        b_5->setObjectName(QStringLiteral("b_5"));
        sizePolicy.setHeightForWidth(b_5->sizePolicy().hasHeightForWidth());
        b_5->setSizePolicy(sizePolicy);
        b_5->setFont(font);
        b_5->setFlat(false);

        gridLayout->addWidget(b_5, 3, 1, 1, 1);

        b_equ = new QPushButton(centralWidget);
        b_equ->setObjectName(QStringLiteral("b_equ"));
        sizePolicy.setHeightForWidth(b_equ->sizePolicy().hasHeightForWidth());
        b_equ->setSizePolicy(sizePolicy);
        b_equ->setFont(font1);
        b_equ->setStyleSheet(QLatin1String("QPushButton{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(255, 170, 0);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(255, 255, 255);\n"
"    \n"
"	background-color: rgb(255, 255, 0);\n"
"}"));
        b_equ->setFlat(false);

        gridLayout->addWidget(b_equ, 5, 3, 1, 1);

        b_clear = new QPushButton(centralWidget);
        b_clear->setObjectName(QStringLiteral("b_clear"));
        sizePolicy.setHeightForWidth(b_clear->sizePolicy().hasHeightForWidth());
        b_clear->setSizePolicy(sizePolicy);
        b_clear->setFont(font);
        b_clear->setFlat(false);

        gridLayout->addWidget(b_clear, 1, 0, 1, 1);

        l_result = new QLabel(centralWidget);
        l_result->setObjectName(QStringLiteral("l_result"));
        QFont font2;
        font2.setPointSize(55);
        l_result->setFont(font2);
        l_result->setStyleSheet(QLatin1String("background-color: rgb(57, 57, 57);\n"
"color: rgb(255, 255, 255);"));
        l_result->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(l_result, 0, 0, 1, 4);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\350\256\241\347\256\227\345\231\250", 0));
        b_4->setText(QApplication::translate("MainWindow", "4", 0));
        b_1->setText(QApplication::translate("MainWindow", "1", 0));
        b_9->setText(QApplication::translate("MainWindow", "9", 0));
        b_8->setText(QApplication::translate("MainWindow", "8", 0));
        b_multi->setText(QApplication::translate("MainWindow", "\303\227", 0));
        b_mod->setText(QApplication::translate("MainWindow", "%", 0));
        b_div->setText(QApplication::translate("MainWindow", "\303\267", 0));
        b_3->setText(QApplication::translate("MainWindow", "3", 0));
        b_sub->setText(QApplication::translate("MainWindow", "-", 0));
        b_6->setText(QApplication::translate("MainWindow", "6", 0));
        b_plus->setText(QApplication::translate("MainWindow", "+", 0));
        b_dot->setText(QApplication::translate("MainWindow", ".", 0));
        b_2->setText(QApplication::translate("MainWindow", "2", 0));
        b_signed->setText(QApplication::translate("MainWindow", "+/-", 0));
        b_0->setText(QApplication::translate("MainWindow", "0", 0));
        b_7->setText(QApplication::translate("MainWindow", "7", 0));
        b_5->setText(QApplication::translate("MainWindow", "5", 0));
        b_equ->setText(QApplication::translate("MainWindow", "=", 0));
        b_clear->setText(QApplication::translate("MainWindow", "AC", 0));
        l_result->setText(QApplication::translate("MainWindow", "0", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
