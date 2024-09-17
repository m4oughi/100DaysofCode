#include <iostream>
#include <initializer_list>

void printInitializerList(std::initializer_list<int> list) {
    for (auto elem : list) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

int main() {
    printInitializerList({1, 2, 3, 4, 5});
    printInitializerList({10, 20, 30});

    return 0;
}
