#include <cstddef>
#include <cstdint>
#include <iostream>
#include<algorithm>
#include <string>
class Solution {
public:
    int reverse(int x) {
      std::string snum = std::to_string(x);
      if(snum[0] == '-') std::reverse(snum.begin()+1,snum.end());
      else  std::reverse(snum.begin(),snum.end());
      size_t tize = snum.find_last_not_of('0');
      snum.substr(0,tize);
      if(std::stoll(snum) > INT32_MAX ||std::stoll(snum) < INT32_MIN ) return 0;
      return std::stoll(snum);
    }
};
