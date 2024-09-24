#include <iostream>

template <typename T>
class Calculator {
private:
    static int count;

public:
    Calculator() {
        count++;
    }

    // Static function
    static int getCount() {
        return count;
    }

    static T add(T a, T b) {
        return a + b;
    }
};

template <typename T>
int Calculator<T>::count = 0;

int main() {
    Calculator<int> calc1;
    Calculator<double> calc2;

    std::cout << "Sum (int): " << Calculator<int>::add(2, 3) << std::endl;
    std::cout << "Sum (double): " << Calculator<double>::add(2.5, 3.5) << std::endl;
    std::cout << "Count (int): " << Calculator<int>::getCount() << std::endl;

    return 0;
}
