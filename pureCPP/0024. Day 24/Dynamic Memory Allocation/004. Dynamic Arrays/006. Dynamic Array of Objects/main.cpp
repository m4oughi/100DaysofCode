#include <iostream>
using namespace std;

class MyClass {
public:
    int x;
    MyClass(int val) : x(val) {}
    void display() {
        cout << "Value: " << x << endl;
    }
};

int main() {
    int size = 3;
    MyClass* arr = new MyClass[size]{{10}, {20}, {30}}; // dynamically allocate an array of objects

    for (int i = 0; i < size; i++) {
        arr[i].display();
    }

    delete[] arr; // deallocate memory
    return 0;
}
