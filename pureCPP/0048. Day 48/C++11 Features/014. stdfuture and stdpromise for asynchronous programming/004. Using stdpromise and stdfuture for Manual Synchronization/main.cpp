#include <iostream>
#include <thread>
#include <future>

void calculateSquare(std::promise<int> p, int x) {
    int result = x * x;
    p.set_value(result); // Set the result
}

int main() {
    std::promise<int> p;
    std::future<int> f = p.get_future();

    std::thread t(calculateSquare, std::move(p), 7);
    
    std::cout << "Square of 7 is: " << f.get() << "\n";
    t.join();
    return 0;
}
