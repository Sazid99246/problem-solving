#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int nums[5];
        for (int i = 0; i < 5; i++)
        {
            cin >> nums[i];
        }
        string flag = "Y";
        for (int i = 0; i < 4; i++)
        {
            if (nums[i + 1] != nums[i] + 1)
            {
                flag = "N";
                break;
            }
        }
        cout << flag << endl;
    }

    return 0;
}
