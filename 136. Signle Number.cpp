#include<iostream>
using namespace std;
// @author : chessy
// Not optimized
// beat 5%
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans , i =  0 ;
        size_t size = nums.size();
        sort(nums.begin() , nums.end());
            while(i < size-1) {
            cout<<i;
            if(nums[i] == nums[i+1]) {
                i+=2;
            } else {
                break;
            }
            }
        return nums[i];
    }
};
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans , i =  0 ;
        sort(nums.begin() , nums.end());
            while(i < nums.size()-1) {
            cout<<i;
            if(nums[i] == nums[i+1]) {
                i+=2;
            } else {
                break;
            }
            }
        return nums[i];
    }
};
