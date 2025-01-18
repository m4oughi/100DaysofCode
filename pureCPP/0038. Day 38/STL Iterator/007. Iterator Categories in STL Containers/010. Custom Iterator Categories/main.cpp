#include <iostream>
#include <iterator>

class CustomContainer {
    int data[5] = {10, 20, 30, 40, 50};

public:
    class Iterator {
        int* ptr;

    public:
        using iterator_category = std::random_access_iterator_tag;
        using value_type = int;
        using difference_type = std::ptrdiff_t;
        using pointer = int*;
        using reference = int&;

        explicit Iterator(int* p) : ptr(p) {}
        reference operator*() { return *ptr; }
        Iterator& operator++() { ++ptr; return *this; }
        Iterator operator++(int) { Iterator temp = *this; ++ptr; return temp; }
        Iterator& operator--() { --ptr; return *this; }
        Iterator operator--(int) { Iterator temp = *this; --ptr; return temp; }
        Iterator operator+(difference_type n) const { return Iterator(ptr + n); }
        Iterator operator-(difference_type n) const { return Iterator(ptr - n); }
        difference_type operator-(const Iterator& other) const { return ptr - other.ptr; }
        bool operator==(const Iterator& other) const { return ptr == other.ptr; }
        bool operator!=(const Iterator& other) const { return ptr != other.ptr; }
    };

    Iterator begin() { return Iterator(data); }
    Iterator end() { return Iterator(data + 5); }
};

int main() {
    CustomContainer container;

    std::cout << "Traversing custom container: ";
    for (auto it = container.begin(); it != container.end(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
