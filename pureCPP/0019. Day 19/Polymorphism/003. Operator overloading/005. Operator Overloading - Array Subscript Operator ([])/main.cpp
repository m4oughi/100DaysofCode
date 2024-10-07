#include <iostream>
using namespace std;

class IntArray {
private:
    int arr[10];
public:
    int& operator[](int index) {
        if (index >= 0 && index < 10) {
            return arr[index];
        } else {
            cout << "Array index out of bound, returning first element." << endl;
            return arr[0]; // Default return to avoid crash
        }
    }
};

int main() {
    IntArray myArray;
    myArray[0] = 10;
    myArray[1] = 20;

    cout << "Element at index 0: " << myArray[0] << endl;
    cout << "Element at index 1: " << myArray[1] << endl;

    return 0;
}
