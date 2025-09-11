#include "headers.h"
#include "token.h"
#include "token_stream.h"

int main()
{
    try
    {
        initialize_stream_pointer();

        Token t;

        while(std::cin)
        {
            std::cout << t.expression() << std::endl;
        }
    }
    catch(std::invalid_argument& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(std::runtime_error& e)
    {
        std::cerr << e.what() << std::endl;
    }

    delete_stream_pointer();

    std::cin.clear();
    std::cout << "Press any key to exit...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}