#include <algorithm>
#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>

template <typename T>
void unique_vector(std::vector<T>& vec) {
    std::sort(vec.begin(), vec.end());
    auto pos = std::unique(vec.begin(), vec.end());
    vec.erase(pos, vec.end());
}

template <typename T>
void unique_vector_through_set(std::vector<T>& vec) {
    std::set<T> s(vec.begin(), vec.end());
    std::vector<T> tmp(s.begin(), s.end());
    std::swap(vec, tmp);
}

int main() {
    std::vector<int> v {1, 1, 2, 5, 6, 1, 2, 4};
    unique_vector(v);

    for (auto& item : v) {
        std::cout << " " << item;
    }
    std::cout << std::endl;

    std::vector<int> v2 {1, 1, 2, 5, 6, 1, 2, 4};
    unique_vector_through_set(v2);

    for (auto& item : v2) {
        std::cout << " " << item;
    }
    std::cout << std::endl;
    return 0;
}
