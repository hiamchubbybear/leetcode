#include <iostream>
using namespace std;
class Solution
{
public:
    int minimizedMaximum(int n, vector<int> &quantities)
    {
        size_t size = quantities.size();
        int temp = 0 , max_ans  =0;
        for (int i = 0; i < size; i++)
        {
            temp += quantities[i];
        }
        
        sort(quantities.begin() , quantities.end());
        temp=ceil(temp/n);
        for(int i = 0 ; i< size ; i++) {
            if(quantities[i] < temp) {
                max_ans = std::max(max_ans, quantities[i]);
            }else {

            }
        }
        if (n == 1)
            return size;
        return (temp % n != 0) ? ceil((double)temp/n) : (temp/n);
    }
};
int main() {
    Solution p ;
    cout<<p.minimizedMaximum();
    return 0;
}
