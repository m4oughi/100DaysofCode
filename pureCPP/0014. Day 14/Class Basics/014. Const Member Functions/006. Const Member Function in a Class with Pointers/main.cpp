#include <iostream>
using namespace std;

class DataHolder {
private:
    int* data;

public:
    DataHolder(int value) : data(new int(value)) {}

    ~DataHolder() {
        delete data;
    }

    // Const member function
    int getValue() const {
        return *data;
    }

    void setValue(int value) {
        *data = value;
    }
};

int main() {
    DataHolder holder(20);
    cout << "Initial Value: " << holder.getValue() << endl;

    holder.setValue(50);  // Modify data
    cout << "Updated Value: " << holder.getValue() << endl;

    return 0;
}
