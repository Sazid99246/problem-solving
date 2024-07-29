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
        int *nums = new int[n];

        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        cout << *max_element(nums, nums + n) << endl;
        delete[] nums;
    }

    return 0;
}
