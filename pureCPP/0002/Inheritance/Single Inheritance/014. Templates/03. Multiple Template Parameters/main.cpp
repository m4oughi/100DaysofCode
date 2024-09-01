#include <iostream>
using namespace std;

// Template base class with multiple parameters
template <typename T, typename U>
class Base {
public:
    T value1;
    U value2;
    
    Base(T val1, U val2) : value1(val1), value2(val2) {
        cout << "Base constructor called with values: " << value1 << ", " << value2 << endl;
    }
    
    void show() {
        cout << "Base values: " << value1 << ", " << value2 << endl;
    }
};

// Template derived class
template <typename T, typename U>
class Derived : public Base<T, U> {
public:
    Derived(T val1, U val2) : Base<T, U>(val1, val2) {
        cout << "Derived constructor called." << endl;
    }
    
    void display() {
        this->show();
    }
};

int main() {
    Derived<int, double> obj(10, 3.14);
    obj.display(); // Calls show() from Base
    
    return 0;
}
