#ifndef IIMAGE_H
#define IIMAGE_H

#include <QObject>

class IImage : public QObject
{
    Q_OBJECT
public:
    explicit IImage(QObject *parent);
    virtual ~IImage() = default;
public:
    virtual void DownloadImage() {};
};

#endif // IIMAGE_H
