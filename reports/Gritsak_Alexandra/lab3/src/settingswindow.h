#ifndef SETTINGSWINDOW_H
#define SETTINGSWINDOW_H

#include <QDialog>
#include <QtWidgets>

extern int sizeField;
extern int countMines;

class SettingsWindow : public QDialog
{
public:
    SettingsWindow(int &sizeField, int &countMines, QWidget *parent = 0);
    ~SettingsWindow();

    QVBoxLayout *up_left, *up_right, *full;
    QHBoxLayout *up, *down;
    QRadioButton *rb_easy;
    QPushButton *pb_ok, *pb_cancel;
    QLineEdit *le_size, *le_countOfMines;

    QIcon windowIcon;

public slots:
    void clicked_cancel();
    void clicked_ok();
};

#endif // SETTINGSWINDOW_H
