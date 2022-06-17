#ifndef NUMBERMEM_H
#define NUMBERMEM_H

#include <QWidget>
#include <QTimer>
#include <ctime>
#include <QString>
#include <QInputDialog>


namespace Ui {
class NumberMem;
}

/// NumberMem Class
///
/// Class that provides us with game logic for Number Memory mode
class NumberMem : public QWidget
{
    Q_OBJECT

public:
    explicit NumberMem(QWidget *parent = nullptr);

    /// The destructor
    ~NumberMem();

    /// The instance of class QTimer
    QTimer* timer;

    /// Field user_num variable by default "-"
    QString user_num = "-";

    /// Field number_str variable by default ""
    QString number_str = "";

    /// Field number variable by default 0
    int number = 0;

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
    void get_number();

private:
    Ui::NumberMem *ui;
};

#endif // NUMBERMEM_H
