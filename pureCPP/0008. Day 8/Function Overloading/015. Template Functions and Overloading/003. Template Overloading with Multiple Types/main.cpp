#include <iostream>
using namespace std;

template<typename T>
void process(T a) {
    cout << "Single template type: " << a << endl;
}

template<typename T1, typename T2>
void process(T1 a, T2 b) {
    cout << "Two template types: " << a << " and " << b << endl;
}

int main() {
    process(10);             // Calls single template version
    process(10, 20.5);       // Calls two-type template version

    return 0;
}
