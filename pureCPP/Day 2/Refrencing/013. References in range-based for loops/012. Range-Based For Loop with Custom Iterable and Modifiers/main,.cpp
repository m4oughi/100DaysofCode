#include <iostream>
#include <iterator>

class CustomIterable {
    int* data;
    std::size_t size;
public:
    CustomIterable(int* d, std::size_t s) : data(d), size(s) {}

    class Iterator {
        int* ptr;
    public:
        Iterator(int* p) : ptr(p) {}
        int& operator*() { return *ptr; }
        Iterator& operator++() { ++ptr; return *this; }
        bool operator!=(const Iterator& other) const { return ptr != other.ptr; }
    };

    Iterator begin() { return Iterator(data); }
    Iterator end() { return Iterator(data + size); }
};

int main() {
    int arr[3] = {1, 2, 3};
    CustomIterable iterable(arr, 3);

    for (auto& value : iterable) {  // auto& deduces that value is an l-value reference
        value *= 2;  // Modify each element in the iterable
    }

    for (const auto& value : iterable) {
        std::cout << value << " ";  // Output: 2 4 6
    }
}
