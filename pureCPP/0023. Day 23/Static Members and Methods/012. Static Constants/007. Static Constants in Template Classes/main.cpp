#include <iostream>
using namespace std;

template <typename T>
class TemplateClass {
public:
    static const T defaultValue;  // Static constant for default value
};

// Specialization for int type
template <>
const int TemplateClass<int>::defaultValue = 42;

// Specialization for double type
template <>
const double TemplateClass<double>::defaultValue = 3.14;

int main() {
    // Accessing static constants from template specializations
    cout << "Default int value: " << TemplateClass<int>::defaultValue << endl;  // Output: 42
    cout << "Default double value: " << TemplateClass<double>::defaultValue << endl;  // Output: 3.14

    return 0;
}
