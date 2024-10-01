#include <iostream>

template<typename T>
class Box {
private:
    T* data;
public:
    Box(int size) {
        data = new T[size];
        std::cout << "Memory allocated for " << size << " elements." << std::endl;
    }
    
    ~Box() {
        delete[] data;
        std::cout << "Memory deallocated." << std::endl;
    }
};

int main() {
    Box<int> intBox(10);  // Memory allocated for 10 integers
    Box<double> doubleBox(5);  // Memory allocated for 5 doubles
    return 0;
}
