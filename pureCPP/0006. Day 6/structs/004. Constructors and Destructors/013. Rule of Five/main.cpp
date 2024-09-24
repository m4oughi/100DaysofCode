#include <iostream>

struct Vector3D {
    double* coords;

    // Constructor
    Vector3D(double x, double y, double z) {
        coords = new double[3]{x, y, z};
    }

    // Destructor
    ~Vector3D() {
        delete[] coords;
    }

    // Copy constructor
    Vector3D(const Vector3D& v) : coords(new double[3]{v.coords[0], v.coords[1], v.coords[2]}) {}

    // Copy assignment operator
    Vector3D& operator=(const Vector3D& v) {
        if (this != &v) {
            delete[] coords;
            coords = new double[3]{v.coords[0], v.coords[1], v.coords[2]};
        }
        return *this;
    }

    // Move constructor
    Vector3D(Vector3D&& v) noexcept : coords(v.coords) {
        v.coords = nullptr;
    }

    // Move assignment operator
    Vector3D& operator=(Vector3D&& v) noexcept {
        if (this != &v) {
            delete[] coords;
            coords = v.coords;
            v.coords = nullptr;
        }
        return *this;
    }
};


int main() {


    return 0;
}