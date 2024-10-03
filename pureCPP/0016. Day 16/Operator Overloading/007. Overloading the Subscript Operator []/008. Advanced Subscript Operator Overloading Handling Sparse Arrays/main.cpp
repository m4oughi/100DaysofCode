#include <iostream>
#include <map>
using namespace std;

class SparseArray {
    map<int, int> data;
public:
    int& operator[](int index) {
        return data[index];  // Access the element or insert default if not found
    }

    void display() const {
        for (const auto& [key, value] : data) {
            cout << "Index: " << key << ", Value: " << value << endl;
        }
    }
};

int main() {
    SparseArray sa;
    sa[100] = 10;  // Set sparse value
    sa[200] = 20;  // Set another sparse value
    sa.display();
    // Output:
    // Index: 100, Value: 10
    // Index: 200, Value: 20
    return 0;
}
