#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, count = 0;
        vector<int> nums;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            nums.push_back(x);
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] >= 10 && nums[i] <= 60)
            {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
