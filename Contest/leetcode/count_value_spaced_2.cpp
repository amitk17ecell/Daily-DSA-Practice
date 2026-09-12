#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int, vector<int>> positions;

        // Step 1: collect indices for each number
        for (int i = 0; i < nums.size(); i++) {
            positions[nums[i]].push_back(i);
        }

        int specialCount = 0;

        // Step 2: check condition for numbers with >= 3 occurrences
        for (auto &p : positions) {
            auto &idxs = p.second;
            if (idxs.size() >= 3) {
                bool equallySpaced = true;
                int diff = idxs[1] - idxs[0];
                for (int i = 2; i < idxs.size(); i++) {
                    if (idxs[i] - idxs[i-1] != diff) {
                        equallySpaced = false;
                        break;
                    }
                }
                if (equallySpaced) specialCount++;
            }
        }

        return specialCount;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 8, 1, 5, 1, 5, 8, 5};
    cout << sol.countSpecialIntegers(nums) << endl; // Output: 2
    return 0;
}
