#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;
        string result;

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;

            if (i >= 0) {
                sum += a[i] - '0';
                i--;
            }
            if (j >= 0) {
                sum += b[j] - '0';
                j--;
            }

            result.push_back((sum % 2) +'0');
            carry = sum / 2;
        }

        reverse(result.begin(), result.end());
        return result;
    }
};

int main() {
    Solution p;
    cout << p.addBinary("1", "1110") << endl;
    return 0;
}
