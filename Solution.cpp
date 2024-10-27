#include <charconv>
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
        if(size ==1) return 1;
        int ans =1;
        std::set<char> charSet;
        std::queue<char> charQueue;
        charSet.insert(s[0]);
        charQueue.push(s[0]);
        for (int i = 1 ; i<  size ; i++ ) {
        if(!charSet.count(s[i]) ) {
            charQueue.push(s[i]);
            charSet.insert(s[i]);
        }else  {
          if (charQueue.size() > ans) ans = charQueue.size();
                  while (!charQueue.empty() && charQueue.front() != s[i]) {
                      charSet.erase(charQueue.front());
                      charQueue.pop();
                  }
                  if (!charQueue.empty()) charQueue.pop();
                  charQueue.push(s[i]);
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
