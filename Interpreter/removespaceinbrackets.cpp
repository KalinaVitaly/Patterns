#include "removespaceinbrackets.h"

RemoveSpaceInBrackets::RemoveSpaceInBrackets()
    : regularOpenBracket(QString("[(]\\s+")),
      regularCloseBracket(QString("\\s+[)]"))
{}

QString RemoveSpaceInBrackets::Interpret(QString& expression)
{
    expression.replace(regularOpenBracket, QString("("));
    expression.replace(regularCloseBracket, QString(")"));
    return expression;
}
