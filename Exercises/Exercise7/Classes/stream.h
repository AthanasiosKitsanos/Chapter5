#pragma once

class Stream
{
    private:
        int count;
        char c_number;
        int number;

    public:
        Stream();
        ~Stream();

        void get();
        int digits();

        void print();
};