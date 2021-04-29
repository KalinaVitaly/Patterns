#ifndef REALIMAGE_H
#define REALIMAGE_H

#include <QPixmap>
#include "iimage.h"

class RealImage final : public IImage
{
public:
    explicit RealImage(QObject *parent = nullptr);
    ~RealImage() override = default;
public:
    void DownloadImage() override;
    QPixmap& GetImage();
private:
    QPixmap image;
};

#endif // REALIMAGE_H
