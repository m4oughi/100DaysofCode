#include <iostream>
using namespace std;

class BigObject {
public:
    BigObject() {
        cout << "BigObject created" << endl;
    }
    BigObject(const BigObject&) {
        cout << "BigObject copied" << endl;
    }
    BigObject& operator=(const BigObject&) = default;
};

class Operations {
public:
    // Overloaded function returning by value (RVO will apply)
    BigObject getObject() {
        BigObject obj;
        return obj; // RVO will optimize this return
    }

    // Overloaded function with different parameters
    BigObject getObject(int) {
        BigObject obj;
        return obj; // RVO still applies
    }
};

int main() {
    Operations ops;
    BigObject obj1 = ops.getObject();  // No copy/move due to RVO
    BigObject obj2 = ops.getObject(5); // No copy/move due to RVO
    return 0;
}
