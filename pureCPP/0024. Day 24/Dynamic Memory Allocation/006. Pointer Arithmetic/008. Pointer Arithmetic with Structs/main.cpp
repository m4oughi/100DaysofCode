#include <iostream>
using namespace std;

struct Point {
    int x, y;
};

int main() {
    Point arr[3] = {{1, 2}, {3, 4}, {5, 6}};
    Point* ptr = arr; // pointer to the first element of the struct array

    cout << "Struct elements using pointer arithmetic: " << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Point " << i + 1 << ": (" << (ptr + i)->x << ", " << (ptr + i)->y << ")" << endl;
    }

    return 0;
}
