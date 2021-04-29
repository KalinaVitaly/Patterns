#ifndef REMOVEMULTIPLYENTER_H
#define REMOVEMULTIPLYENTER_H

#include "abstractexpression.h"

class RemoveMultiplyEnter : public AbstractExpression
{
public:
    RemoveMultiplyEnter();
    ~RemoveMultiplyEnter() override = default;
public:
    QString Interpret(QString& expression) override;
private:
    QRegExp regularEnter;
};

#endif // REMOVEMULTIPLYENTER_H
