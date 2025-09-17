#include "headers.h"
#include "stream.h"

int main()
{   
    bool stop = false;

    while(!stop)
    {
        Stream str;
        
        try
        {
            while(std::cin)
            {
                char c;
                std::cin.get(c);

                if(c == '\n')
                {
                    break;
                }

                if(c == 'q')
                {
                    stop = true;
                    break;
                }

                if(c == ' ')
                {
                    continue;
                }

                std::cin.putback(c);
                str.get();
            }
        }
        catch(std::runtime_error& e)
        {
            std::cout << e.what() << std::endl;
            continue;
        }

        if(str.digits() == 0)
        {
            std::cout << "No input found" << std::endl;
            continue;
        }

        str.print();
    }

    std::cout << "Press any key to exit...";
    std::cin.get();

    return 0;
}