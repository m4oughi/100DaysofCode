#include <iostream>
using namespace std;

template <typename T = int>
void print(T value) {
    cout << "Value: " << value << endl;
}

int main() {
    print(100);     // Uses default type (int)
    print(3.14);    // Explicitly uses double type
    return 0;
}
