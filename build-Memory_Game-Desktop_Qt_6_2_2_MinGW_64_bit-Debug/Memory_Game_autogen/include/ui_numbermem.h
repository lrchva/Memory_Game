/********************************************************************************
** Form generated from reading UI file 'NumberMem.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUMBERMEM_H
#define UI_NUMBERMEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NumberMem
{
public:
    QPushButton *button_Start;
    QLabel *label;
    QLabel *label_Numbers;
    QLabel *label_Level;
    QLabel *label_your_ans;
    QLabel *label_correct_ans;

    void setupUi(QWidget *NumberMem)
    {
        if (NumberMem->objectName().isEmpty())
            NumberMem->setObjectName(QString::fromUtf8("NumberMem"));
        NumberMem->resize(800, 600);
        NumberMem->setMinimumSize(QSize(800, 600));
        NumberMem->setMaximumSize(QSize(800, 600));
        button_Start = new QPushButton(NumberMem);
        button_Start->setObjectName(QString::fromUtf8("button_Start"));
        button_Start->setGeometry(QRect(300, 450, 200, 75));
        button_Start->setMinimumSize(QSize(200, 75));
        button_Start->setMaximumSize(QSize(200, 75));
        QFont font;
        font.setFamilies({QString::fromUtf8("Verdana")});
        font.setPointSize(16);
        button_Start->setFont(font);
        label = new QLabel(NumberMem);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 800, 100));
        label->setMinimumSize(QSize(800, 100));
        label->setMaximumSize(QSize(800, 100));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Verdana")});
        font1.setPointSize(20);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        label_Numbers = new QLabel(NumberMem);
        label_Numbers->setObjectName(QString::fromUtf8("label_Numbers"));
        label_Numbers->setGeometry(QRect(0, 170, 800, 80));
        label_Numbers->setMinimumSize(QSize(800, 80));
        label_Numbers->setMaximumSize(QSize(800, 80));
        label_Numbers->setFont(font1);
        label_Numbers->setAlignment(Qt::AlignCenter);
        label_Level = new QLabel(NumberMem);
        label_Level->setObjectName(QString::fromUtf8("label_Level"));
        label_Level->setGeometry(QRect(10, 0, 175, 100));
        label_Level->setMinimumSize(QSize(175, 100));
        label_Level->setMaximumSize(QSize(175, 100));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Verdana")});
        font2.setPointSize(18);
        label_Level->setFont(font2);
        label_your_ans = new QLabel(NumberMem);
        label_your_ans->setObjectName(QString::fromUtf8("label_your_ans"));
        label_your_ans->setGeometry(QRect(0, 300, 800, 30));
        label_your_ans->setMinimumSize(QSize(800, 30));
        label_your_ans->setMaximumSize(QSize(800, 30));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Verdana")});
        font3.setPointSize(14);
        label_your_ans->setFont(font3);
        label_your_ans->setAlignment(Qt::AlignCenter);
        label_correct_ans = new QLabel(NumberMem);
        label_correct_ans->setObjectName(QString::fromUtf8("label_correct_ans"));
        label_correct_ans->setGeometry(QRect(0, 350, 800, 30));
        label_correct_ans->setMinimumSize(QSize(800, 30));
        label_correct_ans->setMaximumSize(QSize(800, 30));
        QFont font4;
        font4.setPointSize(14);
        label_correct_ans->setFont(font4);
        label_correct_ans->setAlignment(Qt::AlignCenter);

        retranslateUi(NumberMem);

        QMetaObject::connectSlotsByName(NumberMem);
    } // setupUi

    void retranslateUi(QWidget *NumberMem)
    {
        NumberMem->setWindowTitle(QCoreApplication::translate("NumberMem", "Form", nullptr));
        button_Start->setText(QCoreApplication::translate("NumberMem", "Start!", nullptr));
        label->setText(QCoreApplication::translate("NumberMem", "Number Memory", nullptr));
        label_Numbers->setText(QCoreApplication::translate("NumberMem", "number", nullptr));
        label_Level->setText(QCoreApplication::translate("NumberMem", "Level", nullptr));
        label_your_ans->setText(QCoreApplication::translate("NumberMem", "Your answer:", nullptr));
        label_correct_ans->setText(QCoreApplication::translate("NumberMem", "Correct answer:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NumberMem: public Ui_NumberMem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUMBERMEM_H
