#include "headers.h"
#include "token.h"

Token_Stream* Token::ts = nullptr;

Token::Token() { }
Token::Token(char& c): kind(c), value(0.00) { }
Token::Token(char& c, int& val): kind(c), value(val) { }
Token::~Token() {}

void Token::expression()
{

}

void Token::term()
{

}

void Token::primary()
{

}

void Token::set_to_global(Token_Stream* ptr)
{
    ts = ptr;
}

void Token::delete_from_global()
{
    ts = nullptr;
}