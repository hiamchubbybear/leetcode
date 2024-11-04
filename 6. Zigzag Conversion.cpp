#include <cstddef>
#include <iostream>
#include <pthread.h>
using namespace std;
// @author : chessy
// status : incomplete
class Solution {
public:
    string convert(string s, int numRows) {
      int jump = (numRows*2)-2;
      if(numRows == 1) return s;
      string ans;
      size_t size  = s.size();
      for(int i = 0 ; i < numRows ; i++) {
        int temp = i;
        while(temp < size) {
          ans.push_back(s[temp]);
          temp+=jump;
        }
        if(jump > 2 ) jump-=2;
        else jump = (numRows*2)-2;
      }
      return ans;
    }
};
int main() {
    // cout<<"Before testing";
  Solution p;
  if(p.convert("PINALIGYAIHRNPI", 3) == "PINALSIGYAHRPI") cout<<true;
  else cout<<"false";

  return 0;
}
