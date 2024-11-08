#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a = {1, 3, 5, 7, 8, 10, 11, 123};
    vector<int> b = {0, 2, 4, 6, 1111};
    vector<int> temp;

    size_t a_size = a.size(), b_size = b.size();
    int i = 0;

    for (int j = 0; j < b_size; j++) {
        while (i < a_size && a[i] < b[j]) {
            i++;
        }
        temp.push_back(i);
    }
    for (int x : temp) {
        cout << x << "\t";
    }

    return 0;
}
