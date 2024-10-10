#include <iostream>
#include <type_traits>
using namespace std;

template <typename T>
class Data {
private:
    T value;  // Encapsulated private data

public:
    Data(T v) : value(v) {}

    // Friend function with conditional access based on type
    template <typename U = T>
    friend typename enable_if<is_integral<U>::value, void>::type displayValue(Data<U>& data) {
        cout << "Integral Value: " << data.value << endl;
    }

    template <typename U = T>
    friend typename enable_if<is_floating_point<U>::value, void>::type displayValue(Data<U>& data) {
        cout << "Floating-Point Value: " << data.value << endl;
    }
};

int main() {
    Data<int> intData(42);
    Data<double> doubleData(3.14);

    displayValue(intData);  // Friend function accessing integral data
    displayValue(doubleData);  // Friend function accessing floating-point data

    return 0;
}
