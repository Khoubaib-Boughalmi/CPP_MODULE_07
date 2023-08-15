#include "whatever.h"

int main()
{
    int a = 10;
    int b = 20;
    std::cout << a << " " << b << std::endl;
    swap<int>(a, b);
    std::cout << a << " " << b << std::endl;
    std::cout << "min: " << min(a, b) << std::endl;
    std::cout << "max: " << max(a, b) << std::endl;
    return (0);
}