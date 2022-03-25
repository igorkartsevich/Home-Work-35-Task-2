#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

#define DEF_TO_FIND 3

int main()
{
    std::vector<int> data = { 1,2,3,4,3,2,3,4,5,4,3,4 };
    int counter = 0;
    
    auto make_ptr = [&counter](const std::vector<int>& inData) {
        std::unordered_set<int> set;

        for (auto element : inData) {
            if (element == DEF_TO_FIND) counter++;
            set.insert(element);
        }

        return std::make_unique<std::unordered_set<int>> (set);
    };

    auto ptr = make_ptr(data);

    return 0;
}
