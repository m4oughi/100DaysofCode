#include <iostream>

struct Point3D {
    int coordinates[3];

    // Overloading the indexing operator
    int& operator[](int index) {
        return coordinates[index];
    }

    const int& operator[](int index) const {
        return coordinates[index];
    }
};

int main() {


    return 0;
}