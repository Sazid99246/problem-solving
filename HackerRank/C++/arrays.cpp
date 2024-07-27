#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *nums = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    reverse(nums, nums + n);
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    delete[] nums;
    return 0;
}
