#ifndef REMOVEMULTIPLYSPACES_H
#define REMOVEMULTIPLYSPACES_H

#include "abstractexpression.h"

class RemoveMultiplySpaces : public AbstractExpression
{
public:
    RemoveMultiplySpaces();
    ~RemoveMultiplySpaces() override = default;
public:
    QString Interpret(QString& expression) override;
private:
    QRegExp regular;
};

#endif // REMOVEMULTIPLYSPACES_H
