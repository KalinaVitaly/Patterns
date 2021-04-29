#ifndef PROXYIMAGE_H
#define PROXYIMAGE_H

#include "realimage.h"
#include <QGraphicsPixmapItem>

class ProxyImage final : public IImage, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    explicit ProxyImage(QGraphicsItem *parent = nullptr, QObject *ObjParent = nullptr);
    ~ProxyImage() override;
public:
    void DownloadImage() override;
private:
    RealImage *realImage;
};

#endif // PROXYIMAGE_H
