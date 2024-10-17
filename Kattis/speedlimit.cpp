#include <bits/stdc++.h>
using namespace std;

int main()
{
    while (true)
    {
        int n;
        cin >> n;
        if (n < 0)
            break;
        vector<pair<int, int>> nums;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            pair<int, int> p(x, y);
            nums.push_back(p);
        }
        int total_miles = 0;
        total_miles += nums[0].first * nums[0].second;
        for (int i = 1; i < nums.size(); i++)
        {
            total_miles += nums[i].first * (nums[i].second - nums[i - 1].second);
        }
        cout << total_miles << " miles" << endl;
    }

    return 0;
}
