#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    iniUI();//增加的初始化函数
    iniSignalSlots();
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::iniUI()
{
    fLabCurFile = new QLabel;
    fLabCurFile->setMidLineWidth(150);
    fLabCurFile->setText("当前文件");
    ui->statusbar->addWidget(fLabCurFile);//添加到状态栏

    progressBar1 = new QProgressBar;
    progressBar1->setMaximumWidth(200);
    progressBar1->setMinimum(5);
    progressBar1->setMaximum(50);
    progressBar1->setValue(ui->txtEdit->font().pointSize());
    ui->statusbar->addWidget(progressBar1);//添加到状态栏

    spinFontSize = new QSpinBox;
    spinFontSize->setMinimum(5);
    spinFontSize->setMaximum(50);
    spinFontSize->setValue(ui->txtEdit->font().pointSize());
    spinFontSize->setMinimumWidth(50);

    ui->toolBar->addWidget(new QLabel("字体大小"));
    ui->toolBar->addWidget(spinFontSize);//spinbox添加到工具栏

    ui->toolBar->addSeparator();//分隔条
    ui->toolBar->addWidget(new QLabel("字体"));
    comboFont = new QFontComboBox;
    ui->toolBar->addWidget(comboFont);//添加到工具栏

    setCentralWidget(ui->txtEdit);
}

void MainWindow::on_actFontBold_triggered(bool checked)
{
    QTextCharFormat fmt;
    fmt=ui->txtEdit->currentCharFormat();
    if(checked)
        fmt.setFontWeight(QFont::Bold);
    else
        fmt.setFontWeight(QFont::Normal);
    ui->txtEdit->mergeCurrentCharFormat(fmt);
}

void MainWindow::on_actFontItalic_triggered(bool checked)
{
    QTextCharFormat fmt;
    fmt=ui->txtEdit->currentCharFormat();
    if(checked)
        fmt.setFontItalic(QFont::StyleItalic);
    else
        fmt.setFontItalic(QFont::StyleNormal);
    ui->txtEdit->mergeCurrentCharFormat(fmt);
}

void MainWindow::on_actFontUnder_triggered(bool checked)
{
    QTextCharFormat fmt;
    fmt=ui->txtEdit->currentCharFormat();
    if(checked)
        fmt.setFontUnderline(QFont::UnderlineResolved);
    else
        fmt.setFontUnderline(QFont::StyleNormal);
    ui->txtEdit->mergeCurrentCharFormat(fmt);
}

void MainWindow::on_txtEdit_copyAvailable(bool b)
{
    ui->actCut->setEnabled(b);
    ui->actCopy->setEnabled(b);
    ui->actPaste->setEnabled(ui->txtEdit->canPaste());
}
void MainWindow::on_txtEdit_selectionChanged()
{
    QTextCharFormat fmt;
    fmt=ui->txtEdit->currentCharFormat();//获取文字的格式
    ui->actFontItalic->setChecked(fmt.fontItalic());//是否斜体
    ui->actFontBold->setChecked(fmt.font().bold());//是否粗体
    ui->actFontUnder->setChecked(fmt.fontUnderline());//是否有下划线
}

void MainWindow::on_actFontBold_2_triggered(bool checked)
{

}

void MainWindow::iniSignalSlots()
{
	bool a;
    a=connect(spinFontSize,SIGNAL(valueChanged(int)),this,SLOT(on_spinFontSize_valueChanged(int)));
    a=connect(comboFont,SIGNAL(currentIndexChanged(const QString &)),this,SLOT(on_comboFont_currentIndexChanged(const QString &)));
}

void MainWindow::on_spinFontSize_valueChanged(int aFontSize)
{//改变字体大小的SpinBox
    QTextCharFormat fmt;
    fmt.setFontPointSize(aFontSize);
    ui->txtEdit->mergeCurrentCharFormat(fmt);
    progressBar1->setValue(aFontSize);
}

void MainWindow::on_comboFont_currentIndexChanged(const QString &arg1)
{
    QTextCharFormat fmt;
    fmt.setFontFamily(arg1);
    ui->txtEdit->mergeCurrentCharFormat(fmt);
}
