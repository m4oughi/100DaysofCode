#include <iostream>
#include <type_traits>
using namespace std;

template <typename T>
typename enable_if<is_same<T, int>::value, T>::type compute(int a) {
    return a * 2;
}

template <typename T>
typename enable_if<is_same<T, double>::value, T>::type compute(int a) {
    return a * 2.5;
}

int main() {
    int intResult = compute<int>(10);         // Calls compute<int>
    double doubleResult = compute<double>(10); // Calls compute<double>
    cout << "Integer Result: " << intResult << endl;
    cout << "Double Result: " << doubleResult << endl;
    return 0;
}
