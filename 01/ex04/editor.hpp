#ifndef REPLACE_H
#define REPLACE_H

#include <fstream>
#include <iostream>

class Editor
{
private:
    std::string fileName;
    std::string s1;
    std::string s2;

public:
    Editor(const std::string &fname, const std::string &ss1, const std::string &ss2);
    ~Editor(void);

    void replaceWord(std::string &line);
    void fileEditor(void);
};

#endif
