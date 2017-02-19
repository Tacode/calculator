#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //this->setWindowFlags(this->windowFlags() | Qt::FramelessWindowHint);
    setFixedSize(356,428);

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
    m_ope1="0";
    m_ope2="0";
    m_result="0";
    m_step=0;
    m_type=0;
}

void MainWindow::handleClearClick()
{
    m_ope1="0";
    m_ope2="0";
    m_result="0";
    m_step=0;
    m_type=0;
    ui->l_result->setText(m_result);
}

void MainWindow::handleDotClick()
{
    if(m_step==0)
    {
        m_ope1+=".";
        ui->l_result->setText(m_ope1);
    }
    else
    {
        m_ope2+=".";
        ui->l_result->setText(m_ope2);
    }
}

void MainWindow::handleNumClick()
{
    QObject *tmpObj=sender();  //定义一个指向发送信号的对象的指针
    QString tmpStr=tmpObj->objectName();//获取发送信号的对象的名字
    tmpStr=tmpStr.remove("b_");//去除b_,这样得到的是数字按钮代表的数字
    if(m_step==0)
    {
        if(m_ope1 =="0")
        {
            m_ope1=tmpStr;
        }
        else
        {    m_ope1+=tmpStr;}
        ui->l_result->setText(m_ope1);
    }
    else
    {
        if(m_ope2 =="0")
        {
            m_ope2=tmpStr;
        }
        else
        {    m_ope2+=tmpStr;}
        ui->l_result->setText(m_ope2);
    }

}

void MainWindow::handleEquClick()
{
    double ope1,ope2;
    ope1=m_ope1.toDouble(); //Qstring类型转double类型
    ope2=m_ope2.toDouble();
    double tmpResult;
    switch(m_type)
    {
    case 0:
        tmpResult=ope1+ope2;
        break;
    case 1:
        tmpResult=ope1-ope2;
        break;
    case 2:
        tmpResult=ope1*ope2;
        break;
    case 3:
        tmpResult=ope1/ope2;break;
    case 4:
        if(!m_ope1.contains(".")&&!m_ope2.contains("."))
            tmpResult=(int)ope1%(int)ope2;
        break;

    }
    m_result=QString::number(tmpResult); //double类型转Qstring类型
    ui->l_result->setText(m_result);
    m_ope1="0";
    m_ope2="0";
    m_result="0";
    m_step=0;
    m_type=0;
}

void MainWindow::handleOpeClick()
{
    m_step=1;
    QObject *tmpObj=sender();
    QString tmpStr=tmpObj->objectName();
    if(tmpStr=="b_plus")
    {
        m_type=0;

    } if(tmpStr=="b_sub")
    {
        m_type=1;
    } if(tmpStr=="b_multi")
    {
        m_type=2;
    } if(tmpStr=="b_div")
    {
        m_type=3;
    }
    if(tmpStr=="b_mod")
    {
        m_type=4;
    }
}

void MainWindow::handleSignedClick()
{
    if(m_step==0)
    {
        if(m_ope1[0]=='-')
            m_ope1=m_ope1.remove("-");
        else
        {m_ope1=m_ope1.insert(0,"-");}
        ui->l_result->setText(m_ope1);
    }else
    {
        if(m_ope2[0]=='-')
            m_ope2=m_ope2.remove("-");
        else
        {m_ope2=m_ope2.insert(0,"-");}
         ui->l_result->setText(m_ope2);
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}
