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

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i + 1] != nums[i] + 1)
            {
                cout << i + 2 << endl;
                break;
            }
        }
    }

    return 0;
}
