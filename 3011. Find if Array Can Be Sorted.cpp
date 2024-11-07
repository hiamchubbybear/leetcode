#include <iostream>
using namespace std;
//@author : chessy
// not to be optimized
class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        if(is_sorted(nums.begin(), nums.end())) return true;
        bool swapped = false;
        vector<int> ans;
        size_t size = nums.size();
        for(int i = 0 ; i < size ; i++) {
            bitset<8> setBit(nums[i]);
            ans.push_back(setBit.count());
        }
        for(int i  = 0 ; i < size-1 ;  i++) {
            swapped = false;
            for(int j = 1; j < size-i-1; j++  ) {
                if(ans[j] == ans[j+1] && nums[j] > nums[j+1])  {
                    swap(nums[j] , nums[j+1]);
                    swapped = true;
                }
                if(!swapped) break;
            }
        }
        return is_sorted(nums.begin() ,nums.end());
    }
};
int main() {
    vector<int> vectors = {1,256,64};
    Solution p ;
    cout<<p.canSortArray(vectors);
    return 0;
}
