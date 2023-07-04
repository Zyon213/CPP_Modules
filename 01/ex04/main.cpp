#include "editor.hpp"

int main(int argc, char const **argv)
{
    if (argc == 4)
    {
        Editor editor(argv[1], argv[2], argv[3]);
        editor.fileEditor();
    }
    else
        std::cout << "Invalid number of arguments." << std::endl;
    return (0);
}
