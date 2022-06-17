#include "textmem.h"
#include "ui_textmem.h"

TextMem::TextMem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TextMem)
{
    ui->setupUi(this);
    ui->label_Numbers->setVisible(false);
    ui->label_your_ans->setVisible(false);
    ui->label_correct_ans->setVisible(false);
    timer = new QTimer();
    QObject::connect(timer, SIGNAL(timeout()), this, SLOT(get_number()));
}

TextMem::~TextMem()
{
    delete ui;
}

void TextMem::on_button_Start_clicked()
{
    ui->button_Start->setVisible(false);
    ui->label_your_ans->setVisible(false);
    ui->label_correct_ans->setVisible(false);
    level = 1;
    bool correct = 1;
    next_level(level);
}

void TextMem::next_level(int level){
    ui->label_Level->setText("Level: " + QString::number(level));
    letter = ' ';
    game_text = "";
    srand(time(nullptr));
    for (int i = 0; i < level; i++){
        letter = QChar('a' + rand() % 26);
        game_text = game_text + letter;
    }
    ui->label_Numbers->setText(game_text);
    ui->label_Numbers->setVisible(true);
    timer->setInterval((level + 1) * 1000);
    timer->start();
}


void TextMem::get_number(){
    timer->stop();
    ui->label_Numbers->setVisible(false);
    bool ok;
    user_text = QInputDialog::getText(this, tr(""), tr("Enter text:"), QLineEdit::Normal, "-", &ok);

    if (game_text == user_text){
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
        ui->label_your_ans->setText("Your answer: " + user_text);
        ui->label_correct_ans->setText("Correct answer: " + game_text);
        ui->label_your_ans->setVisible(true);
        ui->label_correct_ans->setVisible(true);
        ui->button_Start->setText("Try Again!");
        ui->button_Start->setVisible(true);
    }
}
