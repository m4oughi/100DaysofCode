#include <iostream>
#include <list>

int main() {
    std::list<double> decimals = {3.14, 1.41, 2.71, 1.61, 4.66};

    decimals.sort(); // Sort in ascending order

    std::cout << "Sorted Floating-Point List: ";
    for (double num : decimals) std::cout << num << " ";

    return 0;
}
