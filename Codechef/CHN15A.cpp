#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k, count = 0;
        cin >> n >> k;
        vector<int> nums;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            a += k;
            nums.push_back(a);
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 7 == 0)
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}
