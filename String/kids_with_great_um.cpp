#include <vector>
#include <algorithm> // for std::max_element

class Solution {
public:
    std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies) {
        int maxCandies = *std::max_element(candies.begin(), candies.end());
        std::vector<bool> result(candies.size());
        int i = 0;

        while (i < candies.size()) {
            result[i] = (candies[i] + extraCandies >= maxCandies);
            i++;
        }

        return result;
    }
};
