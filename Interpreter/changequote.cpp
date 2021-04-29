#include "changequote.h"

ChangeQuote::ChangeQuote()
    : regularOpenQuote(QString("“")),
      regularCloseQuote(QString("”"))
{}

QString ChangeQuote::Interpret(QString& expression)
{
    expression.replace(regularOpenQuote, "«");
    expression.replace(regularCloseQuote, "»");

    return expression;
}
