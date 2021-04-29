#include "removemultiplyspaces.h"

RemoveMultiplySpaces::RemoveMultiplySpaces()
    : regular(QString("\\s{2,}"))
{

}

QString RemoveMultiplySpaces::Interpret(QString& expression)
{
    expression.remove(regular);
    return expression;
}
