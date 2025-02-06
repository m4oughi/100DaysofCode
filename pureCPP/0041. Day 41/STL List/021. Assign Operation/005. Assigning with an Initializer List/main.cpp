#include <iostream>
#include <list>

int main() {
    std::list<std::string> myList;

    myList.assign({"Apple", "Banana", "Cherry", "Date"}); // Using initializer list

    std::cout << "List after assign: ";
    for (const auto& fruit : myList) std::cout << fruit << " ";

    return 0;
}
