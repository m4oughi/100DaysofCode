#include <iostream>

template <const int N>
class MyArray {
    int arr[N];
};

int main() {
    MyArray<5> myArr; // N is a constant template parameter

    return 0;
}