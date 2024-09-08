#include <iostream>
#include <vector>

int main() {
    std::vector<int> realTimeData;

    // Reserve enough space to prevent reallocations during real-time processing
    realTimeData.reserve(1000);

    for (int i = 0; i < 1000; ++i) {
        realTimeData.push_back(i);

        // Check if capacity has been exceeded (it shouldn't due to reserve)
        if (realTimeData.capacity() > 1000) {
            std::cerr << "Reallocation occurred!" << std::endl;
        }
    }

    std::cout << "Final size: " << realTimeData.size() << std::endl;
    std::cout << "Final capacity: " << realTimeData.capacity() << std::endl;

    return 0;
}
