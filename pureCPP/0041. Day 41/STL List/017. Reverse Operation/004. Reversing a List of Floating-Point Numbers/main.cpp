#include <iostream>
#include <list>

int main() {
    std::list<double> decimals = {1.1, 2.2, 3.3, 4.4, 5.5};

    decimals.reverse(); // Reverse the list

    std::cout << "Reversed List: ";
    for (double num : decimals) std::cout << num << " ";

    return 0;
}
