#include <iostream>
using namespace std;

class Data {
    mutable int cache;
    mutable bool cacheValid;

public:
    Data() : cache(0), cacheValid(false) {}

    int getCachedValue() const {
        if (!cacheValid) {
            // Simulate computation
            const_cast<Data*>(this)->cache = 42;  // Modify cache even in const function
            const_cast<Data*>(this)->cacheValid = true;
        }
        return cache;
    }
};

int main() {
    Data d;
    cout << "Cached Value: " << d.getCachedValue() << endl;
    return 0;
}
