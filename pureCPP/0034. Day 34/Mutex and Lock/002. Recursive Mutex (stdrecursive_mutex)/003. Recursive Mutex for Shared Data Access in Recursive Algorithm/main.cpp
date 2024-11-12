#include <iostream>
#include <thread>
#include <mutex>
#include <map>

std::recursive_mutex rmtx;
std::map<int, int> fibCache;

int fibonacci(int n) {
    if (n <= 1) return n;

    rmtx.lock();
    if (fibCache.find(n) != fibCache.end()) { // Check cache
        int result = fibCache[n];
        rmtx.unlock();
        return result;
    }
    rmtx.unlock();

    int result = fibonacci(n - 1) + fibonacci(n - 2);

    rmtx.lock();
    fibCache[n] = result; // Store in cache
    rmtx.unlock();

    return result;
}

int main() {
    std::thread t1([]() { std::cout << "Fibonacci(10): " << fibonacci(10) << "\n"; });
    std::thread t2([]() { std::cout << "Fibonacci(15): " << fibonacci(15) << "\n"; });

    t1.join();
    t2.join();
    return 0;
}
