#include <iostream>
using namespace std;
class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        size_t nums1_size = nums1.size(), nums2_size = nums2.size();
        vector<int> temp;
        int i = 0, j = 0;
        while (i < nums1_size && j < nums2_size)
        {
            if (nums1[i] < nums2[j])
            {
                temp.push_back(nums1[i]);
                i++; }
            else
            {
                temp.push_back(nums2[j]);
                j++;
            }
        }
        while (i < nums1_size)
        {
            temp.push_back(nums1[i]);
            i++;
        }
        while (j < nums2_size)
        {
            temp.push_back(nums2[j]);
            j++;
        }
        int a1= temp.size()/2 , a2= temp.size()/2-1 ;
        if(temp.size()%2 !=0) return temp[a1] ;
        else  return (double)(temp[a1]+temp[a2])/2;
    }
};
