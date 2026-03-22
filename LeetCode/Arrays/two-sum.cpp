#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;  // value -> index
        for (int i = 0; i < (int)nums.size(); ++i) {
            int comp = target - nums[i];
            if (mp.find(comp) != mp.end()) {
                return {mp[comp], i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};
