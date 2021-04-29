#ifndef ABSTRACTEXPRESSION_H
#define ABSTRACTEXPRESSION_H

#include <QString>
#include <QRegExp>

class AbstractExpression
{
public:
    AbstractExpression();
    virtual ~AbstractExpression() = default;
public:
    virtual QString Interpret(QString&) = 0;
};

#endif // ABSTRACTEXPRESSION_H
