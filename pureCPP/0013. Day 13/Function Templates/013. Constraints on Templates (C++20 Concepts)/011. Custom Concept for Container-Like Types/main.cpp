#include <iostream>
#include <concepts>
#include <vector>
using namespace std;

template<typename T>
concept Container = requires(T a) {
    a.begin();
    a.end();
    a.size();
};

template<Container T>
void printContainer(const T& container) {
    for (const auto& elem : container) {
        cout << elem << " ";
    }
    cout << endl;
}

int main() {
    vector<int> vec = {1, 2, 3, 4};
    printContainer(vec);  // Works: vector satisfies Container concept

    // int x = 10;
    // printContainer(x);  // Compilation error: int does not satisfy Container concept
    return 0;
}
