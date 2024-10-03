#include <iostream>
using namespace std;

class MultiResource {
    int* data1;
    double* data2;
public:
    MultiResource(int v1, double v2) {
        data1 = new int(v1);
        data2 = new double(v2);
    }

    MultiResource& operator=(const MultiResource& other) {
        if (this == &other) return *this;  // Self-assignment check

        // Deep copy for multiple resources
        delete data1;
        delete data2;

        data1 = new int(*other.data1);
        data2 = new double(*other.data2);

        return *this;
    }

    void display() const {
        cout << "Data1: " << *data1 << ", Data2: " << *data2 << endl;
    }

    ~MultiResource() {
        delete data1;
        delete data2;
    }
};

int main() {
    MultiResource mr1(10, 20.5), mr2(5, 10.0);
    mr2 = mr1;  // Assignment operator with multiple resources
    mr2.display();  // Output: Data1: 10, Data2: 20.5
    return 0;
}
