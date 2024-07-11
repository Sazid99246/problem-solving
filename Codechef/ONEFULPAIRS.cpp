#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int oneful = a + b + a * b;
    string result = oneful == 111 ? "YES" : "NO";
    cout << result << endl;

    return 0;
}
