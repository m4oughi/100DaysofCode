#include <iostream>
#include <vector>

template<typename T>
class Container {
private:
    std::vector<T> elements;

public:
    void add(const T& element) {
        elements.push_back(element);
    }

    T& operator[](size_t index) {
        return elements[index];  // Return by reference
    }

    const T& operator[](size_t index) const {
        return elements[index];  // Return by const reference
    }
};

int main() {
    Container<int> c;
    c.add(10);
    c.add(20);
    c[1] = 30;  // Modify element through reference
    std::cout << "c[1]: " << c[1] << std::endl;  // Output: c[1]: 30
    return 0;
}
