#include <iostream>

class CustomContainer {
private:
    int data[3] = {10, 20, 30};

public:
    class Iterator {
    private:
        int* ptr;

    public:
        Iterator(int* p) : ptr(p) {}
        bool operator!=(const Iterator& other) const { return ptr != other.ptr; }
        int& operator*() { return *ptr; }
        Iterator& operator++() { ++ptr; return *this; }
    };

    Iterator begin() { return Iterator(data); }
    Iterator end() { return Iterator(data + 3); }
};

int main() {
    CustomContainer cc;

    for (int value : cc) { // ✅ Works with custom iterator
        std::cout << value << " ";
    }

    return 0;
}
