#include <iostream>
#include <chrono>

class Base {
public:
    virtual void compute() const {
        // Simulate computation
    }
};

class Derived : public Base {
public:
    void compute() const override {
        // Simulate computation
    }
};

int main() {
    Base* baseObj = new Derived();

    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 1000000; ++i) {
        baseObj->compute();  // Call virtual function
    }
    auto end = std::chrono::high_resolution_clock::now();
    
    std::chrono::duration<double> elapsed = end - start;
    std::cout << "Elapsed time: " << elapsed.count() << " seconds." << std::endl;

    delete baseObj;
    return 0;
}
