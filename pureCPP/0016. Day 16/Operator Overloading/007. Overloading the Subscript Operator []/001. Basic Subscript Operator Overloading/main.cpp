#include <iostream>
using namespace std;

class Array {
    int data[5];
public:
    Array() {
        for (int i = 0; i < 5; ++i)
            data[i] = i + 1;
    }

    int& operator[](int index) {
        return data[index];  // Return the array element at index
    }

    void display() const {
        for (int i = 0; i < 5; ++i)
            cout << data[i] << " ";
        cout << endl;
    }
};

int main() {
    Array arr;
    arr[2] = 10;  // Modify element using subscript operator
    arr.display();  // Output: 1 2 10 4 5
    return 0;
}
