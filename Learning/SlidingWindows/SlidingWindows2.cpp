#include<iostream>
using namespace std;
int main() {
    int n, k, count = 0, temp = 0;
    cin >> n >> k;
    int vect[100];
    for (int i = 0; i < n; i++)
        cin >> vect[i];
    for (int i = 0; i < n; i++) {
        if (vect[i] <= k) count++;
    }
    for (int i = 0; i < count; i++) {
        if (vect[i] <= k) temp++;
    }
    int ans = temp;
    for (int i = count; i < n; i++) {
        if (vect[i - count] <= k) temp--;
        if (vect[i] <= k) temp++;
        ans = max(temp, ans);
    }
    cout << count - ans;
    return 0;
}
