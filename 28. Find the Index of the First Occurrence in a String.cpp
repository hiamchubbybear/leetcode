#include <iostream>
#include <string>
using namespace std;;
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.find(needle)== string::npos) {
          return -1;
        } else {
          return haystack.find_first_of(needle);
        }
    }
};
int main() {
  Solution p;
  cout<<p.strStr("mississippi","issip");
}
