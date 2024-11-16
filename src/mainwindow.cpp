#include "mainwindow.h"
#include <QVBoxLayout>
#include <QWidget>
#include <QPixmap>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), imageLabel(new QLabel(this))
{
    // 设置主窗口的标题
    setWindowTitle("Qt Display Image");

    // 创建一个 central widget，并设置为主窗口的中心
    QWidget *centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);

    // 创建垂直布局
    QVBoxLayout *layout = new QVBoxLayout(centralWidget);

    // 加载图片（替换为实际路径）
    QPixmap image("../resource/1.jpg");

    // 如果图片加载成功
    if (!image.isNull()) {
        // 缩放图片保持宽高比
        QPixmap scaledImage = image.scaled(image.size(), Qt::KeepAspectRatio, Qt::SmoothTransformation);

        // 设置 QLabel 显示缩放后的图片
        imageLabel->setPixmap(scaledImage);
    } else {
        // 如果图片加载失败，显示错误信息
        imageLabel->setText("Failed to load image");
    }

    // 将 QLabel 添加到布局中
    layout->addWidget(imageLabel);

    // 设置窗口大小适应图片大小
    resize(image.size());
}

MainWindow::~MainWindow()
{
    // 这里可以进行资源清理，当前不需要特定清理
}
