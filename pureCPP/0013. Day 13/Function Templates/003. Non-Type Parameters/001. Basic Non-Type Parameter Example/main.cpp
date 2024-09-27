#include <iostream>
using namespace std;

template <int N>
int multiplyByConstant(int x) {
    return x * N;
}

int main() {
    cout << "Multiply by 5: " << multiplyByConstant<5>(10) << endl;
    cout << "Multiply by 3: " << multiplyByConstant<3>(10) << endl;
    return 0;
}
