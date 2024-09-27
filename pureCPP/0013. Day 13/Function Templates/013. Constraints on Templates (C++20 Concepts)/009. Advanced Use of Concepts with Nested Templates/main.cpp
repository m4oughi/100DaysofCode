#include <iostream>
#include <concepts>
using namespace std;

template<typename T>
concept HasBegin = requires(T a) { a.begin(); };

template<HasBegin T>
void printFirstElement(T container) {
    if (!container.empty()) {
        cout << *container.begin() << endl;
    }
}

int main() {
    vector<int> v = {1, 2, 3};
    printFirstElement(v);  // Works: vector has a begin() method

    // int a = 5;
    // printFirstElement(a);  // Compilation error: int does not have a begin() method
    return 0;
}
