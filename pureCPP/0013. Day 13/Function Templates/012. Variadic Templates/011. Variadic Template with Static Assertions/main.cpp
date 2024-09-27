#include <iostream>
#include <type_traits>
using namespace std;

template<typename T, typename... Args>
void sumIntegers(T first, Args... args) {
    static_assert(is_integral<T>::value, "All arguments must be integers");
    if constexpr (sizeof...(args) > 0) {
        sumIntegers(args...);
    } else {
        cout << "All arguments are integers." << endl;
    }
}

int main() {
    sumIntegers(1, 2, 3);  // Valid: all integers
    // sumIntegers(1, 2.5, 3);  // Compilation error: static_assert triggers due to a double
    return 0;
}
