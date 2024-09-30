#include <iostream>
using namespace std;

class Cube {
public:
    // Inline member function returning a constant value
    inline int getEdges() const {
        return 12;
    }
};

int main() {
    Cube cube;
    cout << "Cube has " << cube.getEdges() << " edges." << endl;
    return 0;
}
