#include "itemsettingsdialog.h"
#include "ui_itemsettingsdialog.h"

ItemSettingsDialog::ItemSettingsDialog(float _mass, float _radious, float _xSpeed, float _ySpeed, QWidget *parent)
    : QDialog(parent),
      ui(new Ui::ItemSettingsDialog)
{
    Init(_mass, _radious, _xSpeed, _ySpeed);
}

void ItemSettingsDialog::Init(float _mass, float _radious, float _xSpeed, float _ySpeed)
{
    ui->setupUi(this);
    setFixedSize(300, 250);

    ui->MassEdit->setText(QString::number(_mass));
    ui->RadiousEdit->setText(QString::number(_radious));
    ui->xSpeedEdit->setText(QString::number(_xSpeed));
    ui->ySpeedEdit->setText(QString::number(_ySpeed));
}

ItemSettingsDialog::~ItemSettingsDialog()
{
    delete ui;
}
