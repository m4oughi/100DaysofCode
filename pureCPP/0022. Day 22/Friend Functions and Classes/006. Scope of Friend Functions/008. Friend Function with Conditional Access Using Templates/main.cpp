#include <iostream>
#include <type_traits>
using namespace std;

template <typename T>
class Data {
private:
    T value;  // Private member

public:
    Data(T v) : value(v) {}

    // Friend function template with conditional access based on type
    template <typename U = T>
    friend typename enable_if<is_integral<U>::value, void>::type display(Data<U>& data) {
        cout << "Integral Value: " << data.value << endl;
    }

    template <typename U = T>
    friend typename enable_if<is_floating_point<U>::value, void>::type display(Data<U>& data) {
        cout << "Floating-Point Value: " << data.value << endl;
    }
};

int main() {
    Data<int> intData(42);
    Data<double> doubleData(3.14);

    display(intData);  // Friend function for integral type
    display(doubleData);  // Friend function for floating-point type

    return 0;
}
