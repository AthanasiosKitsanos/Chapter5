#pragma once

class Token_Stream;

class Token
{
    private:
        static Token_Stream* ts;

    public:
        double value;
        char kind;

        Token();
        Token(char& k);
        Token(char& k, int& v);
        ~Token();

        void expression();
        void term();
        void primary();

        static void set_to_global(Token_Stream* ptr);
        static void delete_from_global();
};