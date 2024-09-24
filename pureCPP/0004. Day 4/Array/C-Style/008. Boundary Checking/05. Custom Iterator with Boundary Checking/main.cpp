#include <iostream>

class SafeArray {
private:
    int* arr;
    int size;

public:
    SafeArray(int s) : size(s) {
        arr = new int[size];
    }

    ~SafeArray() {
        delete[] arr;
    }

    int& operator[](int index) {
        if (index >= 0 && index < size) {
            return arr[index];
        } else {
            throw std::out_of_range("Index out of bounds");
        }
    }

    int getSize() const { return size; }

    // Custom iterator class
    class Iterator {
    private:
        SafeArray& array;
        int index;

    public:
        Iterator(SafeArray& arr, int idx) : array(arr), index(idx) {}

        int& operator*() {
            return array[index];
        }

        Iterator& operator++() {
            if (index + 1 >= array.getSize()) {
                throw std::out_of_range("Iterator out of bounds");
            }
            ++index;
            return *this;
        }

        bool operator!=(const Iterator& other) const {
            return index != other.index;
        }
    };

    Iterator begin() { return Iterator(*this, 0); }
    Iterator end() { return Iterator(*this, size); }
};

int main() {
    SafeArray array(3);

    array[0] = 10;
    array[1] = 20;
    array[2] = 30;

    // Safe iteration with boundary checking
    try {
        for (auto it = array.begin(); it != array.end(); ++it) {
            std::cout << *it << " ";  // Outputs: 10 20 30
        }
        std::cout << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << e.what() << std::endl;
    }
}
