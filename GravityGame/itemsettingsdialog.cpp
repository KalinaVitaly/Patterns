#include "itemsettingsdialog.h"
#include "ui_itemsettingsdialog.h"
#include <QDebug>

ItemSettingsDialog::ItemSettingsDialog(float _mass,
                                       float _radious,
                                       float _xSpeed,
                                       float _ySpeed,
                                       QWidget *parent)
    : QDialog(parent),
      ui(new Ui::ItemSettingsDialog)
{
    Init(_mass, _radious, _xSpeed, _ySpeed);
}

void ItemSettingsDialog::Init(float _mass,
                              float _radious,
                              float _xSpeed,
                              float _ySpeed)
{
    ui->setupUi(this);
    setFixedSize(300, 250);

    ui->MassEdit->setText(QString::number(_mass));
    ui->RadiousEdit->setText(QString::number(_radious));
    ui->xSpeedEdit->setText(QString::number(_xSpeed));
    ui->ySpeedEdit->setText(QString::number(_ySpeed));

    connect(ui->SetButton, &QPushButton::clicked, this, &ItemSettingsDialog::SlotSetParametrs);
}

void ItemSettingsDialog::SlotSetParametrs()
{
    ObjectParametrs objectParams;

    objectParams.mass = ui->MassEdit->text().toDouble();
    objectParams.radious = ui->RadiousEdit->text().toDouble();
    objectParams.xSpeed = ui->xSpeedEdit->text().toDouble();
    objectParams.ySpeed = ui->ySpeedEdit->text().toDouble();

    emit SignalSetObjectParametrs(objectParams);

    close();
}

ItemSettingsDialog::~ItemSettingsDialog()
{
    delete ui;
}
