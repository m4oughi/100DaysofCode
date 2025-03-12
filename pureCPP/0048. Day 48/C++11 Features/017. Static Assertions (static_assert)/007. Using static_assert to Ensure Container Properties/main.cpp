#include <iostream>
#include <vector>
#include <type_traits>

template <typename Container>
void checkContainer(const Container& c) {
    static_assert(std::is_same<typename Container::value_type, int>::value, "Container must store int values");
    std::cout << "Container check passed!\n";
}

int main() {
    std::vector<int> v{1, 2, 3};
    checkContainer(v);

    // std::vector<double> d{1.1, 2.2, 3.3};
    // checkContainer(d); // Compilation error

    return 0;
}
