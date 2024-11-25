#include<iostream>
#include <set>
using namespace std;
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        size_t size= nums.size();
        set<int> sets;
         if (k == 0 || size == 0) return false;
        k = min(k, static_cast<int>(size) - 1);
        for (int i = 0; i <= k; i++) {
            if (sets.count(nums[i])) return true;
            sets.insert(nums[i]);
        }
        for (int i = k + 1; i < size; i++) {
            if (sets.count(nums[i])) return true;
            sets.erase(nums[i - k]);
            sets.insert(nums[i]);
        }
        return false;
    }
};
 int main() {

    return 0;
 }
