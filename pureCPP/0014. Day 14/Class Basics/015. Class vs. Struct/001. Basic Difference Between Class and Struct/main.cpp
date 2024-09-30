#include <iostream>
using namespace std;

struct PointStruct {
    int x, y;  // Default access is public
};

class PointClass {
    int x, y;  // Default access is private
public:
    void set(int a, int b) {
        x = a;
        y = b;
    }

    void display() const {
        cout << "x: " << x << ", y: " << y << endl;
    }
};

int main() {
    PointStruct ps = {1, 2};
    cout << "PointStruct: " << ps.x << ", " << ps.y << endl;

    PointClass pc;
    pc.set(3, 4);
    pc.display();

    return 0;
}
