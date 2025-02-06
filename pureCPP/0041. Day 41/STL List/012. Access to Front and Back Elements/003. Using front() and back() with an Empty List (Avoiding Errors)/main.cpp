#include <iostream>
#include <list>

int main() {
    std::list<int> numbers;

    if (!numbers.empty()) {
        std::cout << "Front: " << numbers.front() << std::endl;
        std::cout << "Back: " << numbers.back() << std::endl;
    } else {
        std::cout << "List is empty. Cannot access front and back elements.\n";
    }

    return 0;
}
