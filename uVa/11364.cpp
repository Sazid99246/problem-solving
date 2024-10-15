#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> nums;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            nums.push_back(x);
        }

        int min_distance = *min_element(nums.begin(), nums.end());
        int max_distance = *max_element(nums.begin(), nums.end());

        int minimal_distance = (max_distance - min_distance) * 2;
        cout << minimal_distance << endl;
    }

    return 0;
}
