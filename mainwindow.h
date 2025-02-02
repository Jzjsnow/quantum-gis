#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "collection/flowcollection.h"
#include "collection/odcollection.h"
#include <vector>
#include <gdal_priv.h>
#include "visualize/flow_viz.h"

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    //流
    vector<flowcollection> flowcollections;

    //OD
    vector<ODcollection> ODcollections;

    //这里有隐患 之后改成动态分配叭
    //读取或生成的 layer 在这里
    list<OGRLayer *> myLayers;
    int layercount;

    flow_viz* _flowviz;

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actiontxt_triggered();

    void on_actionflow_txt_triggered();

    void on_actionOD_triggered();

    void on_actionflow_triggered();

    void on_actiondistance_triggered();

    void on_actiondirection_triggered();

    void on_actionweight_triggered();
    void on_actionod_shp_triggered();

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
