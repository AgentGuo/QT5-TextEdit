#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QProgressBar>
#include <QSpinBox>
#include <QFontComboBox>//需要增加引入的库
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actFontBold_triggered(bool checked);

    void on_actFontItalic_triggered(bool checked);

    void on_actFontBold_2_triggered(bool checked);

    void on_actFontUnder_triggered(bool checked);

    void on_txtEdit_copyAvailable(bool b);

    void on_txtEdit_selectionChanged();

    void on_spinFontSize_valueChanged(int aFontSize);//改变字体大小

    void on_comboFont_currentIndexChanged(const QString &arg1);//选择字体

private:
    QLabel *fLabCurFile;
    QProgressBar *progressBar1;
    QSpinBox *spinFontSize;
    QFontComboBox *comboFont;
    void iniUI();//用于创建这些界面组件
    void iniSignalSlots();//关联信号和槽
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
