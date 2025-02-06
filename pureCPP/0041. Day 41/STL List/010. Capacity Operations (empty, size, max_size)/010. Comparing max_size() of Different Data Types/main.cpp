#include <iostream>
#include <list>

int main() {
    std::list<int> intList;
    std::list<double> doubleList;
    std::list<std::string> stringList;

    std::cout << "Max size of int list: " << intList.max_size() << std::endl;
    std::cout << "Max size of double list: " << doubleList.max_size() << std::endl;
    std::cout << "Max size of string list: " << stringList.max_size() << std::endl;

    return 0;
}
