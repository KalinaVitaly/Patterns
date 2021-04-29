#include "removemultiplyenter.h"

RemoveMultiplyEnter::RemoveMultiplyEnter()
    : regularEnter(QString("\n{2,}"))
{}

QString RemoveMultiplyEnter::Interpret(QString& expression)
{
    expression.replace(regularEnter, QString("\n"));
    return expression;
}
