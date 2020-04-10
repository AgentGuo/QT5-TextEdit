/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actCut;
    QAction *actCopy;
    QAction *actPaste;
    QAction *actFontBold;
    QAction *actFontItalic;
    QAction *actFontUnder;
    QAction *actClose;
    QAction *actOpen;
    QAction *actClear;
    QAction *actFont;
    QAction *actNew;
    QAction *actToolbarLab;
    QAction *actFontBold_2;
    QWidget *centralwidget;
    QTextEdit *txtEdit;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(365, 382);
        actCut = new QAction(MainWindow);
        actCut->setObjectName(QStringLiteral("actCut"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/img/cut.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actCut->setIcon(icon);
        actCopy = new QAction(MainWindow);
        actCopy->setObjectName(QStringLiteral("actCopy"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/img/img/120.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actCopy->setIcon(icon1);
        actPaste = new QAction(MainWindow);
        actPaste->setObjectName(QStringLiteral("actPaste"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/img/img/paste.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actPaste->setIcon(icon2);
        actFontBold = new QAction(MainWindow);
        actFontBold->setObjectName(QStringLiteral("actFontBold"));
        actFontBold->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/img/img/BLD.BMP"), QSize(), QIcon::Normal, QIcon::Off);
        actFontBold->setIcon(icon3);
        actFontItalic = new QAction(MainWindow);
        actFontItalic->setObjectName(QStringLiteral("actFontItalic"));
        actFontItalic->setCheckable(true);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/img/img/ITL.BMP"), QSize(), QIcon::Normal, QIcon::Off);
        actFontItalic->setIcon(icon4);
        actFontUnder = new QAction(MainWindow);
        actFontUnder->setObjectName(QStringLiteral("actFontUnder"));
        actFontUnder->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/img/img/UNDRLN.BMP"), QSize(), QIcon::Normal, QIcon::Off);
        actFontUnder->setIcon(icon5);
        actClose = new QAction(MainWindow);
        actClose->setObjectName(QStringLiteral("actClose"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/img/img/exit.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actClose->setIcon(icon6);
        actOpen = new QAction(MainWindow);
        actOpen->setObjectName(QStringLiteral("actOpen"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/img/img/open3.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actOpen->setIcon(icon7);
        actClear = new QAction(MainWindow);
        actClear->setObjectName(QStringLiteral("actClear"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/img/img/103.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actClear->setIcon(icon8);
        actFont = new QAction(MainWindow);
        actFont->setObjectName(QStringLiteral("actFont"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/img/img/20.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actFont->setIcon(icon9);
        actNew = new QAction(MainWindow);
        actNew->setObjectName(QStringLiteral("actNew"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/img/img/new2.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actNew->setIcon(icon10);
        actToolbarLab = new QAction(MainWindow);
        actToolbarLab->setObjectName(QStringLiteral("actToolbarLab"));
        actToolbarLab->setCheckable(true);
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/img/img/430.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actToolbarLab->setIcon(icon11);
        actFontBold_2 = new QAction(MainWindow);
        actFontBold_2->setObjectName(QStringLiteral("actFontBold_2"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        txtEdit = new QTextEdit(centralwidget);
        txtEdit->setObjectName(QStringLiteral("txtEdit"));
        txtEdit->setGeometry(QRect(10, 10, 341, 291));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 365, 22));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menu->addAction(actNew);
        menu->addAction(actOpen);
        menu->addAction(actClose);
        menu_2->addAction(actPaste);
        menu_2->addAction(actCut);
        menu_2->addAction(actCopy);
        menu_2->addAction(actClear);
        menu_3->addAction(actFontUnder);
        menu_3->addAction(actFontItalic);
        menu_3->addAction(actFontBold);
        toolBar->addAction(actNew);
        toolBar->addAction(actOpen);
        toolBar->addAction(actClear);
        toolBar->addAction(actCut);
        toolBar->addAction(actCopy);
        toolBar->addAction(actPaste);
        toolBar->addAction(actFontItalic);
        toolBar->addAction(actFontBold);
        toolBar->addAction(actFontUnder);

        retranslateUi(MainWindow);
        QObject::connect(actPaste, SIGNAL(triggered()), txtEdit, SLOT(paste()));
        QObject::connect(actCut, SIGNAL(triggered()), txtEdit, SLOT(cut()));
        QObject::connect(actCopy, SIGNAL(triggered()), txtEdit, SLOT(copy()));
        QObject::connect(actClose, SIGNAL(triggered()), MainWindow, SLOT(close()));
        QObject::connect(actClear, SIGNAL(triggered()), txtEdit, SLOT(clear()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actCut->setText(QApplication::translate("MainWindow", "\345\211\252\345\210\207", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actCut->setToolTip(QApplication::translate("MainWindow", "\345\211\252\345\210\207", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actCut->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actCopy->setText(QApplication::translate("MainWindow", "\345\244\215\345\210\266", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actCopy->setToolTip(QApplication::translate("MainWindow", "\345\244\215\345\210\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actCopy->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actPaste->setText(QApplication::translate("MainWindow", "\347\262\230\350\264\264", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actPaste->setToolTip(QApplication::translate("MainWindow", "\347\262\230\350\264\264", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actPaste->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actFontBold->setText(QApplication::translate("MainWindow", "\347\262\227\344\275\223", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actFontBold->setToolTip(QApplication::translate("MainWindow", "\347\262\227\344\275\223", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actFontItalic->setText(QApplication::translate("MainWindow", "\346\226\234\344\275\223", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actFontItalic->setToolTip(QApplication::translate("MainWindow", "\346\226\234\344\275\223", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actFontUnder->setText(QApplication::translate("MainWindow", "\344\270\213\345\210\222\347\272\277", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actFontUnder->setToolTip(QApplication::translate("MainWindow", "\344\270\213\345\210\222\347\272\277", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actClose->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actClose->setToolTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actOpen->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actOpen->setToolTip(QApplication::translate("MainWindow", "\346\211\223\345\274\200", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actClear->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actClear->setToolTip(QApplication::translate("MainWindow", "\346\270\205\347\251\272", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actFont->setText(QApplication::translate("MainWindow", "\345\255\227\344\275\223", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actFont->setToolTip(QApplication::translate("MainWindow", "\345\255\227\344\275\223", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actNew->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actNew->setToolTip(QApplication::translate("MainWindow", "\346\226\260\345\273\272", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actNew->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actToolbarLab->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\345\267\245\345\205\267\346\240\217\346\226\207\345\255\227\346\240\207\347\255\276", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actToolbarLab->setToolTip(QApplication::translate("MainWindow", "\346\230\276\347\244\272\345\267\245\345\205\267\346\240\217\346\226\207\345\255\227\346\240\207\347\255\276", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actFontBold_2->setText(QApplication::translate("MainWindow", "\346\262\241\344\273\200\344\271\210", Q_NULLPTR));
        menu->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("MainWindow", "\347\274\226\350\276\221", Q_NULLPTR));
        menu_3->setTitle(QApplication::translate("MainWindow", "\346\240\274\345\274\217", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
