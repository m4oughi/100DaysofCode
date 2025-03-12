#include <iostream>
#include <future>
#include <stdexcept>

void failingTask(std::promise<int> p) {
    try {
        throw std::runtime_error("Computation failed!");
    } catch (...) {
        p.set_exception(std::current_exception()); // Store exception
    }
}

int main() {
    std::promise<int> p;
    std::future<int> f = p.get_future();

    std::thread t(failingTask, std::move(p));

    try {
        std::cout << "Result: " << f.get() << "\n";
    } catch (const std::exception &e) {
        std::cout << "Error: " << e.what() << "\n";
    }

    t.join();
    return 0;
}
