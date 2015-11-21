#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    file_selector = new QtUIUtils::FileSelector(this,
                                                ui->frame_list, ui->btn_add, ui->btn_remove,
                                                "Select Images",
                                                "Image Files (*.png *.jpg *.jpeg *.bmp *.xpm *.xbm *.ppm)"
                                                );
}

Dialog::~Dialog()
{
    delete ui;
}
