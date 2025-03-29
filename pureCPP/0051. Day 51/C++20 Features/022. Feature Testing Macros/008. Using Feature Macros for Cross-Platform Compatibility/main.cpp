#include <iostream>

#if defined(_MSC_VER)
    #if _MSC_VER >= 1929
        #define USE_SPACESHIP
    #endif
#elif defined(__GNUC__)
    #if __GNUC__ >= 10
        #define USE_SPACESHIP
    #endif
#elif defined(__clang__)
    #if __clang_major__ >= 10
        #define USE_SPACESHIP
    #endif
#endif

#ifdef USE_SPACESHIP
    #include <compare>
    struct Point {
        int x, y;
        auto operator<=>(const Point&) const = default;
    };
#endif

int main() {
#ifdef USE_SPACESHIP
    Point p1{3, 4}, p2{5, 6};
    std::cout << std::boolalpha << (p1 < p2) << "\n";
#else
    std::cout << "Three-way comparison is not supported on this compiler.\n";
#endif
    return 0;
}
