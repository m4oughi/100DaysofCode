#include <iostream>
#include <iterator>

class RandomAccessContainer {
    int data[5] = {10, 20, 30, 40, 50};

public:
    class Iterator {
        int* ptr;

    public:
        explicit Iterator(int* p) : ptr(p) {}

        int& operator*() { return *ptr; }
        Iterator& operator++() { ++ptr; return *this; }
        Iterator operator++(int) { Iterator temp = *this; ++ptr; return temp; }
        Iterator& operator--() { --ptr; return *this; }
        Iterator operator--(int) { Iterator temp = *this; --ptr; return temp; }
        Iterator operator+(int n) const { return Iterator(ptr + n); }
        Iterator operator-(int n) const { return Iterator(ptr - n); }
        int operator-(const Iterator& other) const { return ptr - other.ptr; }
        bool operator==(const Iterator& other) const { return ptr == other.ptr; }
        bool operator!=(const Iterator& other) const { return ptr != other.ptr; }
        bool operator<(const Iterator& other) const { return ptr < other.ptr; }
    };

    Iterator begin() { return Iterator(data); }
    Iterator end() { return Iterator(data + 5); }
};

int main() {
    RandomAccessContainer container;

    std::cout << "Traversing custom container: ";
    for (auto it = container.begin(); it != container.end(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
