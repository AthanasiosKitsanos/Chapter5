#pragma once

class Token;

class Token_Stream
{
    public:
        Token_Stream();
        ~Token_Stream();

        Token get();
        void putback(Token& token);
};