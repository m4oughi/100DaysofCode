#include <iostream>
using namespace std;

template <typename T>
class Container {
private:
    T value;  // Private member

public:
    Container(T v) : value(v) {}

    // Friend function template declaration
    template <typename U>
    friend U getValue(Container<U> container);
};

// Friend function template accessing private member
template <typename U>
U getValue(Container<U> container) {
    return container.value;  // Accessing private member
}

int main() {
    Container<int> intContainer(42);
    Container<double> doubleContainer(3.14);

    cout << "Integer value: " << getValue(intContainer) << endl;  // Using template friend function
    cout << "Double value: " << getValue(doubleContainer) << endl;  // Using template friend function
    return 0;
}
