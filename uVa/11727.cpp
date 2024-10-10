#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        vector<int> nums;
        int a, b, c, mid = 0;
        cin >> a >> b >> c;
        nums.push_back(a);
        nums.push_back(b);
        nums.push_back(c);
        sort(nums.begin(), nums.end());
        cout << "Case " << i << ": " << nums[1] << endl;
    }

    return 0;
}
