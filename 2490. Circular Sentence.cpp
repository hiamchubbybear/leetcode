#include <cstddef>
#include <iostream>
using namespace std;
class Solution {
public:
    bool isCircularSentence(string sentence) {
      size_t size =  sentence.size();
        int cs = 0;

        for(int i = 0 ; i < size ; i++ ) {
          if(sentence[i] == ' ' ) {
                cs++;
                if((sentence[i-1] !=sentence[i+1]))
                return false;
          }
        }
        if(sentence[0] == sentence[size-1]) return true;
        if(cs == 0) return false;
        else return false;

    }
};
