#include <iostream>
using namespace std;

struct PointStruct {
    int x, y;

    void move(int dx, int dy) {
        x += dx;
        y += dy;
    }

    int getX() const {  // Const member function in struct
        return x;
    }
};

class PointClass {
private:
    int x, y;
public:
    void move(int dx, int dy) {
        x += dx;
        y += dy;
    }

    int getX() const {  // Const member function in class
        return x;
    }
};

int main() {
    const PointStruct ps = {5, 10};
    // ps.move(2, 3);  // Error: cannot modify const object
    cout << "PointStruct X: " << ps.getX() << endl;

    const PointClass pc;
    // pc.move(2, 3);  // Error: cannot modify const object
    cout << "PointClass X: " << pc.getX() << endl;

    return 0;
}
