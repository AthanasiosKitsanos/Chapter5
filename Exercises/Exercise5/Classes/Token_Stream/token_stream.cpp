#include "headers.h"
#include "token_stream.h"

Token_Stream::Token_Stream() {}
Token_Stream::~Token_Stream() {}

Token Token_Stream::get()
{
    return Token{};
}

void Token_Stream::putback(Token& token)
{

}