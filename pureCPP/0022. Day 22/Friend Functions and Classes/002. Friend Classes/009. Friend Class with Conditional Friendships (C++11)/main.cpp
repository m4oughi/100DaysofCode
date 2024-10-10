#include <iostream>
#include <type_traits>
using namespace std;

template <typename T>
class Container {
private:
    T value;

public:
    Container(T v) : value(v) {}

    // Conditional friendship using enable_if
    template <typename U = T>
    friend typename enable_if<is_integral<U>::value, void>::type display(Container<U>& c) {
        cout << "Value (integral type): " << c.value << endl;
    }

    template <typename U = T>
    friend typename enable_if<is_floating_point<U>::value, void>::type display(Container<U>& c) {
        cout << "Value (floating-point type): " << c.value << endl;
    }
};

int main() {
    Container<int> intContainer(42);
    Container<double> doubleContainer(3.14);

    display(intContainer);  // Calls the friend function for integral type
    display(doubleContainer);  // Calls the friend function for floating-point type
    return 0;
}
