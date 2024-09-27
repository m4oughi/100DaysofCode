#include <iostream>
using namespace std;

template <typename T>
T getMax(T a, T b) {
    return (a > b) ? a : b;
}

// Specialization for const char* (C-style strings)
template <>
const char* getMax<const char*>(const char* a, const char* b) {
    return (strcmp(a, b) > 0) ? a : b;
}

int main() {
    cout << "Max of 3 and 7: " << getMax(3, 7) << endl;        // Generic version
    cout << "Max of 'apple' and 'banana': " << getMax("apple", "banana") << endl;  // Specialized version
    return 0;
}
