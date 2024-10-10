#include <iostream>
using namespace std;

template <typename T>
class DataContainer {
private:
    T privateValue;

protected:
    T protectedValue;

public:
    DataContainer(T pValue, T prValue) : privateValue(pValue), protectedValue(prValue) {}

    // Declare a friend class
    template <typename U>
    friend class DataOperations;
};

template <typename U>
class DataOperations {
public:
    void displayData(DataContainer<U>& data) {
        cout << "Private Value: " << data.privateValue << endl;  // Access private member
        cout << "Protected Value: " << data.protectedValue << endl;  // Access protected member
    }
};

int main() {
    DataContainer<int> data(42, 84);
    DataOperations<int> ops;
    ops.displayData(data);  // Friend class accessing private and protected members in a template class
    return 0;
}
