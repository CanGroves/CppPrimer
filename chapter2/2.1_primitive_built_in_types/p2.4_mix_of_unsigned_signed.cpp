#include <iostream>

int main()
{
    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << std::endl;
    std::cout << u - u2 << std::endl;

    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl;
    std::cout << i - i2 << std::endl;
    std::cout << i - u << std::endl;
    std::cout << u - i << std::endl;
    std::cout << u - i2 << std::endl; // = uint (10 - 42) = (-32) % 4294967296 = 4294967264

    std::cout << "2M" << "\n";
    std::cout << "2" << "\t" << "M" << "\n";

    int q = 100, sum = 0;
    for (int q = 0; q != 10; ++q) {
        sum += q;
    }
    std::cout << q << " " << sum << std::endl;
}