#include <iostream>
using namespace std;
int main()
{
    vector<int> a = {1, 3, 5, 7, 8, 10};
    vector<int> b = {0, 2, 4, 6, 9};
    vector<int> temp;
    size_t a_size = a.size(), b_size = b.size();
    int i = 0, j = 0;
    while (i < a_size && j < b_size)
    {
        if (a[i] <= b[j])
        {
            temp.push_back(a[i]);
            i++;
        }
        else
        {
            temp.push_back(b[j]);
            j++;
        }
    }
    while (i < a_size)
    {
        temp.push_back(a[i]);
        i++;
    }
    while (j < b_size)
    {
        temp.push_back(b[j]);
        j++;
    }
    for (int i = 0; i < temp.size(); i++)
    {
        cout << temp[i] << "\t";
    }
    return 0;
}
