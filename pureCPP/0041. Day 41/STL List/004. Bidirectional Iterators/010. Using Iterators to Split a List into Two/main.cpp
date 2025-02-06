#include <iostream>
#include <list>

int main() {
    std::list<int> original = {10, 20, 30, 40, 50, 60};
    std::list<int> firstHalf, secondHalf;

    auto it = original.begin();
    std::advance(it, original.size() / 2);  // Move to middle

    firstHalf.splice(firstHalf.begin(), original, original.begin(), it);
    secondHalf.splice(secondHalf.begin(), original);

    std::cout << "First half: ";
    for (int val : firstHalf) std::cout << val << " ";
    std::cout << "\nSecond half: ";
    for (int val : secondHalf) std::cout << val << " ";
    std::cout << std::endl;

    return 0;
}
