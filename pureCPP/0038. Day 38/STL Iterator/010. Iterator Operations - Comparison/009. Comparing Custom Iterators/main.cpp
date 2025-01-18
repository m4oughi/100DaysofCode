#include <iostream>
#include <vector>

class CustomIterator {
    int* ptr;

public:
    explicit CustomIterator(int* p) : ptr(p) {}

    bool operator==(const CustomIterator& other) const {
        return ptr == other.ptr;
    }

    bool operator!=(const CustomIterator& other) const {
        return ptr != other.ptr;
    }

    CustomIterator& operator++() {
        ++ptr;
        return *this;
    }

    int& operator*() {
        return *ptr;
    }
};

int main() {
    int arr[] = {10, 20, 30};
    CustomIterator start(arr);
    CustomIterator end(arr + 3);

    std::cout << "Using custom iterator comparison: ";
    while (start != end) {
        std::cout << *start << " ";
        ++start;
    }

    return 0;
}
