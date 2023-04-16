#include <iostream>
/* 
 * note: comment pairs can not nest, so when need to comment out a block of code during debugging, the best way is to insert single-line comments at the beginning of each line in the section we want to ignore.
 * Simple main function:
 * Read two numbers and write their sum
*/

int main()
{
    // prompt user to enter two numbers
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;   // variables to hold the input we read
    std::cin >> v1 >> v2; // read input
    std::cout << "The sum of " << v1 << " and " << v2
              << " is " << v1 + v2 << std::endl;
    return 0;
}