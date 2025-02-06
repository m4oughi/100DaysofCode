#include <iostream>
#include <list>

int main() {
    std::list<int> fullList = {1, 2, 3, 4, 5, 6};
    std::list<int> secondHalf;

    auto mid = fullList.begin();
    std::advance(mid, fullList.size() / 2);  // Find middle position

    secondHalf.splice(secondHalf.begin(), fullList, mid, fullList.end());  // Move second half to new list

    std::cout << "First half: ";
    for (int val : fullList) std::cout << val << " ";

    std::cout << "\nSecond half: ";
    for (int val : secondHalf) std::cout << val << " ";

    return 0;
}
