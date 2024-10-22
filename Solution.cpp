#include <iostream>
#include <algorithm>
#include <set>
#include <map>
#include <string>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
       size_t lpos  = s.find_last_not_of(" ");
        if (lpos == std::string::npos) return 0;
        std::string temp = s.substr(0,lpos);
        size_t spos  = temp.find_last_of(" ");
        cout<<temp;
        if (spos == std::string::npos) {
            return temp.length();
        } else {
            return temp.length() - spos - 1;
        }
    }
};

int main()
{
    Solution p;
    cout << p.lengthOfLastWord("a ");
    return 0;
}
