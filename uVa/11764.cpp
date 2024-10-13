#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
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

        int high = 0;
        int low = 0;
        int current = 0;

        while (current < n - 1)
        {
            if (nums[current + 1] > nums[current])
                high++;
            else if (nums[current + 1] < nums[current])
                low++;
            current++;
        }

        cout << "Case " << i << ": " << high << " " << low << endl;
    }

    return 0;
}
