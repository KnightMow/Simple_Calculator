#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_Bt0_clicked()
{
    s += '0';
    this->ui->label->setText(s);
}


void Widget::on_Bt1_clicked()
{
    s += '1';
    this->ui->label->setText(s);
}


void Widget::on_Bt2_clicked()
{
    s += '2';
    this->ui->label->setText(s);
}


void Widget::on_Bt3_clicked()
{
    s += '3';
    this->ui->label->setText(s);
}


void Widget::on_Bt4_clicked()
{
    s += '4';
    this->ui->label->setText(s);
}


void Widget::on_Bt5_clicked()
{
    s += '5';
    this->ui->label->setText(s);
}


void Widget::on_Bt6_clicked()
{
    s += '6';
    this->ui->label->setText(s);
}


void Widget::on_Bt7_clicked()
{
    s += '7';
    this->ui->label->setText(s);
}


void Widget::on_Bt8_clicked()
{
    s += '8';
    this->ui->label->setText(s);
}


void Widget::on_Bt9_clicked()
{
    s += '9';
    this->ui->label->setText(s);
}


void Widget::on_BtPlus_clicked()
{
    s += '+';
    this->ui->label->setText(s);
}


void Widget::on_BtMinus_clicked()
{
    s += '-';
    this->ui->label->setText(s);
}


void Widget::on_BtC_clicked()
{
    s += '*';
    this->ui->label->setText(s);
}


void Widget::on_BtCf_clicked()
{
    s += '/';
    this->ui->label->setText(s);
}

QString Widget::str_compute(){  //这里实现字符串表达式的计算
    //括号匹配 中缀转后缀 计算后缀表达式 计算中缀表达式
    //https://blog.csdn.net/dennis_fan/article/details/8615592?utm_medium=distribute.pc_relevant.none-task-blog-2~default~baidujs_baidulandingword~default-16-8615592-blog-108446855.235^v43^pc_blog_bottom_relevance_base8&spm=1001.2101.3001.4242.9&utm_relevant_index=18
    //步骤1：将中缀表达式转化为后缀表达式

    //步骤2：将后缀表达式计算（通过栈的方法）

    QString ss = "result";
    return ss;
}

void Widget::on_BtResult_clicked()
{
    s += '=';
    s += str_compute();
    this->ui->label->setText(s);

}


void Widget::on_BtMinus_2_clicked()
{
    s += '(';
    this->ui->label->setText(s);
}


void Widget::on_BtMinus_3_clicked()
{
    s += ')';
    this->ui->label->setText(s);
}


void Widget::on_BtMinus_4_clicked()
{
    s = ' ';
    this->ui->label->setText(s);
}

