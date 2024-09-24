#include <iostream>

class MyObject {
public:
    static const int ID = 7; // Constant ID for each object

    void printID() const {
        std::cout << "ID: " << ID << std::endl;
    }
};

int main() {
    const int numObjects = 5; // Number of objects to allocate
    MyObject* objects = new MyObject[numObjects]; // Dynamically allocate array of objects

    for (int i = 0; i < numObjects; ++i) {
        objects[i].printID(); // Prints "ID: 7" for each object
    }

    delete[] objects; // Clean up dynamic memory
}
