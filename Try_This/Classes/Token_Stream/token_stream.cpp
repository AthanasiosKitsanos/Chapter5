#include "headers.h"
#include "token_stream.h"
#include "token.h"

Token_Stream::Token_Stream() {}
Token_Stream::~Token_Stream() {}

Token Token_Stream::get()
{
    char ch;
    std::cin >> ch;
    switch (ch)
    {
        case '(': case ')': case '+': case '-': case '*': case '/':
            return Token(ch);

        case '.':
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            {
                std::cin.putback(ch);
                double val;
                std::cin >> val;
                return Token('8', val);
            }

        default:
            throw std::invalid_argument("Wrong input");
    }
}

void Token_Stream::putback(Token& token)
{
    std::cin.putback(token.kind);
}