#include "Sales_item.h"

int main()
{
    Sales_item itemSum;
    if (std::cin >> itemSum) {
        while (true)
        {
            Sales_item itemCurr;
            if (std::cin >> itemCurr) {
                itemSum = itemSum + itemCurr;
            } else {
                break;
            }
        }
        std::cout << "sum of all items is: " << itemSum << std::endl;
    } else {
        std::cout << "no item!" << std::endl;
    }
    return 0;
}