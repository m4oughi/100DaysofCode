#include <iostream>
using namespace std;

template <typename T>
class IContainer {
public:
    virtual void addItem(T item) = 0;
    virtual T getItem(int index) = 0;
    virtual int getSize() = 0;
};

class IntContainer : public IContainer<int> {
private:
    int data[10];
    int size;
public:
    IntContainer() : size(0) {}

    void addItem(int item) override {
        if (size < 10) {
            data[size++] = item;
        }
    }

    int getItem(int index) override {
        return (index < size) ? data[index] : -1;
    }

    int getSize() override {
        return size;
    }
};

int main() {
    IntContainer container;
    container.addItem(10);
    container.addItem(20);

    cout << "Item at index 1: " << container.getItem(1) << endl;  // Outputs "Item at index 1: 20"
    cout << "Container size: " << container.getSize() << endl;    // Outputs "Container size: 2"

    return 0;
}
