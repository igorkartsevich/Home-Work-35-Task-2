#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

int main()
{
    std::vector<int> data = { 1,2,3,4,3,2,3,4,5,4,3,4 };
    
    auto make_ptr = [](std::vector<int> inData) {
        std::unordered_multiset<int> set;
        for (auto element : inData) set.emplace(element);
        std::cout << set.count(3);
        std::vector<int> vec_unique;
        std::unique_copy(set.begin(), set.end(), back_inserter(vec_unique));
        return std::make_unique<std::vector<int>> (vec_unique);
    };

    auto ptr = make_ptr(data);

    return 0;
}
