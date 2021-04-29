#ifndef REMOVESPACEINBRACKETS_H
#define REMOVESPACEINBRACKETS_H

#include "abstractexpression.h"

class RemoveSpaceInBrackets : public AbstractExpression
{
public:
    RemoveSpaceInBrackets();
    ~RemoveSpaceInBrackets() override = default;
public:
    QString Interpret(QString& expression) override;
private:
    QRegExp regularOpenBracket;
    QRegExp regularCloseBracket;
};

#endif // REMOVESPACEINBRACKETS_H
