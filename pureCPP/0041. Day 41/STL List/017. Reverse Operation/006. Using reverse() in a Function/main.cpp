#include <iostream>
#include <list>

// Function to reverse and print a list
void reverseList(std::list<int>& lst) {
    lst.reverse(); // Reverse the list
}

int main() {
    std::list<int> numbers = {10, 20, 30, 40, 50};

    reverseList(numbers); // Call the function

    std::cout << "Reversed List: ";
    for (int num : numbers) std::cout << num << " ";

    return 0;
}
