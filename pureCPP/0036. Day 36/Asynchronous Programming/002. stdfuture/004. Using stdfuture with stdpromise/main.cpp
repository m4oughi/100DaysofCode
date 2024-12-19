#include <iostream>
#include <future>
#include <thread>

void computeSum(std::promise<int> resultPromise, int a, int b) {
    resultPromise.set_value(a + b);  // Pass result to future via promise
}

int main() {
    std::promise<int> resultPromise;
    std::future<int> result = resultPromise.get_future();

    std::thread t(computeSum, std::move(resultPromise), 5, 10);
    std::cout << "Sum: " << result.get() << std::endl;

    t.join();
    return 0;
}
