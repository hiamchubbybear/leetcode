#include <cstddef>
#include <iostream>
using  namespace std;
// @author: chessy
// notice : hạn chế kéo nhiều điều kiện vào 1 if else
// notice : hạn chế kéo nhiều điều kiện vào 1 if else
// notice : hạn chế kéo nhiều điều kiện vào 1 if else
// Điều quan trọng sai nhiều lần không rút kinh nghiệm nên phải nhắc lại 3 lần
// Logic đã không giỏi thì đừng làm màu :((
class Solution {
public:
    int minChanges(string s) {
        size_t size = s.size();
        if(size == 2 && s[0] != s[1]) return 1;
        int ans = 0, temp = s[1], c = 1;
        for (int i = 0; i < size; i++) {
            temp = s[i+1];
            if (s[i] == temp){
                c++;
                }
            else {
                if (c < 2 || c % 2 != 0) {
                    ans++;
                    i++;
                    }
                else
                    c = 1;
            }
        }

         return ans;
    }
};
