#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item total, trans;
    if (std::cin >> total) {
        Sales_item trans;
        while (std::cin >> trans) {
            if (total.isbn() == trans.isbn()) {
                total += trans;
            } else {
                std::cout << total.isbn() << " info is: " << total << std::endl;
                total = trans;
            }
        }
        std::cout << total.isbn() << " info is: " << total << std::endl;
    } else {
        std::cerr << "no item!" << std::endl;
        return -1;
    }
    return 0;
}