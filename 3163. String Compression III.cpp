#include <algorithm>
#include <cstddef>
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    string compressedString(string word) {
        string comp;
        size_t size = word.size();
        int count= 1;
        for(int i = 0 ; i < size ; i++) {
          if(word[i] != word[i+1] || count ==9)  {
            comp+=(to_string(count));
            comp.push_back(word[i]);
            count=1;
          } else {
            count++;
          }
        }
        return comp;
    }
};
