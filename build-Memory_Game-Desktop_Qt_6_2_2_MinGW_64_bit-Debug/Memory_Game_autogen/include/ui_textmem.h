/********************************************************************************
** Form generated from reading UI file 'textmem.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTMEM_H
#define UI_TEXTMEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextMem
{
public:
    QLabel *label_Numbers;
    QLabel *label_Level;
    QPushButton *button_Start;
    QLabel *label;
    QLabel *label_your_ans;
    QLabel *label_correct_ans;

    void setupUi(QWidget *TextMem)
    {
        if (TextMem->objectName().isEmpty())
            TextMem->setObjectName(QString::fromUtf8("TextMem"));
        TextMem->resize(800, 600);
        TextMem->setMinimumSize(QSize(800, 600));
        TextMem->setMaximumSize(QSize(800, 600));
        label_Numbers = new QLabel(TextMem);
        label_Numbers->setObjectName(QString::fromUtf8("label_Numbers"));
        label_Numbers->setGeometry(QRect(0, 170, 800, 80));
        label_Numbers->setMinimumSize(QSize(800, 80));
        label_Numbers->setMaximumSize(QSize(800, 80));
        QFont font;
        font.setPointSize(20);
        label_Numbers->setFont(font);
        label_Numbers->setAlignment(Qt::AlignCenter);
        label_Level = new QLabel(TextMem);
        label_Level->setObjectName(QString::fromUtf8("label_Level"));
        label_Level->setGeometry(QRect(10, 0, 175, 100));
        label_Level->setMinimumSize(QSize(175, 100));
        label_Level->setMaximumSize(QSize(175, 100));
        QFont font1;
        font1.setPointSize(18);
        label_Level->setFont(font1);
        button_Start = new QPushButton(TextMem);
        button_Start->setObjectName(QString::fromUtf8("button_Start"));
        button_Start->setGeometry(QRect(300, 450, 200, 75));
        button_Start->setMinimumSize(QSize(200, 75));
        button_Start->setMaximumSize(QSize(200, 75));
        QFont font2;
        font2.setPointSize(16);
        button_Start->setFont(font2);
        label = new QLabel(TextMem);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 800, 100));
        label->setMinimumSize(QSize(800, 100));
        label->setMaximumSize(QSize(800, 100));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_your_ans = new QLabel(TextMem);
        label_your_ans->setObjectName(QString::fromUtf8("label_your_ans"));
        label_your_ans->setGeometry(QRect(0, 310, 800, 30));
        label_your_ans->setMinimumSize(QSize(800, 30));
        label_your_ans->setMaximumSize(QSize(800, 30));
        QFont font3;
        font3.setPointSize(14);
        label_your_ans->setFont(font3);
        label_your_ans->setAlignment(Qt::AlignCenter);
        label_correct_ans = new QLabel(TextMem);
        label_correct_ans->setObjectName(QString::fromUtf8("label_correct_ans"));
        label_correct_ans->setGeometry(QRect(0, 360, 800, 30));
        label_correct_ans->setMinimumSize(QSize(800, 30));
        label_correct_ans->setMaximumSize(QSize(800, 30));
        label_correct_ans->setFont(font3);
        label_correct_ans->setAlignment(Qt::AlignCenter);

        retranslateUi(TextMem);

        QMetaObject::connectSlotsByName(TextMem);
    } // setupUi

    void retranslateUi(QWidget *TextMem)
    {
        TextMem->setWindowTitle(QCoreApplication::translate("TextMem", "Form", nullptr));
        label_Numbers->setText(QCoreApplication::translate("TextMem", "text", nullptr));
        label_Level->setText(QCoreApplication::translate("TextMem", "Level", nullptr));
        button_Start->setText(QCoreApplication::translate("TextMem", "Start!", nullptr));
        label->setText(QCoreApplication::translate("TextMem", "Text Memory", nullptr));
        label_your_ans->setText(QCoreApplication::translate("TextMem", "Your answer:", nullptr));
        label_correct_ans->setText(QCoreApplication::translate("TextMem", "Correct answer:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TextMem: public Ui_TextMem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTMEM_H
