#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
      std::string snum = to_string(x);
      std::string cnum = to_string(x);
      if(snum[0] == '-' ) return false;
      reverse(cnum.begin(), cnum.end());
      if(snum == cnum) return true;
      else return false;
    }
};
