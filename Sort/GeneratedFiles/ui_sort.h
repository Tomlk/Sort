/********************************************************************************
** Form generated from reading UI file 'sort.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORT_H
#define UI_SORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SortClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QPlainTextEdit *PlainTE_show;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QPlainTextEdit *PlainTE_analyze;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *Sort_box;
    QSpacerItem *horizontalSpacer;
    QPushButton *Bt_create;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *Bt_start;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SortClass)
    {
        if (SortClass->objectName().isEmpty())
            SortClass->setObjectName(QStringLiteral("SortClass"));
        SortClass->resize(800, 541);
        centralWidget = new QWidget(SortClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        PlainTE_show = new QPlainTextEdit(centralWidget);
        PlainTE_show->setObjectName(QStringLiteral("PlainTE_show"));

        horizontalLayout_3->addWidget(PlainTE_show);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);

        PlainTE_analyze = new QPlainTextEdit(centralWidget);
        PlainTE_analyze->setObjectName(QStringLiteral("PlainTE_analyze"));

        verticalLayout->addWidget(PlainTE_analyze);


        horizontalLayout_3->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        Sort_box = new QComboBox(centralWidget);
        Sort_box->setObjectName(QStringLiteral("Sort_box"));

        horizontalLayout->addWidget(Sort_box);

        horizontalSpacer = new QSpacerItem(108, 18, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Bt_create = new QPushButton(centralWidget);
        Bt_create->setObjectName(QStringLiteral("Bt_create"));

        horizontalLayout->addWidget(Bt_create);

        horizontalSpacer_4 = new QSpacerItem(108, 18, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        Bt_start = new QPushButton(centralWidget);
        Bt_start->setObjectName(QStringLiteral("Bt_start"));

        horizontalLayout->addWidget(Bt_start);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        SortClass->setCentralWidget(centralWidget);
        Bt_create->raise();
        menuBar = new QMenuBar(SortClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 23));
        SortClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SortClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SortClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SortClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SortClass->setStatusBar(statusBar);

        retranslateUi(SortClass);

        QMetaObject::connectSlotsByName(SortClass);
    } // setupUi

    void retranslateUi(QMainWindow *SortClass)
    {
        SortClass->setWindowTitle(QApplication::translate("SortClass", "Sort", 0));
        label_2->setText(QApplication::translate("SortClass", "\347\273\223\346\236\234\345\210\206\346\236\220", 0));
        label->setText(QApplication::translate("SortClass", "\347\256\227\346\263\225\351\200\211\346\213\251", 0));
        Bt_create->setText(QApplication::translate("SortClass", "\347\224\237\346\210\220\351\232\217\346\234\272\346\225\260\345\210\227", 0));
        Bt_start->setText(QApplication::translate("SortClass", "\345\274\200\345\247\213", 0));
    } // retranslateUi

};

namespace Ui {
    class SortClass: public Ui_SortClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORT_H
