#ifndef CHANGEQUOTE_H
#define CHANGEQUOTE_H

#include "abstractexpression.h"

class ChangeQuote : public AbstractExpression
{
public:
    ChangeQuote();
    ~ChangeQuote() override = default;
public:
    QString Interpret(QString& expression) override;
private:
    QRegExp regularOpenQuote;
    QRegExp regularCloseQuote;
};

#endif // CHANGEQUOTE_H
