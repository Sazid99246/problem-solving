#include <bits/stdc++.h>
using namespace std;

void factorial(int n)
{
    vector<int> ans;
    ans.push_back(1);
    int carry = 0;
    int x, digit;

    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j < ans.size(); j++)
        {
            x = ans[j] * i + carry;
            ans[j] = x % 10;
            carry = x / 10;
        }

        while (carry)
        {
            ans.push_back(carry % 10);
            carry = carry / 10;
        }
    }

    reverse(ans.begin(), ans.end());

    for (auto i : ans)
    {
        cout << i;
    }
    cout << "\n";
}

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

#ifdef EPSILON
    freeopen("inputf.in", "r", stdin);
    freeopen("outputf.in", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        factorial(n);
    }
    return 0;
}
