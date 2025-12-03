#include <string>
#include <iostream>

template<typename T = std::string>
void f(T = "")
{
    
}

int main()
{
    f();
    std::cout << "hello" << std::endl;
    return 0;
}
