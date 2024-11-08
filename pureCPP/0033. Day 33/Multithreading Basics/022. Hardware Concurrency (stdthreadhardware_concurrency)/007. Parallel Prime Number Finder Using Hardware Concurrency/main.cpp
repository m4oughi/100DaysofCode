#include <iostream>
#include <vector>
#include <thread>
#include <cmath>
#include <mutex>

std::mutex outputMutex;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= std::sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

void findPrimes(int start, int end, std::vector<int>& primes) {
    for (int i = start; i <= end; ++i) {
        if (isPrime(i)) {
            std::lock_guard<std::mutex> lock(outputMutex);
            primes.push_back(i);
        }
    }
}

int main() {
    int rangeStart = 1;
    int rangeEnd = 100;
    unsigned int numThreads = std::thread::hardware_concurrency();
    int rangePerThread = (rangeEnd - rangeStart + 1) / numThreads;

    std::vector<std::thread> threads;
    std::vector<int> primes;

    for (unsigned int i = 0; i < numThreads; ++i) {
        int start = rangeStart + i * rangePerThread;
        int end = (i == numThreads - 1) ? rangeEnd : start + rangePerThread - 1;
        threads.emplace_back(findPrimes, start, end, std::ref(primes));
    }

    for (auto& t : threads) {
        t.join();
    }

    std::cout << "Prime numbers in the range:" << std::endl;
    for (int prime : primes) {
        std::cout << prime << " ";
    }
    std::cout << std::endl;

    return 0;
}
