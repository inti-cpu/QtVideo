#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMediaPlayer>
#include<QUrl>
#include<QFileDialog>
#include <QDialog>
#include<QDateTime>
#include<QPixmap>
#include<QPalette>
#include<QBrush>
#include<QWidget>
#include<QListWidgetItem>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)

{
    ui->setupUi(this);
    QPixmap pixmap(":/new/prefix1/background6.jpg");
    QPalette palette;

    palette.setBrush(backgroundRole(),QBrush(pixmap));
    setPalette(palette);
    mediaplayer = new QMediaPlayer(this);
    playlist = new QMediaPlaylist(this);
    playlist->setPlaybackMode(QMediaPlaylist::Loop);
    mediaplayer->setVideoOutput(ui->widget);
    mediaplayer->setPlaylist(playlist);
    //设置播放属性
    //监听
    connect(mediaplayer,SIGNAL(stateChanged(QMediaPlayer::State)),this,SLOT(mediaStateChange(QMediaPlayer::State)));
      //播放进度函数
    connect(mediaplayer,SIGNAL(positionChanged(qint64)),this,SLOT(positionChanged(qint64)));
    connect(mediaplayer,SIGNAL(durationChanged(qint64)),this,SLOT(durationChanged(qint64)));
    connect(mediaplayer,SIGNAL(positionChanged1(qint64)),this,SLOT(positionChanged1(qint64)));
    //connect(mediaplayer,SIGNAL(error(QMediaPlayer::Error)),this,SLOT(handleError()));
    connect(playlist,SIGNAL(currentIndexChanged(int)), this, SLOT(onPlaylistChanged(int)));
    //设置播放内容
    //mediaplayer->setMedia(QUrl::fromLocalFile("E:/3.avi"));
    //设置播放按钮
     ui->toolButton->setToolTip("播放");
     ui->toolButton->setAutoRaise(true);
     ui->toolButton->setIcon(QPixmap(":/new/prefix1/1.png"));
     ui->toolButton_2->setToolTip("全屏");
     ui->toolButton_2->setAutoRaise(true);
     ui->toolButton_2->setIcon(QPixmap(":/new/prefix1/30.png"));
     ui->toolButton_3->setToolTip("停止");
     ui->toolButton_3->setAutoRaise(true);
     ui->toolButton_3->setIcon(QPixmap(":/new/prefix1/3.png"));
     ui->toolButton_4->setToolTip("静音");
     ui->toolButton_4->setAutoRaise(true);
     ui->toolButton_4->setIcon(QPixmap(":/new/prefix1/11.png"));
     ui->toolButton_5->setToolTip("打开");
     ui->toolButton_5->setAutoRaise(true);
     ui->toolButton_5->setIcon(QPixmap(":/new/prefix1/27.png"));
     ui->toolButton_6->setToolTip("清空列表");
     ui->toolButton_6->setAutoRaise(true);
     ui->toolButton_6->setIcon(QPixmap(":/new/prefix1/29.png"));
     ui->toolButton_7->setToolTip("时间");
     ui->toolButton_7->setAutoRaise(true);
     ui->toolButton_7->setIcon(QPixmap(":/new/prefix1/28.png"));
     ui->toolButton_8->setToolTip("上一首");
     ui->toolButton_8->setAutoRaise(true);
     ui->toolButton_8->setIcon(QPixmap(":/new/prefix1/4.png"));
     ui->toolButton_9->setToolTip("下一首");
     ui->toolButton_9->setAutoRaise(true);
     ui->toolButton_9->setIcon(QPixmap(":/new/prefix1/5.png"));
     ui->toolButton_10->setToolTip("快进");
     ui->toolButton_10->setAutoRaise(true);
     ui->toolButton_10->setIcon(QPixmap(":/new/prefix1/7.png"));
     ui->toolButton_11->setToolTip("快退");
     ui->toolButton_11->setAutoRaise(true);
     ui->toolButton_11->setIcon(QPixmap(":/new/prefix1/6.png"));

    }

    MainWindow::~MainWindow()
    {
        delete ui;
    }
    void MainWindow::play(){
    //获取播放状态
    switch (mediaplayer->state()) {
    case QMediaPlayer::PlayingState:
        mediaplayer->pause();
        break;
    default:
        mediaplayer->play();
        break;
    }
    }
    void MainWindow::onPlaylistChanged(int position)
    {
        ui->listWidget->setCurrentRow(position);
        QListWidgetItem  *item=ui->listWidget->currentItem();
        if (item)
            this->setWindowTitle(item->text());
    }


    void MainWindow::setPosition(int position)
    {
        //获取进度条位置
        mediaplayer->setPosition(position);

    }
    void MainWindow::durationChanged(qint64 duration)
    {

        ui->horizontalSlider->setRange(0,duration);
    }
     void MainWindow::positionChanged(qint64 position)
     {
         //改变播放位置
         ui->horizontalSlider->setValue(position);
     }



    void MainWindow::on_horizontalSlider_sliderMoved(int position)
    {
        setPosition(position);
    }
    //播放
    void MainWindow::on_toolButton_clicked()
    {
       play();
    }
    void MainWindow::mediaStateChange(QMediaPlayer::State state)
    {
     //播放过程中调整动态函数
        switch (state) {
        case QMediaPlayer::PlayingState:
          ui->toolButton->setToolTip("暂停");
          ui->toolButton->setIcon(QPixmap(":/new/prefix1/2.png"));
            break;
        default:
            ui->toolButton->setToolTip("播放");
            ui->toolButton->setIcon(QPixmap(":/new/prefix1/1.png"));
            break;
        }
    }
    //垂直条变动
    void MainWindow::on_verticalSlider_valueChanged(int value)
    {
     mediaplayer->setVolume(value);
    }

    void MainWindow::on_toolButton_3_clicked()
    {
       mediaplayer->stop();

    }
    //静音
    void MainWindow::on_toolButton_4_clicked()
    {
        bool mute=mediaplayer->isMuted();
            mediaplayer->setMuted(!mute);

            if (mute)
                ui->toolButton_4->setText("开启静音");
            else
                ui->toolButton_4->setText("关闭静音");


    }
    //打开文件
    //在列表中显示
    void MainWindow::on_toolButton_5_clicked()
    {
            QStringList fileList=QFileDialog::getOpenFileNames(this,QString::fromLocal8Bit("打开文件"),"E:/",tr("*.wmv*.mp3*.avi"));

           if (fileList.count()<1)
                return;

            for (int i=0; i<fileList.count();i++)
            {
               QString aFile=fileList.at(i);
               playlist->addMedia(QUrl::fromLocalFile(aFile));  //添加文件
               QFileInfo fileInfo(aFile);
               ui->listWidget->addItem(fileInfo.fileName()); //添加到界面文件列表
            }
           if (mediaplayer->state() != QMediaPlayer::PlayingState)
            playlist->setCurrentIndex(0);
            mediaplayer->play();


    }
    //清楚列表
    void MainWindow::on_toolButton_6_clicked()
    {
           playlist->clear();
           ui->listWidget->clear();
           mediaplayer->stop();

    }
    //双击
    void MainWindow::on_listWidget_doubleClicked(const QModelIndex &index)
    {
            int rowNo=index.row();
            playlist->setCurrentIndex(rowNo);
            mediaplayer->play();

    }
    //时间
    void MainWindow::on_toolButton_7_clicked()
    {
        QDateTime time =QDateTime::currentDateTime();
          QString str= time.toString("yyyy-MM-dd hh:mm:ss dddd");
          ui->label->setText(str);
    }
    //上一首
    void MainWindow::on_toolButton_8_clicked()
    {
        playlist->previous();


    }
    //下一首
    void MainWindow::on_toolButton_9_clicked()
    {
        playlist->next();

    }
//快进

    void MainWindow::on_toolButton_10_clicked()

    {
       qint64 t;
       t=mediaplayer->position();
       t += 2000;
       mediaplayer->setPosition(t);
    }
//快退
    void MainWindow::on_toolButton_11_clicked()
    {
        qint64 t;
        t=mediaplayer->position();
        t -= 2000;
        mediaplayer->setPosition(t);

    }
    //全屏
    void MainWindow::on_toolButton_2_clicked()
    {

        if(ui->widget->isFullScreen()){
           ui->widget->setWindowFlags(Qt::SubWindow);
           ui->widget->showNormal();
        }
        else
            {
            ui->widget->setWindowFlags(Qt::Window);
            ui->widget->setFullScreen(true);
        }
    }
