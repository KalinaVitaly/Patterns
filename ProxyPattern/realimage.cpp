#include "realimage.h"
#include <QDebug>

RealImage::RealImage(QObject *parent) : IImage(parent)
{

}

void RealImage::DownloadImage()
{
    if (!image.load(":/smiles/TestImage.jpg"))
    {
        qDebug("Error loading image!");
        exit(1);
    }
    image = image.scaled(150, 150);
    qDebug() << image.size().width() << " " << image.size().height();
}

QPixmap& RealImage::GetImage()
{
    return image;
}
