#include <iostream>
#include <list>

int main() {
    std::list<std::string> list1 = {"apple", "banana"};
    std::list<std::string> list2 = {"apple", "cherry"};

    if (list1 < list2) {
        std::cout << "list1 is smaller because 'banana' comes before 'cherry'.\n";
    }

    return 0;
}
