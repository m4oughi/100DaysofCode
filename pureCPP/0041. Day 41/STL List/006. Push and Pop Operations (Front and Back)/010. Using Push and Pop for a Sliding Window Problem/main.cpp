#include <iostream>
#include <list>

int main() {
    std::list<int> window;
    int windowSize = 3;
    int arr[] = {10, 20, 30, 40, 50};

    for (int num : arr) {
        if (window.size() == windowSize) {
            window.pop_front();  
        }
        window.push_back(num);

        std::cout << "Current window: ";
        for (int val : window) std::cout << val << " ";
        std::cout << std::endl;
    }

    return 0;
}
