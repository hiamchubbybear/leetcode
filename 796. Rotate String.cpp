#include <cstddef>
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
class Solution {
public:
    bool rotateString(string s, string goal) {
      size_t size= s.size();
          for(int i = 0 ; i< size ; i++) {
              if(s == goal ) return true;
              else {
              s.push_back(s[0]);
              s.erase(0,1);
          }
          }
          return false;
    }
};
