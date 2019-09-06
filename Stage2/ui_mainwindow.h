/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *botonpeaton;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_6;
    QFrame *line_7;
    QLabel *sem5;
    QLabel *sem1;
    QLabel *semA;
    QFrame *line_8;
    QFrame *line_9;
    QFrame *line_10;
    QFrame *line_11;
    QFrame *line_12;
    QFrame *line_13;
    QFrame *line_14;
    QFrame *line_15;
    QFrame *line_16;
    QFrame *line_17;
    QFrame *line_18;
    QFrame *line_20;
    QFrame *line_19;
    QFrame *line_21;
    QFrame *line_23;
    QFrame *line_22;
    QFrame *line_24;
    QFrame *line_26;
    QFrame *line_25;
    QFrame *line_27;
    QFrame *line_28;
    QFrame *line_29;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(894, 677);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        botonpeaton = new QPushButton(centralWidget);
        botonpeaton->setObjectName(QString::fromUtf8("botonpeaton"));
        botonpeaton->setGeometry(QRect(550, 530, 91, 71));
        botonpeaton->setStyleSheet(QString::fromUtf8(""));
        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 510, 891, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(250, 330, 20, 191));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush2(QColor(255, 255, 220, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
        QBrush brush3(QColor(255, 255, 255, 128));
        brush3.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        line_2->setPalette(palette);
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(650, 0, 21, 521));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        line_3->setPalette(palette1);
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(0, 320, 261, 21));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        line_4->setPalette(palette2);
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(centralWidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(0, 120, 261, 21));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        line_5->setPalette(palette3);
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(centralWidget);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(250, 0, 20, 131));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        line_6->setPalette(palette4);
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_7 = new QFrame(centralWidget);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(420, 330, 20, 191));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush4(QColor(85, 87, 83, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush4);
        QBrush brush5(QColor(127, 131, 124, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush5);
        QBrush brush6(QColor(106, 109, 103, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        QBrush brush7(QColor(42, 43, 41, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush7);
        QBrush brush8(QColor(56, 58, 55, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush8);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush7);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush8);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush8);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        line_7->setPalette(palette5);
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);
        sem5 = new QLabel(centralWidget);
        sem5->setObjectName(QString::fromUtf8("sem5"));
        sem5->setGeometry(QRect(540, 60, 51, 81));
        sem5->setFrameShape(QFrame::Box);
        sem1 = new QLabel(centralWidget);
        sem1->setObjectName(QString::fromUtf8("sem1"));
        sem1->setGeometry(QRect(180, 180, 51, 81));
        sem1->setFrameShape(QFrame::Box);
        semA = new QLabel(centralWidget);
        semA->setObjectName(QString::fromUtf8("semA"));
        semA->setGeometry(QRect(670, 60, 51, 81));
        semA->setFrameShape(QFrame::Box);
        line_8 = new QFrame(centralWidget);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setGeometry(QRect(750, 0, 20, 521));
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);
        line_9 = new QFrame(centralWidget);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setGeometry(QRect(150, 300, 118, 3));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);
        line_10 = new QFrame(centralWidget);
        line_10->setObjectName(QString::fromUtf8("line_10"));
        line_10->setGeometry(QRect(150, 320, 118, 3));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);
        line_11 = new QFrame(centralWidget);
        line_11->setObjectName(QString::fromUtf8("line_11"));
        line_11->setGeometry(QRect(150, 280, 118, 3));
        line_11->setFrameShape(QFrame::HLine);
        line_11->setFrameShadow(QFrame::Sunken);
        line_12 = new QFrame(centralWidget);
        line_12->setObjectName(QString::fromUtf8("line_12"));
        line_12->setGeometry(QRect(150, 170, 118, 3));
        line_12->setFrameShape(QFrame::HLine);
        line_12->setFrameShadow(QFrame::Sunken);
        line_13 = new QFrame(centralWidget);
        line_13->setObjectName(QString::fromUtf8("line_13"));
        line_13->setGeometry(QRect(150, 150, 118, 3));
        line_13->setFrameShape(QFrame::HLine);
        line_13->setFrameShadow(QFrame::Sunken);
        line_14 = new QFrame(centralWidget);
        line_14->setObjectName(QString::fromUtf8("line_14"));
        line_14->setGeometry(QRect(270, 60, 3, 61));
        line_14->setFrameShape(QFrame::VLine);
        line_14->setFrameShadow(QFrame::Sunken);
        line_15 = new QFrame(centralWidget);
        line_15->setObjectName(QString::fromUtf8("line_15"));
        line_15->setGeometry(QRect(290, 60, 3, 61));
        line_15->setFrameShape(QFrame::VLine);
        line_15->setFrameShadow(QFrame::Sunken);
        line_16 = new QFrame(centralWidget);
        line_16->setObjectName(QString::fromUtf8("line_16"));
        line_16->setGeometry(QRect(310, 60, 3, 61));
        line_16->setFrameShape(QFrame::VLine);
        line_16->setFrameShadow(QFrame::Sunken);
        line_17 = new QFrame(centralWidget);
        line_17->setObjectName(QString::fromUtf8("line_17"));
        line_17->setGeometry(QRect(420, 60, 3, 61));
        line_17->setFrameShape(QFrame::VLine);
        line_17->setFrameShadow(QFrame::Sunken);
        line_18 = new QFrame(centralWidget);
        line_18->setObjectName(QString::fromUtf8("line_18"));
        line_18->setGeometry(QRect(400, 60, 3, 61));
        line_18->setFrameShape(QFrame::VLine);
        line_18->setFrameShadow(QFrame::Sunken);
        line_20 = new QFrame(centralWidget);
        line_20->setObjectName(QString::fromUtf8("line_20"));
        line_20->setGeometry(QRect(370, 60, 20, 61));
        line_20->setFrameShape(QFrame::VLine);
        line_20->setFrameShadow(QFrame::Sunken);
        line_19 = new QFrame(centralWidget);
        line_19->setObjectName(QString::fromUtf8("line_19"));
        line_19->setGeometry(QRect(480, 60, 3, 61));
        line_19->setFrameShape(QFrame::VLine);
        line_19->setFrameShadow(QFrame::Sunken);
        line_21 = new QFrame(centralWidget);
        line_21->setObjectName(QString::fromUtf8("line_21"));
        line_21->setGeometry(QRect(460, 60, 3, 61));
        line_21->setFrameShape(QFrame::VLine);
        line_21->setFrameShadow(QFrame::Sunken);
        line_23 = new QFrame(centralWidget);
        line_23->setObjectName(QString::fromUtf8("line_23"));
        line_23->setGeometry(QRect(440, 60, 3, 61));
        line_23->setFrameShape(QFrame::VLine);
        line_23->setFrameShadow(QFrame::Sunken);
        line_22 = new QFrame(centralWidget);
        line_22->setObjectName(QString::fromUtf8("line_22"));
        line_22->setGeometry(QRect(640, 60, 3, 61));
        line_22->setFrameShape(QFrame::VLine);
        line_22->setFrameShadow(QFrame::Sunken);
        line_24 = new QFrame(centralWidget);
        line_24->setObjectName(QString::fromUtf8("line_24"));
        line_24->setGeometry(QRect(620, 60, 3, 61));
        line_24->setFrameShape(QFrame::VLine);
        line_24->setFrameShadow(QFrame::Sunken);
        line_26 = new QFrame(centralWidget);
        line_26->setObjectName(QString::fromUtf8("line_26"));
        line_26->setGeometry(QRect(600, 60, 3, 61));
        line_26->setFrameShape(QFrame::VLine);
        line_26->setFrameShadow(QFrame::Sunken);
        line_25 = new QFrame(centralWidget);
        line_25->setObjectName(QString::fromUtf8("line_25"));
        line_25->setGeometry(QRect(330, 60, 20, 61));
        line_25->setFrameShape(QFrame::VLine);
        line_25->setFrameShadow(QFrame::Sunken);
        line_27 = new QFrame(centralWidget);
        line_27->setObjectName(QString::fromUtf8("line_27"));
        line_27->setGeometry(QRect(360, 60, 3, 61));
        line_27->setFrameShape(QFrame::VLine);
        line_27->setFrameShadow(QFrame::Sunken);
        line_28 = new QFrame(centralWidget);
        line_28->setObjectName(QString::fromUtf8("line_28"));
        line_28->setGeometry(QRect(500, 60, 3, 61));
        line_28->setFrameShape(QFrame::VLine);
        line_28->setFrameShadow(QFrame::Sunken);
        line_29 = new QFrame(centralWidget);
        line_29->setObjectName(QString::fromUtf8("line_29"));
        line_29->setGeometry(QRect(520, 60, 3, 61));
        line_29->setFrameShape(QFrame::VLine);
        line_29->setFrameShadow(QFrame::Sunken);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 894, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        botonpeaton->setText(QString());
        sem5->setText(QString());
        sem1->setText(QString());
        semA->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
