#include <iostream>

template <typename T1, typename T2>
struct DualTemplate {
    T1 first;
    T2 second;
    
    void show() const {
        std::cout << "First: " << first << ", Second: " << second << std::endl;
    }
};

int main() {
    DualTemplate<int, double> mixed;
    mixed.first = 3;
    mixed.second = 4.5;
    mixed.show();
}
