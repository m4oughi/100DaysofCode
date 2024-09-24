#include <iostream>
#include <vector>

class MyContainer {
    std::vector<int> data;

public:
    MyContainer(std::initializer_list<int> list) : data(list) {}

    class const_iterator {
        const int* ptr;

    public:
        const_iterator(const int* p) : ptr(p) {}

        const int& operator*() const { return *ptr; }
        const_iterator& operator++() { ++ptr; return *this; }
        bool operator!=(const const_iterator& other) const { return ptr != other.ptr; }
    };

    const_iterator begin() const { return const_iterator(data.data()); }
    const_iterator end() const { return const_iterator(data.data() + data.size()); }
};

int main() {
    MyContainer container = {1, 2, 3, 4, 5};

    for (auto it = container.begin(); it != container.end(); ++it) {
        std::cout << *it << " "; // Prints 1 2 3 4 5
    }
}
