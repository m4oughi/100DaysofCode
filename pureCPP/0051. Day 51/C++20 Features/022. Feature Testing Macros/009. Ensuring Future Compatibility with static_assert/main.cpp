#include <iostream>

#if defined(__cpp_lib_span)
    #include <span>
#else
    #error "std::span is required but not supported by this compiler."
#endif

int main() {
    static_assert(__cpp_lib_span >= 201902, "C++20 std::span is required.");
    
    int arr[] = {1, 2, 3, 4};
    std::span<int> s(arr);

    std::cout << "std::span is supported and used successfully!\n";
    return 0;
}
