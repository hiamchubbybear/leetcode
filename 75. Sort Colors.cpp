#include <iostream>
using namespace std;
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        size_t n = nums.size();
        vector<int> temp;
        int first = 0, last = nums.size()-1;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                if (nums[first] != 0)
                {
                    swap(nums[first], nums[i]);
                    first++;
                }
                if (nums[i] == 2)
                {
                    if (nums[last] != 2)
                    {
                        swap(nums[last], nums[i]);
                        last--;
                        n--;
                    }
                }
            }
        }
    }
};
