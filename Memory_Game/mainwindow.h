#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "numbermem.h"
#include "textmem.h"

/// MainWindow Class
///
/// Class that provides us with main game window and lets us choose game mode

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    /// The constructor that creates QWidget of main window
    MainWindow(QWidget *parent = nullptr);
    /// The destructor
    ~MainWindow();

private slots:
    /// The function opens Number Memory window when the button is clicked
    void on_button_numbermem_clicked();

    /// The function opens Text Memory window when the button is clicked
    void on_button_textmem_clicked();

private:
    Ui::MainWindow *ui;

    /// The instance of class NumberMem
    NumberMem* numberMem;

    /// The instance of class TextMem
    TextMem* textMem;
};
#endif // MAINWINDOW_H
