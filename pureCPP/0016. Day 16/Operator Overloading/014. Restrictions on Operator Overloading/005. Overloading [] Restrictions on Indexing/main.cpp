#include <iostream>
using namespace std;

class Array {
    int arr[5];
public:
    Array() {
        for (int i = 0; i < 5; ++i)
            arr[i] = i + 1;
    }

    // Overloading the [] operator must be done within the class as a member function
    int& operator[](int index) {
        return arr[index];
    }
};

int main() {
    Array a;
    cout << "Element at index 2: " << a[2] << endl;  // Output: 3
    return 0;
}
