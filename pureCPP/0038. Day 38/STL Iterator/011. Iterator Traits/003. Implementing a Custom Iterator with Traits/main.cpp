#include <iostream>
#include <iterator>

class CustomIterator {
    int* ptr;

public:
    using value_type = int;
    using difference_type = std::ptrdiff_t;
    using pointer = int*;
    using reference = int&;
    using iterator_category = std::random_access_iterator_tag;

    explicit CustomIterator(int* p) : ptr(p) {}

    CustomIterator& operator++() {
        ++ptr;
        return *this;
    }

    bool operator!=(const CustomIterator& other) const {
        return ptr != other.ptr;
    }

    int& operator*() { return *ptr; }
};

int main() {
    int arr[] = {10, 20, 30};

    CustomIterator start(arr);
    CustomIterator end(arr + 3);

    std::cout << "Custom Iterator: ";
    for (auto it = start; it != end; ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
