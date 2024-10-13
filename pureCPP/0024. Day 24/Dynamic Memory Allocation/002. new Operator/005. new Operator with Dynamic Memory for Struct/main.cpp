#include <iostream>
using namespace std;

struct Point {
    int x, y;
};

int main() {
    Point* p = new Point; // dynamically allocate memory for a structure

    p->x = 10;
    p->y = 20;

    cout << "Point: (" << p->x << ", " << p->y << ")" << endl;

    delete p; // deallocate memory
    return 0;
}
