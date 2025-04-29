/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *Bt7;
    QPushButton *Bt8;
    QPushButton *Bt9;
    QPushButton *BtC;
    QPushButton *Bt4;
    QPushButton *Bt5;
    QPushButton *Bt6;
    QPushButton *BtCf;
    QPushButton *Bt1;
    QPushButton *Bt2;
    QPushButton *Bt3;
    QPushButton *BtResult;
    QPushButton *Bt0;
    QPushButton *BtPlus;
    QPushButton *BtMinus;
    QPushButton *BtMinus_2;
    QPushButton *BtMinus_3;
    QPushButton *BtMinus_4;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(300, 450);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Widget->sizePolicy().hasHeightForWidth());
        Widget->setSizePolicy(sizePolicy);
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 20, 271, 61));
        QFont font;
        font.setPointSize(19);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        widget = new QWidget(Widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 110, 271, 331));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Bt7 = new QPushButton(widget);
        Bt7->setObjectName("Bt7");
        sizePolicy.setHeightForWidth(Bt7->sizePolicy().hasHeightForWidth());
        Bt7->setSizePolicy(sizePolicy);
        Bt7->setFont(font);

        gridLayout->addWidget(Bt7, 0, 0, 1, 1);

        Bt8 = new QPushButton(widget);
        Bt8->setObjectName("Bt8");
        sizePolicy.setHeightForWidth(Bt8->sizePolicy().hasHeightForWidth());
        Bt8->setSizePolicy(sizePolicy);
        Bt8->setFont(font);

        gridLayout->addWidget(Bt8, 0, 1, 1, 1);

        Bt9 = new QPushButton(widget);
        Bt9->setObjectName("Bt9");
        sizePolicy.setHeightForWidth(Bt9->sizePolicy().hasHeightForWidth());
        Bt9->setSizePolicy(sizePolicy);
        Bt9->setFont(font);

        gridLayout->addWidget(Bt9, 0, 2, 1, 1);

        BtC = new QPushButton(widget);
        BtC->setObjectName("BtC");
        sizePolicy.setHeightForWidth(BtC->sizePolicy().hasHeightForWidth());
        BtC->setSizePolicy(sizePolicy);
        BtC->setFont(font);

        gridLayout->addWidget(BtC, 0, 3, 1, 1);

        Bt4 = new QPushButton(widget);
        Bt4->setObjectName("Bt4");
        sizePolicy.setHeightForWidth(Bt4->sizePolicy().hasHeightForWidth());
        Bt4->setSizePolicy(sizePolicy);
        Bt4->setFont(font);

        gridLayout->addWidget(Bt4, 1, 0, 1, 1);

        Bt5 = new QPushButton(widget);
        Bt5->setObjectName("Bt5");
        sizePolicy.setHeightForWidth(Bt5->sizePolicy().hasHeightForWidth());
        Bt5->setSizePolicy(sizePolicy);
        Bt5->setFont(font);

        gridLayout->addWidget(Bt5, 1, 1, 1, 1);

        Bt6 = new QPushButton(widget);
        Bt6->setObjectName("Bt6");
        sizePolicy.setHeightForWidth(Bt6->sizePolicy().hasHeightForWidth());
        Bt6->setSizePolicy(sizePolicy);
        Bt6->setFont(font);

        gridLayout->addWidget(Bt6, 1, 2, 1, 1);

        BtCf = new QPushButton(widget);
        BtCf->setObjectName("BtCf");
        sizePolicy.setHeightForWidth(BtCf->sizePolicy().hasHeightForWidth());
        BtCf->setSizePolicy(sizePolicy);
        BtCf->setFont(font);

        gridLayout->addWidget(BtCf, 1, 3, 1, 1);

        Bt1 = new QPushButton(widget);
        Bt1->setObjectName("Bt1");
        sizePolicy.setHeightForWidth(Bt1->sizePolicy().hasHeightForWidth());
        Bt1->setSizePolicy(sizePolicy);
        Bt1->setFont(font);

        gridLayout->addWidget(Bt1, 2, 0, 1, 1);

        Bt2 = new QPushButton(widget);
        Bt2->setObjectName("Bt2");
        sizePolicy.setHeightForWidth(Bt2->sizePolicy().hasHeightForWidth());
        Bt2->setSizePolicy(sizePolicy);
        Bt2->setFont(font);

        gridLayout->addWidget(Bt2, 2, 1, 1, 1);

        Bt3 = new QPushButton(widget);
        Bt3->setObjectName("Bt3");
        sizePolicy.setHeightForWidth(Bt3->sizePolicy().hasHeightForWidth());
        Bt3->setSizePolicy(sizePolicy);
        Bt3->setFont(font);

        gridLayout->addWidget(Bt3, 2, 2, 1, 1);

        BtResult = new QPushButton(widget);
        BtResult->setObjectName("BtResult");
        sizePolicy.setHeightForWidth(BtResult->sizePolicy().hasHeightForWidth());
        BtResult->setSizePolicy(sizePolicy);
        BtResult->setFont(font);

        gridLayout->addWidget(BtResult, 2, 3, 1, 1);

        Bt0 = new QPushButton(widget);
        Bt0->setObjectName("Bt0");
        sizePolicy.setHeightForWidth(Bt0->sizePolicy().hasHeightForWidth());
        Bt0->setSizePolicy(sizePolicy);
        Bt0->setFont(font);

        gridLayout->addWidget(Bt0, 3, 0, 1, 1);

        BtPlus = new QPushButton(widget);
        BtPlus->setObjectName("BtPlus");
        sizePolicy.setHeightForWidth(BtPlus->sizePolicy().hasHeightForWidth());
        BtPlus->setSizePolicy(sizePolicy);
        BtPlus->setFont(font);

        gridLayout->addWidget(BtPlus, 3, 1, 1, 1);

        BtMinus = new QPushButton(widget);
        BtMinus->setObjectName("BtMinus");
        sizePolicy.setHeightForWidth(BtMinus->sizePolicy().hasHeightForWidth());
        BtMinus->setSizePolicy(sizePolicy);
        BtMinus->setFont(font);

        gridLayout->addWidget(BtMinus, 3, 2, 1, 1);

        BtMinus_2 = new QPushButton(widget);
        BtMinus_2->setObjectName("BtMinus_2");
        sizePolicy.setHeightForWidth(BtMinus_2->sizePolicy().hasHeightForWidth());
        BtMinus_2->setSizePolicy(sizePolicy);
        BtMinus_2->setFont(font);

        gridLayout->addWidget(BtMinus_2, 4, 0, 1, 1);

        BtMinus_3 = new QPushButton(widget);
        BtMinus_3->setObjectName("BtMinus_3");
        sizePolicy.setHeightForWidth(BtMinus_3->sizePolicy().hasHeightForWidth());
        BtMinus_3->setSizePolicy(sizePolicy);
        BtMinus_3->setFont(font);

        gridLayout->addWidget(BtMinus_3, 4, 1, 1, 1);

        BtMinus_4 = new QPushButton(widget);
        BtMinus_4->setObjectName("BtMinus_4");
        sizePolicy.setHeightForWidth(BtMinus_4->sizePolicy().hasHeightForWidth());
        BtMinus_4->setSizePolicy(sizePolicy);
        BtMinus_4->setFont(font);

        gridLayout->addWidget(BtMinus_4, 4, 2, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QString());
        Bt7->setText(QCoreApplication::translate("Widget", "7", nullptr));
        Bt8->setText(QCoreApplication::translate("Widget", "8", nullptr));
        Bt9->setText(QCoreApplication::translate("Widget", "9", nullptr));
        BtC->setText(QCoreApplication::translate("Widget", "*", nullptr));
        Bt4->setText(QCoreApplication::translate("Widget", "4", nullptr));
        Bt5->setText(QCoreApplication::translate("Widget", "5", nullptr));
        Bt6->setText(QCoreApplication::translate("Widget", "6", nullptr));
        BtCf->setText(QCoreApplication::translate("Widget", "/", nullptr));
        Bt1->setText(QCoreApplication::translate("Widget", "1", nullptr));
        Bt2->setText(QCoreApplication::translate("Widget", "2", nullptr));
        Bt3->setText(QCoreApplication::translate("Widget", "3", nullptr));
        BtResult->setText(QCoreApplication::translate("Widget", "=", nullptr));
        Bt0->setText(QCoreApplication::translate("Widget", "0", nullptr));
        BtPlus->setText(QCoreApplication::translate("Widget", "+", nullptr));
        BtMinus->setText(QCoreApplication::translate("Widget", "-", nullptr));
        BtMinus_2->setText(QCoreApplication::translate("Widget", "(", nullptr));
        BtMinus_3->setText(QCoreApplication::translate("Widget", ")", nullptr));
        BtMinus_4->setText(QCoreApplication::translate("Widget", "C", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
