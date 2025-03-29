#include <iostream>
#include <format>

struct Point {
    int x, y;
};

template <>
struct std::formatter<Point> {
    constexpr auto parse(std::format_parse_context& ctx) { return ctx.begin(); }

    template <typename FormatContext>
    auto format(const Point& p, FormatContext& ctx) {
        return std::format_to(ctx.out(), "({}, {})", p.x, p.y);
    }
};

int main() {
    Point p{3, 7};
    std::cout << std::format("Point: {}\n", p);

    return 0;
}
