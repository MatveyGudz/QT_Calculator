#ifndef CALC_H
#define CALC_H

#include <QMainWindow>

namespace Ui { class Calc; }

class Calc : public QMainWindow
{
    Q_OBJECT

public:
    Calc(QWidget *parent = nullptr);
    ~Calc();

private:
    Ui::Calc *ui;

private slots :
    void NumPressed();
    void MathButtonPressed();
    void EqualButtonPressed();
};

#endif // CALC_H
