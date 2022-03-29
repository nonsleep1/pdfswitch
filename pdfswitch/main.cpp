#include <iostream>
#include <string>
#include <boost/algorithm/string.hpp>    
#include <boost/filesystem.hpp>

using namespace boost::filesystem;

int main(int argc, char* argv[])
{
    std::cout << "PDF switch version 0.1" << std::endl;
    std::string extensionOfFile, FilenameStem, pathToFile, fullpathwithname;
    bool stop = false;
    for (int x = 1; x < argc; x++)
    {
        path p(argv[x]);
        pathToFile = p.branch_path().string();
        FilenameStem = p.stem().string();
        extensionOfFile = p.extension().string();
        boost::algorithm::to_lower(extensionOfFile);
        fullpathwithname = pathToFile + "\\" + FilenameStem + extensionOfFile;
        path p1(fullpathwithname);
        rename(p, p1);

        std::cout << x << ". " << argv[x] << std::endl;
    }

    system("PAUSE");
    return 0;
}