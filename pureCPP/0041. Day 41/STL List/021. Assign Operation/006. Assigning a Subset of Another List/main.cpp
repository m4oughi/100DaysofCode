#include <iostream>
#include <list>

int main() {
    std::list<int> original = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::list<int> subset;

    auto itStart = original.begin();
    std::advance(itStart, 3); // Move to the 4th element (index 3)
    
    auto itEnd = original.begin();
    std::advance(itEnd, 7); // Move to the 8th element (index 7)

    subset.assign(itStart, itEnd); // Assign elements from index 3 to 7

    std::cout << "Subset after assign: ";
    for (int num : subset) std::cout << num << " ";

    return 0;
}
