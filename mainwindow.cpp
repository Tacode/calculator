#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //this->setWindowFlags(this->windowFlags() | Qt::FramelessWindowHint);
    connect(ui->b_0,SIGNAL(clicked()),this,SLOT(handleNumClick()));
    connect(ui->b_1,SIGNAL(clicked()),this,SLOT(handleNumClick()));
    connect(ui->b_2,SIGNAL(clicked()),this,SLOT(handleNumClick()));
    connect(ui->b_3,SIGNAL(clicked()),this,SLOT(handleNumClick()));
    connect(ui->b_4,SIGNAL(clicked()),this,SLOT(handleNumClick()));
    connect(ui->b_5,SIGNAL(clicked()),this,SLOT(handleNumClick()));
    connect(ui->b_6,SIGNAL(clicked()),this,SLOT(handleNumClick()));
    connect(ui->b_7,SIGNAL(clicked()),this,SLOT(handleNumClick()));
    connect(ui->b_8,SIGNAL(clicked()),this,SLOT(handleNumClick()));
    connect(ui->b_9,SIGNAL(clicked()),this,SLOT(handleNumClick()));

    connect(ui->b_div,SIGNAL(clicked()),this,SLOT(handleOpeClick()));
    connect(ui->b_mod,SIGNAL(clicked()),this,SLOT(handleOpeClick()));
    connect(ui->b_multi,SIGNAL(clicked()),this,SLOT(handleOpeClick()));
    connect(ui->b_plus,SIGNAL(clicked()),this,SLOT(handleOpeClick()));
    connect(ui->b_sub,SIGNAL(clicked()),this,SLOT(handleOpeClick()));

    connect(ui->b_dot,SIGNAL(clicked()),this,SLOT(handleDotClick()));
    connect(ui->b_clear,SIGNAL(clicked()),this,SLOT(handleClearClick()));
    connect(ui->b_signed,SIGNAL(clicked()),this,SLOT(handleSignedClick()));

    connect(ui->b_equ,SIGNAL(clicked()),this,SLOT(handleEquClick()));
    m_ope1='0';
    m_ope2='0';
    m_result='0';
    m_step=0;
    m_type=0;
}

void MainWindow::handleClearClick()
{

}

void MainWindow::handleDotClick()
{

}

void MainWindow::handleNumClick()
{

}

void MainWindow::handleEquClick()
{

}

void MainWindow::handleOpeClick()
{

}

void MainWindow::handleSignedClick()
{

}

MainWindow::~MainWindow()
{
    delete ui;
}
