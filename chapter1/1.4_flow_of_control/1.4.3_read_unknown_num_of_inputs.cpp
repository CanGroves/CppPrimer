#include <iostream>

int main() {
    int sum = 0, val = 0;
    // read until end-of-file, calculating a running total of all values read
    while (std::cin >> val) { // std::cin >> val return an std::cin object(>> 's left operand), while will be false when encounter an error(hit end-of-file or encounter an invalid input)
        sum += val; // equivalent to sum = sum + val
    }
    std::cout << "Sum is: " << sum << std::endl;
    return 0;
}