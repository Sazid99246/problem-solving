#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int result = x % 2 == 0 ? x / 2 : x / 2 + 1;
    cout << result << endl;
    return 0;
}
