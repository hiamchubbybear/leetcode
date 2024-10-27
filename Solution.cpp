#include <cstddef>
#include <iostream>
#include <algorithm>
#include <set>
#include <map>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        size_t size=  s.size() ;
        int ans= 0;
        int length;
        std::set<char> charSet;
        for(int i = 0 ; i  < size ; i++) {
            if( !charSet.count(s[i]))  {
                charSet.insert(s[i]);
                length++;
            } else {
                charSet.clear();
                length=1;
                charSet.insert(s[i]);
            }
            if(length > ans ) {
                ans=length;
}
        }
        return ans;
     }
};
int main()
{
    Solution p;
    string s; cin>>s;
    cout<<p.lengthOfLongestSubstring(s);
    // return 0;
}
