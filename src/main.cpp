#include <iostream>

class SS
{
public:
    SS() = delete;
    int x;
};

int main(int argc, char *argv[])
{
    std::cout << "helllo world" << std::endl;
    auto s = SS{}; // this code compiles before C++ 20, but after C++20, it fails with error use of deleted function ‘SS::SS()’
    std::cout << s.x;
    std::cout << std::endl;
    return 0;
}
