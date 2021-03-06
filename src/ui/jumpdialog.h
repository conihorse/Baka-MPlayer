#ifndef JUMPDIALOG_H
#define JUMPDIALOG_H

#include <QDialog>

namespace Ui {
class JumpDialog;
}

class JumpDialog : public QDialog
{
    Q_OBJECT

public:
    explicit JumpDialog(int maxTime, QWidget *parent = 0);
    ~JumpDialog();

    static int getTime(int maxTime, QWidget *parent = 0);

private slots:
    void validate();

private:
    Ui::JumpDialog *ui;

    int time,
        maxTime;
};

#endif // JUMPDIALOG_H
