#include <iostream>
#include <list>

void clearList(std::list<int>& myList) {
    myList.clear();
    std::cout << "List cleared inside function.\n";
}

int main() {
    std::list<int> numbers = {5, 10, 15, 20};

    clearList(numbers);
    
    std::cout << "Size after function call: " << numbers.size() << std::endl;
    return 0;
}
