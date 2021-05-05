#ifndef ITEMSETTINGSDIALOG_H
#define ITEMSETTINGSDIALOG_H

#include <QDialog>

namespace Ui {
class ItemSettingsDialog;
}

class ItemSettingsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ItemSettingsDialog(float _mass,
                                float _radious,
                                float _xSpeed,
                                float _ySpeed,
                                QWidget *parent = nullptr);
    ~ItemSettingsDialog();
private:
    void Init(float _mass, float _radious, float _xSpeed, float _ySpeed);

private:
    Ui::ItemSettingsDialog *ui;
};

#endif // ITEMSETTINGSDIALOG_H
