#include <iostream>
#include <type_traits>
using namespace std;

template<typename T>
typename enable_if<is_integral<T>::value>::type process(T value) {
    cout << "Processing integral type: " << value << endl;
}

template<typename T>
typename enable_if<is_floating_point<T>::value>::type process(T value) {
    cout << "Processing floating-point type: " << value << endl;
}

int main() {
    process(5);          // Calls integral version
    process(3.14);       // Calls floating-point version

    return 0;
}
