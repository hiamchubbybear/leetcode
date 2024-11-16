#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int vect[100];
    for (int i = 0; i < n; i++)
        cin >> vect[i];
    long long sum =0 ;
    for(int i= 0 ; i < k ; i++) sum+=vect[i];
    long long res = sum  ,idx = 0;
    for(int i = k ; i< n ; i ++) {
        sum = sum - vect[i-k]+ vect[i];
        if(sum > res ) {
            res = sum;
        }
        idx = i-k+1;
    }
    for(int i = 0 ; i < k ; i++) {
        cout<<vect[idx +i] << " ";
    }
    cout<<res;
    return 0;
}
