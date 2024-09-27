#include <iostream>
#include <concepts>
using namespace std;

template<typename T, typename U>
concept Convertible = std::convertible_to<T, U>;

template<Convertible<int> T>
int convertToInteger(T value) {
    return static_cast<int>(value);
}

int main() {
    cout << convertToInteger(3.14) << endl;  // Works: double is convertible to int
    cout << convertToInteger('A') << endl;   // Works: char is convertible to int
    return 0;
}
