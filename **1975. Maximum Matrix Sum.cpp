#include<iostream>
#include <vector>
#define ll long long;
using namespace std;
class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int size = matrix.size() , max = INT32_MIN , pre_max = INT32_MIN ; long long ans= 0 ;
        cout<<max;
        pair<int ,int > pair1;
        pair<int ,int > pair2;
        for(int i=  0 ; i < size ; ++i) {
            for(int  j = 0 ; j < size ; ++j) {
                cout<<matrix[i][j]<<" ";
                if(pre_max < abs(matrix[i][j]) && matrix[i][j] < 0 ) {
                    pre_max = abs(matrix[i][j]);
                    if(max <= pre_max) {
                        swap(max , pre_max);
                        pair1.first = pair2.first; pair1.second  = pair2.second;
                    }
                    pair2.first = i; pair2.second = j;
                }
            }
            cout<<endl;
        }
        cout<<pair1.first<<"va"<<pair1.second<<endl;
        cout<<pair2.first<<"va"<<pair2.second<<endl;
        matrix[pair1.first][pair1.second]*= 1;
        matrix[pair1.first][pair1.second]*=1;
        for(int i=  0 ; i < size ; ++i) {
            for(int  j = 0 ; j < size ; ++j) {
                ans+= matrix[i][j];
                cout<<ans;
            }
        }
        return ans;
    }
};
int main(){
    return 0;
}
