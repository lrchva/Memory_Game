#include "numbermem.h"
#include "ui_NumberMem.h"

NumberMem::NumberMem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NumberMem)
{
    ui->setupUi(this);
    ui->label_Numbers->setVisible(false);
    ui->label_your_ans->setVisible(false);
    ui->label_correct_ans->setVisible(false);
    timer = new QTimer();
    QObject::connect(timer, SIGNAL(timeout()), this, SLOT(get_number()));
}

NumberMem::~NumberMem()
{
    delete ui;
}

void NumberMem::on_button_Start_clicked()
{
    ui->label_Level->setVisible(true);
    ui->button_Start->setVisible(false);
    ui->label_your_ans->setVisible(false);
    ui->label_correct_ans->setVisible(false);
    level = 1;
    bool correct = 1;
    next_level(level);
}

void NumberMem::next_level(int level){
    ui->label_Level->setText("Level: " + QString::number(level));
    number = 0;
    number_str = "";
    srand(time(nullptr));
    for (int i = 0; i < level; i++){
        number = 1 + rand() % 9;
        number_str = number_str + QString::number(number);
    }
    ui->label_Numbers->setText(number_str);
    ui->label_Numbers->setVisible(true);
    timer->setInterval((level + 1) * 1000);
    timer->start();
}


void NumberMem::get_number(){
    timer->stop();
    ui->label_Numbers->setVisible(false);
    bool ok;
    user_num = QInputDialog::getText(this, tr(""), tr("Enter number:"), QLineEdit::Normal, "-", &ok);

    if (number_str == user_num){
        level++;
        next_level(level);
    }
    else {
        ui->label_Level->setVisible(false);
        if (level > 6){
            ui->label_Numbers->setText("You reached level " + QString::number(level - 1) + "! Great job!");
        }
        else ui->label_Numbers->setText("You reached level " + QString::number(level - 1));

        ui->label_Numbers->setVisible(true);
        ui->label_your_ans->setText("Your answer: " + user_num);
        ui->label_correct_ans->setText("Correct answer: " + number_str);
        ui->label_your_ans->setVisible(true);
        ui->label_correct_ans->setVisible(true);
        ui->button_Start->setText("Try Again!");
        ui->button_Start->setVisible(true);
    }
}


