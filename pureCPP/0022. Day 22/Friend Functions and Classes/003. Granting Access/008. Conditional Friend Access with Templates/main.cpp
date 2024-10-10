#include <iostream>
#include <type_traits>
using namespace std;

template <typename T>
class DataContainer {
private:
    T value;

public:
    DataContainer(T v) : value(v) {}

    // Granting access conditionally using enable_if
    template <typename U = T>
    friend typename enable_if<is_integral<U>::value, void>::type displayValue(DataContainer<U>& data) {
        cout << "Integral value: " << data.value << endl;
    }

    template <typename U = T>
    friend typename enable_if<is_floating_point<U>::value, void>::type displayValue(DataContainer<U>& data) {
        cout << "Floating-point value: " << data.value << endl;
    }
};

int main() {
    DataContainer<int> intData(42);
    DataContainer<double> doubleData(3.14);

    displayValue(intData);   // Calls the integral version
    displayValue(doubleData);  // Calls the floating-point version
    return 0;
}
