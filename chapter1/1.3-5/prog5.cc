#include <iostream>

int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int v1, v2;
    std::cin >> v1 >> v2;
    std::cout << "The product of " << v1;
    std::cout << " and " << v2;
    std::cout << " is " << v1 * v2 << std::endl;
    return 0;
}