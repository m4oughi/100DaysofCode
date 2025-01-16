#include <iostream>
#include <deque>
#include <unordered_set>

int main() {
    std::deque<int> cache;
    std::unordered_set<int> elements;
    int cacheSize = 3;
    int requests[] = {1, 2, 3, 4, 1, 3, 5};

    for (int req : requests) {
        if (elements.find(req) == elements.end()) { // Miss
            if (cache.size() == cacheSize) {
                elements.erase(cache.back());
                cache.pop_back();
            }
        } else { // Hit
            cache.erase(std::find(cache.begin(), cache.end(), req));
        }
        cache.push_front(req);
        elements.insert(req);
    }

    std::cout << "Cache content: ";
    for (int val : cache) {
        std::cout << val << " ";
    }
    return 0;
}
