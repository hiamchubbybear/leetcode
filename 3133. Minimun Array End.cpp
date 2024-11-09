#include<iostream>
class Solution {
public:
    long long minEnd(int n, int x) {
        int count_seq = n , count_ans = 0;
        // std::bitset<32> nums(n);
        while(true) {
            std::bitset<32> comp(n & count_seq);
            if( comp & x ) {
                count_ans++;
            }
            if(count_ans==n) break;
        }
        return count_ans;
    }
};

int main() {
    Solution p;
    std::cout<<p.minEnd(3,4);
    return 0;
}
