#include <iostream>
#include <vector>
using namespace std;

class LargeData {
    vector<int> data;
public:
    LargeData(int n) : data(n, 0) {}

    // Non-const member function, allows modification
    int& at(int index) {
        cout << "Non-const access at index: " << index << endl;
        return data.at(index);
    }

    // Const member function, prevents modification
    const int& at(int index) const {
        cout << "Const access at index: " << index << endl;
        return data.at(index);
    }
};

int main() {
    LargeData obj(5);
    const LargeData constObj(5);

    obj.at(2) = 100;      // Modifiable
    cout << constObj.at(2) << endl;  // Read-only access

    return 0;
}
