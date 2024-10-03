#include <iostream>
using namespace std;

class DynamicArray {
    int* data;
    int size;
public:
    DynamicArray(int s = 0) : size(s) {
        data = new int[size];
    }

    // Overload the stream extraction operator
    friend istream& operator>>(istream& is, DynamicArray& arr) {
        for (int i = 0; i < arr.size; ++i) {
            is >> arr.data[i];
        }
        return is;
    }

    // Overload the stream insertion operator
    friend ostream& operator<<(ostream& os, const DynamicArray& arr) {
        os << "[";
        for (int i = 0; i < arr.size; ++i) {
            os << arr.data[i];
            if (i < arr.size - 1)
                os << ", ";
        }
        os << "]";
        return os;
    }

    ~DynamicArray() {
        delete[] data;
    }
};

int main() {
    DynamicArray arr(3);
    cout << "Enter 3 integers: ";
    cin >> arr;
    cout << "You entered: " << arr << endl;
    return 0;
}
