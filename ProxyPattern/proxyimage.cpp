#include "proxyimage.h"

ProxyImage::ProxyImage(QGraphicsItem *parent, QObject *ObjParent)
    : IImage(ObjParent),
      QGraphicsPixmapItem(parent),
      realImage(nullptr)
{}


void ProxyImage::DownloadImage()
{
    if (realImage == nullptr)
    {
        realImage = new RealImage;
    }
    realImage->DownloadImage();
    setPixmap(QPixmap(realImage->GetImage()));
}

ProxyImage::~ProxyImage()
{
    delete realImage;
}
