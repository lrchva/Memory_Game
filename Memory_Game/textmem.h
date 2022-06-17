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

/// TextMem Class
///
/// Class that provides us with game logic for Text Memory mode
class TextMem : public QWidget
{
    Q_OBJECT

public:
    explicit TextMem(QWidget *parent = nullptr);

    /// The destructor
    ~TextMem();

    /// The instance of class QTimer
    QTimer* timer;

    /// Field user_text variable by default "-"
    QString user_text = "-";

    /// Field game_text variable by default ""
    QString game_text = "";

    /// Field letter variable by default 0
    QChar letter = ' ';

    /// Field number variable by default 1
    int level = 1;

private slots:
    /// \brief The function starts the game, changes the visibility of "Start button" when the button is clicked
    void on_button_Start_clicked();

    /// \brief The function starts the new level, provides the sequence of characters and sets the timer
    ///
    /// \param level The current level the user has
    void next_level(int level);

    /// \brief The function that checks if the answer is correct
    void get_text();


private:
    Ui::TextMem *ui;
};

#endif // TEXTMEM_H
