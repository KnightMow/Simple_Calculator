#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_Bt0_clicked();

    void on_Bt1_clicked();

    void on_Bt2_clicked();

    void on_Bt3_clicked();

    void on_Bt4_clicked();

    void on_Bt5_clicked();

    void on_Bt6_clicked();

    void on_Bt7_clicked();

    void on_Bt8_clicked();

    void on_Bt9_clicked();

    void on_BtPlus_clicked();

    void on_BtMinus_clicked();

    void on_BtC_clicked();

    void on_BtCf_clicked();

    void on_BtResult_clicked();

    void on_BtMinus_2_clicked();

    void on_BtMinus_3_clicked();

    void on_BtMinus_4_clicked();

    QString str_compute();

private:
    Ui::Widget *ui;
    QString s;
};
#endif // WIDGET_H
