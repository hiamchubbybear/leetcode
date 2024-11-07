#include<iostream>
using namespace std;
// @author : chessy
// need to be revision
class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        size_t size = candidates.size();
        int max_seq = 0;
        for (size_t i = 0; i < 32; i++)
        {
            int freq = 0 ;
            for(int& ele : candidates) {
                if(ele & (1<<i))
                freq++;
            }
            max_seq = max(max_seq, freq);
        }
        return max_seq;
    }
};
