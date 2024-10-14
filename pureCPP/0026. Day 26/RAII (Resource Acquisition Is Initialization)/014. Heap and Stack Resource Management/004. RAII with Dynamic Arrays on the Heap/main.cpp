#include <iostream>
#include <memory>

int main() {
    {
        std::unique_ptr<int[], std::default_delete<int[]>> arr(new int[5]);
        for (int i = 0; i < 5; ++i) {
            arr[i] = i * 10;
            std::cout << "Array value at index " << i << ": " << arr[i] << std::endl;
        }
        // The array is automatically deleted when `arr` goes out of scope.
    }  // Array memory freed here by `std::unique_ptr`.
    std::cout << "Array resource has been released." << std::endl;
}
