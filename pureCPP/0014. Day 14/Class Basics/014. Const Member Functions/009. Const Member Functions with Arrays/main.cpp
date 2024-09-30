#include <iostream>
using namespace std;

class ArrayHolder {
private:
    int arr[5];

public:
    ArrayHolder() {
        for (int i = 0; i < 5; i++) {
            arr[i] = i * 10;
        }
    }

    const int* getArray() const {  // Returning const pointer
        return arr;
    }

    void setElement(int index, int value) {
        if (index >= 0 && index < 5)
            arr[index] = value;
    }
};

int main() {
    ArrayHolder arrayHolder;
    const int* arr = arrayHolder.getArray();

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    arrayHolder.setElement(2, 100);  // Modify array
    arr = arrayHolder.getArray();
    
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
