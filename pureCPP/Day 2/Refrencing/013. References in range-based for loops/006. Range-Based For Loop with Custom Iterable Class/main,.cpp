#include <iostream>
#include <iterator>

class MyIterable {
    int arr[3] = {1, 2, 3};
public:
    class Iterator {
        int* ptr;
    public:
        Iterator(int* p) : ptr(p) {}
        int& operator*() { return *ptr; }
        Iterator& operator++() { ++ptr; return *this; }
        bool operator!=(const Iterator& other) const { return ptr != other.ptr; }
    };

    Iterator begin() { return Iterator(arr); }
    Iterator end() { return Iterator(arr + 3); }
};

int main() {
    MyIterable iterable;

    for (auto& value : iterable) {  // auto& deduces that value is an l-value reference
        value *= 2;  // Modify each element in the iterable
    }

    for (const auto& value : iterable) {
        std::cout << value << " ";  // Output: 2 4 6
    }
}
