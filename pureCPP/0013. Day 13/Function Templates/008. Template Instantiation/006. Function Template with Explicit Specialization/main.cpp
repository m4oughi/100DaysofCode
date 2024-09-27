#include <iostream>
using namespace std;

template <typename T>
T maxValue(T a, T b) {
    return (a > b) ? a : b;
}

// Explicit specialization for const char*
template <>
const char* maxValue(const char* a, const char* b) {
    return (strcmp(a, b) > 0) ? a : b;
}

int main() {
    cout << "Max of 5 and 10: " << maxValue(5, 10) << endl;     // Uses generic template
    cout << "Max of 3.5 and 2.8: " << maxValue(3.5, 2.8) << endl;  // Uses generic template
    cout << "Max of 'apple' and 'banana': " << maxValue("apple", "banana") << endl; // Specialized for const char*
    return 0;
}
