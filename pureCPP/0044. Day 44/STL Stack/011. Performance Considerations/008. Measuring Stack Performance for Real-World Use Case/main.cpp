#include <iostream>
#include <stack>
#include <chrono>

void simulateBrowserHistory(int n) {
    std::stack<std::string> history;
    auto start = std::chrono::high_resolution_clock::now();

    for (int i = 0; i < n; ++i) {
        history.push("Page " + std::to_string(i));
    }

    while (!history.empty()) {
        history.pop();
    }

    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "Total execution time: "
              << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count()
              << " ms\n";
}

int main() {
    simulateBrowserHistory(100000);
    return 0;
}
