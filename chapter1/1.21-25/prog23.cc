#include <iostream>
#include "Sales_item.h"

int main()
{
    int n;  // number of items
    std::cin >> n;
    Sales_item sum;
    std::cin >> sum;
    for (int i = 1; i < n; i++) {
        Sales_item item;
        std::cin >> item;
        sum = sum + item;
    }
    std::cout << sum << std::endl;
    return 0;
}