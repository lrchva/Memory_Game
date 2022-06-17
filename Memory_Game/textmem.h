#ifndef TEXTMEM_H
#define TEXTMEM_H

#include <QWidget>
#include <QTimer>
#include <ctime>
#include <QString>
#include <QInputDialog>
#include <QChar>

namespace Ui {
class TextMem;
}

class TextMem : public QWidget
{
    Q_OBJECT

public:
    explicit TextMem(QWidget *parent = nullptr);
    ~TextMem();
    QTimer* timer;
    QString user_text = "-";
    QString game_text = "";
    QChar letter = ' ';
    int level = 1;

private slots:
    void on_button_Start_clicked();
    void get_number();
    void next_level(int level);

private:
    Ui::TextMem *ui;
};

#endif // TEXTMEM_H
