#include "editor.hpp"

Editor::Editor(const std::string &fname, const std::string &ss1, const std::string &ss2)
{
    fileName = fname;
    s1 = ss1;
    s2 = ss2;
}

Editor::~Editor(void)
{
}

void Editor::replaceWord(std::string &line)
{
    std::string::size_type found = line.find(s1);

    while (found != std::string::npos)
    {
        line.erase(found, s1.length());
        line.insert(found, s2);
        found = line.find(s1);
    }
}

void Editor::fileEditor(void)
{

    std::string line;
    std::ofstream fileWrite;
    std::ifstream fileRead;
    std::string newFile;

    newFile = fileName;
    newFile.append(".replace");

    fileRead.open(fileName);
    fileWrite.open(newFile);
    if (!fileRead)
    {
        std::cout << "File Doesn't Exist!" << std::endl;
        return;
    }
    if (!fileWrite)
    {
        std::cout << "File Doesn't Exist!" << std::endl;
        return;
    }
    while (fileRead)
    {
        std::getline(fileRead, line);
        replaceWord(line);
        fileWrite << line << std::endl;
    }
    fileRead.close();
    fileWrite.close();
}