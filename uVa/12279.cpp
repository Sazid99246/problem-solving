#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int c = 0;
    while (true)
    {
        cin >> n;
        if (n == 0)
        {
            break;
        }

        c++;
        vector<int> nums;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            nums.push_back(x);
        }

        int total_treats = 0;
        int total_times = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
                total_treats++;
            else
                total_times++;
        }

        cout << "Case " << c << ": " << total_times - total_treats << endl;
    }

    return 0;
}
