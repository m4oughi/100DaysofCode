#include <iostream>
using namespace std;

template <typename T, int N>
class Storage {
    T data[N];

public:
    void set(int index, T value) {
        if (index < N) {
            data[index] = value;
        }
    }

    T get(int index) const {
        return data[index];
    }
};

int main() {
    Storage<int, 5> intStorage;
    intStorage.set(0, 100);
    intStorage.set(1, 200);

    cout << "First value: " << intStorage.get(0) << endl;
    cout << "Second value: " << intStorage.get(1) << endl;

    Storage<string, 3> stringStorage;
    stringStorage.set(0, "Hello");
    stringStorage.set(1, "World");

    cout << "First string: " << stringStorage.get(0) << endl;
    cout << "Second string: " << stringStorage.get(1) << endl;

    return 0;
}
