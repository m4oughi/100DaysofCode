#include <iostream>
#include <thread>
#include <vector>
#include <algorithm>

void squareRange(std::vector<int>& data, int start, int end) {
    std::transform(data.begin() + start, data.begin() + end, data.begin() + start, [](int x) { return x * x; });
}

int main() {
    std::vector<int> data(100000, 2);

    std::thread t1(squareRange, std::ref(data), 0, data.size() / 2);
    std::thread t2(squareRange, std::ref(data), data.size() / 2, data.size());

    t1.join();
    t2.join();

    std::cout << "First element after squaring: " << data[0] << std::endl;
    std::cout << "Last element after squaring: " << data.back() << std::endl;
    return 0;
}
