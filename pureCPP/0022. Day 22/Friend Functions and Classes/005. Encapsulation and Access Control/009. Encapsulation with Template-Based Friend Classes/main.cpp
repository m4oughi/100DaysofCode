#include <iostream>
using namespace std;

template <typename T>
class DataContainer {
private:
    T data;  // Encapsulated data

public:
    DataContainer(T d) : data(d) {}

    // Friend class template declaration
    template <typename U>
    friend class DataOperations;
};

// Friend class accessing encapsulated private member
template <typename U>
class DataOperations {
public:
    void displayData(DataContainer<U>& container) {
        cout << "Data: " << container.data << endl;  // Accessing private member
    }
};

int main() {
    DataContainer<int> container(100);
    DataOperations<int> ops;
    ops.displayData(container);  // Controlled access to encapsulated data through template-based friend class
    return 0;
}
