#include <iostream>

int main()
{
    int i = 0, &r1 = i;
    double d = 0, &r2 = d;
    r2 = 3.14159;
    std::cout << r2 << std::endl;
    r2 = r1;
    std::cout << r2 << std::endl;
    i = r2;
    std::cout << i << std::endl;
    r1 = d;
    std::cout << r1 << std::endl;
    r1 = 9;
    std::cout << r1 << std::endl;
    i = 8;
    std::cout << r1 << std::endl;
    i = 5;
    r1 = 10;
    std::cout << i << " " << r1 << std::endl;
}