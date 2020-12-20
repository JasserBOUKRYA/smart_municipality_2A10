#ifndef MENU_H
#define MENU_H

#include <QDialog>
#include "gestionemployee.h"
#include "gestioninstallation.h"
#include "gestiontaxe.h"
#include "gestionextrait.h"
#include <QSound>

namespace Ui {
class Menu;
}

class Menu : public QDialog
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = nullptr);
    ~Menu();
    void changerbuttoncolor(QPushButton * );

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void ShowTime();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::Menu *ui;
    QSound *son;
};

#endif // MENU_H
