#include <iostream>

template <typename T>
class Container {
private:
    T value;

public:
    Container(T v) : value(v) {}

    // Friend function declaration
    friend void displayValue(const Container& c) {
        std::cout << "Value: " << c.value << std::endl;
    }
};

int main() {
    Container<int> intContainer(10);
    Container<double> doubleContainer(5.5);

    displayValue(intContainer);    // Calls friend function for int
    displayValue(doubleContainer); // Calls friend function for double

    return 0;
}
