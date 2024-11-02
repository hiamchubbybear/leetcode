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
      long long ans = std::stoll(snum);
      if(ans > INT32_MAX ||ans < INT32_MIN ) return 0;
      return ans;
    }
};
