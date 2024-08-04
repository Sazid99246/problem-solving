#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }

        int max_value = nums[0];
        for (int i = 1; i < n; i++)
        {
            if (nums[i] > max_value)
            {
                max_value = nums[i];
            }
        }

        cout << max_value << endl;
    }

    return 0;
}
