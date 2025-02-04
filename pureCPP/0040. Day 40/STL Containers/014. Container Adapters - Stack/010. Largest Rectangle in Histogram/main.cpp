#include <iostream>
#include <stack>
#include <vector>

int largestRectangleArea(std::vector<int>& heights) {
    std::stack<int> s;
    int maxArea = 0, i = 0;

    while (i < heights.size() || !s.empty()) {
        if (i < heights.size() && (s.empty() || heights[i] >= heights[s.top()])) {
            s.push(i++);
        } else {
            int h = heights[s.top()];
            s.pop();
            int width = s.empty() ? i : i - s.top() - 1;
            maxArea = std::max(maxArea, h * width);
        }
    }
    return maxArea;
}

int main() {
    std::vector<int> histogram = {2, 1, 5, 6, 2, 3};
    std::cout << "Max Area: " << largestRectangleArea(histogram) << "\n"; // 10
    return 0;
}
