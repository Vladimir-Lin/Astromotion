#ifndef ASTROMOTION_HPP
#define ASTROMOTION_HPP

#include <QMainWindow>
#include <QApplication>

namespace Ui {
class Astromotion;
}

class Astromotion : public QMainWindow
{
    Q_OBJECT

public:
    explicit Astromotion(QWidget *parent = 0);
    ~Astromotion();

private:
    Ui::Astromotion *ui;
};

#endif // ASTROMOTION_H
