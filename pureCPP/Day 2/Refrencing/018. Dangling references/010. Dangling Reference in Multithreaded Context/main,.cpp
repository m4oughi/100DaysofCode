#include <iostream>
#include <thread>
#include <vector>

void workerFunction(std::vector<int>& vec) {
    int& ref = vec[0];  // Reference to vector element
    std::cout << "Worker thread reference: " << ref << std::endl;
}

int main() {
    std::vector<int> myVec = {1, 2, 3};
    std::thread worker(workerFunction, std::ref(myVec));

    myVec.clear();  // Modify vector while thread is running

    worker.join();  // Wait for thread to finish

    return 0;
}
