#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:
    void handleNumClick();
    void handleOpeClick();
    void handleDotClick();
    void handleSignedClick();
    void handleClearClick();
    void handleEquClick();

private:
    Ui::MainWindow *ui;
    QString m_ope1,m_ope2,m_result;
    int m_step,m_type;
};

#endif // MAINWINDOW_H
