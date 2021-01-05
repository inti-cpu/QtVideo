#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QVideoWidget>
#include<QMediaPlayer>
#include<QMediaPlaylist>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private:
    Ui::MainWindow *ui;
    QMediaPlayer *mediaplayer;
    QMediaPlaylist  *playlist;
private slots:
    void durationChanged(qint64 duration);
    void play();
    //列表
    void onPlaylistChanged(int position);
    void mediaStateChange(QMediaPlayer::State state);
////改变播放位置
    void positionChanged(qint64 position);
////获取播放位置
    void setPosition(int postion);
    void on_toolButton_clicked();

    void on_horizontalSlider_sliderMoved(int position);

    void on_verticalSlider_valueChanged(int value);

    void on_toolButton_3_clicked();

    void on_toolButton_4_clicked();

    void on_toolButton_5_clicked();

    void on_toolButton_6_clicked();

    void on_listWidget_doubleClicked(const QModelIndex &index);

    void on_toolButton_7_clicked();

    void on_toolButton_8_clicked();

    void on_toolButton_9_clicked();

    void on_toolButton_10_clicked();

    void on_toolButton_11_clicked();
    void on_toolButton_2_clicked();
};

#endif // MAINWINDOW_H
