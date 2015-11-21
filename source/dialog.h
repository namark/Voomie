#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QtUIUtils/fileselector.h>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private:
    Ui::Dialog *ui;

    QtUIUtils::FileSelector* file_selector;
};

#endif // DIALOG_H
