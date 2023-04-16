#include "Sales_item.h"

int main()
{
    Sales_item itemCurr, item;
    int cnt = 1;
    if (std::cin >> itemCurr) {
        while (std::cin >> item) {
            if (itemCurr.isbn() == item.isbn()) {
                ++cnt;
            } else {
                std::cout << itemCurr.isbn() << " occurs " << cnt << " times!" << std::endl;
                itemCurr = item;
                cnt = 1;
            }
        }
        std::cout << itemCurr.isbn() << " occurs " << cnt << " times!" << std::endl;
    } else {
        std::cout << "no item!" << std::endl;
    }
    return 0;
}