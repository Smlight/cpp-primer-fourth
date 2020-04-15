#include <iostream>
#include "Sales_item.h"

int main()
{
    int n;  // number of items
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        Sales_item item;
        std::cin >> item;
        std::cout << item << std::endl;
    }
    return 0;
}