#include <iostream>

#include <Windows.h>


int main(int argc, char* argv[])
{
    char filename[1024];
    int res = GetModuleFileNameA(NULL, filename, sizeof(filename));
    std::cout << "return code:" << res << std::endl
        << "filename:" << filename << std::endl;

    return 0;
}
