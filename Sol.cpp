#include <iostream>
#include <bits/stdc++.h>
#include<set>
#include<math.h>
int processingHourAndMinute(std::string arr[], int length)
{
    int ans = length , fullDeg= 0;
    std::string hour, minute;
    for (int i = 0; i < length; i++)
    {
        hour.append(arr[i].substr(0, 2));
        minute.append(arr[i].substr(3,5));
         int degHour = ((std::stoi(hour) * 360) / 12) - ((std::stoi(minute) * 360) / 60);
        fullDeg+=abs(degHour);
    }
    std::cout<<fullDeg;
    if (fullDeg % 360 == 0)
        ans += (fullDeg / 360);
    else
        ans += (fullDeg / 360) + 1;
    return ans;
}
int main()
{
    int n;
    std::cin >> n;
        std::string arr[n];
    std::set<std::string> setCake;
    for (int i = 0; i < n; i++)
    {
        std::cin>>arr[i];
        setCake.insert(arr[i].string());
    }
    std::cout << processingHourAndMinute(arr, n);
    return 0;
}
